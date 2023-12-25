import rich_click as click
import rich
import pathlib
import check as chk
from rich import print

@click.group()
def cli():
    pass

@cli.command()
@click.argument('directory', type=click.Path(exists=True))
def check(directory: str):
    dir = pathlib.Path(directory)

    print(f"[cyan]开始在 [green]{dir.name}[/green] 查找题目文件夹")
    for subdir in dir.iterdir():
        print(f"[red]找到题目 [green]{subdir.name}[/green]")

    chk.check(dir)

if __name__ == "__main__":
    cli()
