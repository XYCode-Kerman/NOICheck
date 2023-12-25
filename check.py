import rich
import re
import pathlib
from rich import print
from rich.table import Table
from typing import List

class CheckResult(object):
    def __init__(self, result: bool, item: str, name: str, filename: str) -> None:
        self.result: bool = result
        self.item: str = item
        self.name: str = name
        self.filename: str = filename

    def __str__(self) -> str:
        if self.result:
            return f'[green]题目 [blue]{self.name}[/blue] 下的源文件 [blue]{self.filename}[/blue] 在 [blue]{self.item}[/blue] 项检测通过'
        else:
            return f'[red]题目 [blue]{self.name}[/blue] 下的源文件 [blue]{self.filename}[/blue] 在 [blue]{self.item}[/blue] 项检测不通过'

check_result: List[CheckResult] = []

def check_directory(path: pathlib.Path):
    question_name = path.name
    source_files = [
        p
        for p in path.iterdir()
        if p.is_file()
    ]

    for source_file in source_files:
        result = None

        if source_file.name == f'{question_name}.cpp':
            result = CheckResult(True, '目录结构', question_name, source_file.name)
        else:
            result = CheckResult(True, '目录结构', question_name, source_file.name)

        check_result.append(result)

def check_freopen(path: pathlib.Path):
    question_name = path.name
    source_files = [
        p
        for p in path.iterdir()
        if p.is_file()
    ]

    for source_file in source_files:
        content = source_file.read_text('utf-8').replace("'", '"')
        stdin = content.find(f'freopen("{question_name}.in", "r", stdin);') != -1
        stdout = content.find(f'freopen("{question_name}.out", "w", stdout);') != -1

        fclose_stdin = content.find(f'fclose(stdin);') != -1
        fclose_stdout = content.find(f'fclose(stdout);') != -1

        return_0 = content.find('return 0;') != -1

        stdin_checkresult = CheckResult(stdin, 'freopen stdout 检测', question_name, source_file.name)
        stdout_checkresult = CheckResult(stdout, 'freopen stdin 检测', question_name, source_file.name)
        fclose_stdin_checkresult = CheckResult(fclose_stdin, 'fclose stdin 检测', question_name, source_file.name)
        fclose_stdout_checkresult = CheckResult(fclose_stdout, 'fclose stdout 检测', question_name, source_file.name)
        return_0_checkresult = CheckResult(return_0, 'return 0 检测', question_name, source_file.name)

        check_result.extend([stdin_checkresult, stdout_checkresult, fclose_stdin_checkresult, fclose_stdout_checkresult, return_0_checkresult])

def check(path: pathlib.Path):
    for answer in path.iterdir():
        check_directory(answer)
        check_freopen(answer)

    check_result.sort(key=lambda x: x.result, reverse=True)
    
    table = Table()
    table.add_column('[green]题目')
    table.add_column('[blue]文件')
    table.add_column('[cyan]项')
    table.add_column('[red]结果')

    for result in check_result:
        table.add_row(result.name, result.filename, result.item, f'[green]{result.result}' if result.result else f'[red]{result.result}')

    print(table)
