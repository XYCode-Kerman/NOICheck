/* Generated code for Python module 'markdown_it$rules_block$blockquote'
 * created by Nuitka version 1.9.5
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_markdown_it$rules_block$blockquote" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_markdown_it$rules_block$blockquote;
PyDictObject *moduledict_markdown_it$rules_block$blockquote;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[71];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[71];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("markdown_it.rules_block.blockquote"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 71; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_markdown_it$rules_block$blockquote(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 71; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9089daa056b7e4f571e40f6641f556c9;
static PyCodeObject *codeobj_1700ef78ec8285a5db77a00f3b057f67;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[67]); CHECK_OBJECT(module_filename_obj);
    codeobj_9089daa056b7e4f571e40f6641f556c9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[68], mod_consts[68], NULL, NULL, 0, 0, 0);
    codeobj_1700ef78ec8285a5db77a00f3b057f67 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[29], mod_consts[29], mod_consts[69], NULL, 4, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_markdown_it$rules_block$blockquote$$$function__1_blockquote(PyObject *annotations);


// The module function definitions.
static PyObject *impl_markdown_it$rules_block$blockquote$$$function__1_blockquote(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_state = python_pars[0];
    PyObject *par_startLine = python_pars[1];
    PyObject *par_endLine = python_pars[2];
    PyObject *par_silent = python_pars[3];
    PyObject *var_second_char = NULL;
    PyObject *var_next_char = NULL;
    PyObject *var_oldLineMax = NULL;
    PyObject *var_pos = NULL;
    PyObject *var_max = NULL;
    PyObject *var_initial = NULL;
    PyObject *var_offset = NULL;
    PyObject *var_adjustTab = NULL;
    nuitka_bool var_spaceAfterMarker = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_oldBMarks = NULL;
    PyObject *var_ch = NULL;
    PyObject *var_oldBSCount = NULL;
    PyObject *var_lastLineEmpty = NULL;
    PyObject *var_oldSCount = NULL;
    PyObject *var_oldTShift = NULL;
    PyObject *var_terminatorRules = NULL;
    PyObject *var_oldParentType = NULL;
    PyObject *var_nextLine = NULL;
    PyObject *var_isOutdented = NULL;
    PyObject *var_evaluatesTrue = NULL;
    PyObject *var_terminate = NULL;
    PyObject *var_terminatorRule = NULL;
    PyObject *var_oldIndent = NULL;
    PyObject *var_token = NULL;
    PyObject *var_lines = NULL;
    PyObject *var_i = NULL;
    PyObject *var_item = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_assign_unpack_3__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1700ef78ec8285a5db77a00f3b057f67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    static struct Nuitka_FrameObject *cache_frame_1700ef78ec8285a5db77a00f3b057f67 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1700ef78ec8285a5db77a00f3b057f67)) {
        Py_XDECREF(cache_frame_1700ef78ec8285a5db77a00f3b057f67);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1700ef78ec8285a5db77a00f3b057f67 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1700ef78ec8285a5db77a00f3b057f67 = MAKE_FUNCTION_FRAME(tstate, codeobj_1700ef78ec8285a5db77a00f3b057f67, module_markdown_it$rules_block$blockquote, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1700ef78ec8285a5db77a00f3b057f67->m_type_description == NULL);
    frame_1700ef78ec8285a5db77a00f3b057f67 = cache_frame_1700ef78ec8285a5db77a00f3b057f67;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1700ef78ec8285a5db77a00f3b057f67);
    assert(Py_REFCNT(frame_1700ef78ec8285a5db77a00f3b057f67) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[2];
        CHECK_OBJECT(par_state);
        tmp_args_element_value_2 = par_state;
        CHECK_OBJECT(par_startLine);
        tmp_args_element_value_3 = par_startLine;
        CHECK_OBJECT(par_endLine);
        tmp_args_element_value_4 = par_endLine;
        CHECK_OBJECT(par_silent);
        tmp_args_element_value_5 = par_silent;
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_state);
        tmp_expression_value_1 = par_state;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_oldLineMax == NULL);
        var_oldLineMax = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_state);
        tmp_expression_value_3 = par_state;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[4]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_subscript_value_1 = par_startLine;
        tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_expression_value_5 = par_state;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[5]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 18;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_subscript_value_2 = par_startLine;
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 18;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pos == NULL);
        var_pos = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_state);
        tmp_expression_value_7 = par_state;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[6]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_subscript_value_3 = par_startLine;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_max == NULL);
        var_max = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_state);
        tmp_called_instance_2 = par_state;
        CHECK_OBJECT(par_startLine);
        tmp_args_element_value_6 = par_startLine;
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 21;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[7], tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 21;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_state);
        tmp_expression_value_9 = par_state;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[8]);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_pos);
        tmp_subscript_value_4 = var_pos;
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[9];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_1700ef78ec8285a5db77a00f3b057f67, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_1700ef78ec8285a5db77a00f3b057f67, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_IndexError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 25;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1700ef78ec8285a5db77a00f3b057f67->m_frame) frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_3;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(var_pos);
        tmp_iadd_expr_left_1 = var_pos;
        tmp_iadd_expr_right_1 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_iadd_expr_left_1;
        var_pos = tmp_assign_source_4;

    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_silent);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_silent);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_state);
        tmp_expression_value_11 = par_state;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[11]);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_subscript_value_5 = par_startLine;
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[10];
        tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_6 = tmp_assign_unpack_1__assign_source;
        assert(var_initial == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_initial = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_7 = tmp_assign_unpack_1__assign_source;
        assert(var_offset == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_offset = tmp_assign_source_7;
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(par_state);
        tmp_expression_value_13 = par_state;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[8]);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_pos);
        tmp_subscript_value_6 = var_pos;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_second_char == NULL);
        var_second_char = tmp_assign_source_8;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_1700ef78ec8285a5db77a00f3b057f67, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_1700ef78ec8285a5db77a00f3b057f67, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_IndexError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_None;
        assert(var_second_char == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_second_char = tmp_assign_source_9;
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 40;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1700ef78ec8285a5db77a00f3b057f67->m_frame) frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_5;
    branch_end_5:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_second_char);
        tmp_cmp_expr_left_4 = var_second_char;
        tmp_cmp_expr_right_4 = mod_consts[12];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(var_pos);
        tmp_iadd_expr_left_2 = var_pos;
        tmp_iadd_expr_right_2 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = tmp_iadd_expr_left_2;
        var_pos = tmp_assign_source_10;

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        CHECK_OBJECT(var_initial);
        tmp_iadd_expr_left_3 = var_initial;
        tmp_iadd_expr_right_3 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = tmp_iadd_expr_left_3;
        var_initial = tmp_assign_source_11;

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        CHECK_OBJECT(var_offset);
        tmp_iadd_expr_left_4 = var_offset;
        tmp_iadd_expr_right_4 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = tmp_iadd_expr_left_4;
        var_offset = tmp_assign_source_12;

    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_False;
        assert(var_adjustTab == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_adjustTab = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_assign_source_14;
        tmp_assign_source_14 = NUITKA_BOOL_TRUE;
        var_spaceAfterMarker = tmp_assign_source_14;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_second_char);
        tmp_cmp_expr_left_5 = var_second_char;
        tmp_cmp_expr_right_5 = mod_consts[13];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        nuitka_bool tmp_assign_source_15;
        tmp_assign_source_15 = NUITKA_BOOL_TRUE;
        var_spaceAfterMarker = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_state);
        tmp_expression_value_15 = par_state;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[14]);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_subscript_value_7 = par_startLine;
        tmp_add_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_offset);
        tmp_add_expr_right_3 = var_offset;
        tmp_mod_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = mod_consts[15];
        tmp_cmp_expr_left_6 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = mod_consts[16];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        CHECK_OBJECT(var_pos);
        tmp_iadd_expr_left_5 = var_pos;
        tmp_iadd_expr_right_5 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = tmp_iadd_expr_left_5;
        var_pos = tmp_assign_source_16;

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        CHECK_OBJECT(var_initial);
        tmp_iadd_expr_left_6 = var_initial;
        tmp_iadd_expr_right_6 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = tmp_iadd_expr_left_6;
        var_initial = tmp_assign_source_17;

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iadd_expr_left_7;
        PyObject *tmp_iadd_expr_right_7;
        CHECK_OBJECT(var_offset);
        tmp_iadd_expr_left_7 = var_offset;
        tmp_iadd_expr_right_7 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = tmp_iadd_expr_left_7;
        var_offset = tmp_assign_source_18;

    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = Py_False;
        assert(var_adjustTab == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_adjustTab = tmp_assign_source_19;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_True;
        assert(var_adjustTab == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_adjustTab = tmp_assign_source_20;
    }
    branch_end_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_assign_source_21;
        tmp_assign_source_21 = NUITKA_BOOL_FALSE;
        var_spaceAfterMarker = tmp_assign_source_21;
    }
    branch_end_7:;
    branch_end_6:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(par_state);
        tmp_expression_value_17 = par_state;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[4]);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_subscript_value_8 = par_startLine;
        tmp_list_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_22, 0, tmp_list_element_1);
        assert(var_oldBMarks == NULL);
        var_oldBMarks = tmp_assign_source_22;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_pos);
        tmp_ass_subvalue_1 = var_pos;
        CHECK_OBJECT(par_state);
        tmp_expression_value_18 = par_state;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[4]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_ass_subscript_1 = par_startLine;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    loop_start_1:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        if (var_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_7 = var_pos;
        CHECK_OBJECT(var_max);
        tmp_cmp_expr_right_7 = var_max;
        tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    goto loop_end_1;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_9;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 77;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = par_state;
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[8]);
        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_pos == NULL) {
            Py_DECREF(tmp_expression_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 77;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_9 = var_pos;
        tmp_assign_source_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ch;
            var_ch = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        int tmp_truth_name_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ch);
        tmp_args_element_value_7 = var_ch;
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 79;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_ch);
        tmp_cmp_expr_left_8 = var_ch;
        tmp_cmp_expr_right_8 = mod_consts[13];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iadd_expr_left_8;
        PyObject *tmp_iadd_expr_right_8;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_10;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_4;
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_8 = var_offset;
        tmp_sub_expr_left_1 = mod_consts[15];
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_5 = var_offset;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = par_state;
        tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[14]);
        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_subscript_value_10 = par_startLine;
        tmp_add_expr_right_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_10);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_adjustTab == NULL) {
            Py_DECREF(tmp_add_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE(var_adjustTab);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_add_expr_right_4 = mod_consts[10];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_add_expr_right_4 = mod_consts[22];
        condexpr_end_1:;
        tmp_mod_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_mod_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_2 = mod_consts[15];
        tmp_sub_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_left_2);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_8 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_iadd_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
        Py_DECREF(tmp_iadd_expr_right_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = tmp_iadd_expr_left_8;
        var_offset = tmp_assign_source_24;

    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iadd_expr_left_9;
        PyObject *tmp_iadd_expr_right_9;
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_9 = var_offset;
        tmp_iadd_expr_right_9 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = tmp_iadd_expr_left_9;
        var_offset = tmp_assign_source_25;

    }
    branch_end_11:;
    goto branch_end_10;
    branch_no_10:;
    goto loop_end_1;
    branch_end_10:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iadd_expr_left_10;
        PyObject *tmp_iadd_expr_right_10;
        if (var_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 91;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_10 = var_pos;
        tmp_iadd_expr_right_10 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_10, tmp_iadd_expr_right_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = tmp_iadd_expr_left_10;
        var_pos = tmp_assign_source_26;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 76;
        type_description_1 = "ooooooooooooboooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_list_element_2;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_11;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 93;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_24 = par_state;
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[14]);
        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_subscript_value_11 = par_startLine;
        tmp_list_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_27, 0, tmp_list_element_2);
        assert(var_oldBSCount == NULL);
        var_oldBSCount = tmp_assign_source_27;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_12;
        bool tmp_condition_result_13;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_ass_subscript_2;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 95;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = par_state;
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[11]);
        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_subscript_value_12 = par_startLine;
        tmp_add_expr_left_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_12);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_add_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_7 = mod_consts[10];
        tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        if (tmp_add_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spaceAfterMarker != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_13 = var_spaceAfterMarker == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_add_expr_right_6 = mod_consts[10];
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_add_expr_right_6 = mod_consts[22];
        condexpr_end_2:;
        tmp_ass_subvalue_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 94;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = par_state;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[14]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 94;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_ass_subscript_2 = par_startLine;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        if (var_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_9 = var_pos;
        CHECK_OBJECT(var_max);
        tmp_cmp_expr_right_9 = var_max;
        tmp_assign_source_28 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lastLineEmpty == NULL);
        var_lastLineEmpty = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_list_element_3;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_13;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 100;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_29 = par_state;
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[11]);
        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_subscript_value_13 = par_startLine;
        tmp_list_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_13);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_29, 0, tmp_list_element_3);
        assert(var_oldSCount == NULL);
        var_oldSCount = tmp_assign_source_29;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_ass_subscript_3;
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 101;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_2 = var_offset;
        CHECK_OBJECT(var_initial);
        tmp_sub_expr_right_2 = var_initial;
        tmp_ass_subvalue_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 101;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_30 = par_state;
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[11]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 101;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_ass_subscript_3 = par_startLine;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_list_element_4;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_14;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 103;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_32 = par_state;
        tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[5]);
        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_subscript_value_14 = par_startLine;
        tmp_list_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_14);
        Py_DECREF(tmp_expression_value_31);
        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_30, 0, tmp_list_element_4);
        assert(var_oldTShift == NULL);
        var_oldTShift = tmp_assign_source_30;
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_ass_subscript_4;
        if (var_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_3 = var_pos;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = par_state;
        tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[4]);
        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_subscript_value_15 = par_startLine;
        tmp_sub_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_15);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_35 = par_state;
        tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[5]);
        if (tmp_ass_subscribed_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_startLine);
        tmp_ass_subscript_4 = par_startLine;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscribed_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 106;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_38 = par_state;
        tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[23]);
        if (tmp_expression_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[24]);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[25]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 106;
        tmp_assign_source_31 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[27], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_terminatorRules == NULL);
        var_terminatorRules = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_expression_value_39;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 108;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_39 = par_state;
        tmp_assign_source_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[28]);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_oldParentType == NULL);
        var_oldParentType = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[29];
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 109;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_state;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[28], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        CHECK_OBJECT(par_startLine);
        tmp_add_expr_left_8 = par_startLine;
        tmp_add_expr_right_8 = mod_consts[10];
        tmp_assign_source_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nextLine == NULL);
        var_nextLine = tmp_assign_source_33;
    }
    loop_start_2:;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        if (var_nextLine == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_10 = var_nextLine;
        if (par_endLine == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_10 = par_endLine;
        tmp_operand_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    goto loop_end_2;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_expression_value_42;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 141;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_41 = par_state;
        tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[11]);
        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_expression_value_40);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 141;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_16 = var_nextLine;
        tmp_cmp_expr_left_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_16);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_cmp_expr_left_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 141;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_42 = par_state;
        tmp_cmp_expr_right_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[32]);
        if (tmp_cmp_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_11);

            exception_lineno = 141;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        Py_DECREF(tmp_cmp_expr_right_11);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_isOutdented;
            var_isOutdented = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_18;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_44 = par_state;
        tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[4]);
        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_expression_value_43);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_17 = var_nextLine;
        tmp_add_expr_left_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_17);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_add_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_add_expr_left_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_46 = par_state;
        tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[5]);
        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_9);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_add_expr_left_9);
            Py_DECREF(tmp_expression_value_45);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_18 = var_nextLine;
        tmp_add_expr_right_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_18);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_add_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_9);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        Py_DECREF(tmp_add_expr_right_9);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pos;
            var_pos = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_19;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 144;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_48 = par_state;
        tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[6]);
        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_expression_value_47);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 144;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_19 = var_nextLine;
        tmp_assign_source_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_19);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_max;
            var_max = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(var_pos);
        tmp_cmp_expr_left_12 = var_pos;
        CHECK_OBJECT(var_max);
        tmp_cmp_expr_right_12 = var_max;
        tmp_condition_result_15 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    goto loop_end_2;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_37;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_operand_value_3;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 150;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_50 = par_state;
        tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[8]);
        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pos);
        tmp_subscript_value_20 = var_pos;
        tmp_cmp_expr_left_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_20);
        Py_DECREF(tmp_expression_value_49);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_13 = mod_consts[9];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        Py_DECREF(tmp_cmp_expr_left_13);
        if (tmp_and_left_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 150;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(var_isOutdented);
        tmp_operand_value_3 = var_isOutdented;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_and_right_value_1);
        tmp_assign_source_37 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_37 = tmp_and_left_value_1;
        and_end_1:;
        {
            PyObject *old = var_evaluatesTrue;
            var_evaluatesTrue = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iadd_expr_left_11;
        PyObject *tmp_iadd_expr_right_11;
        CHECK_OBJECT(var_pos);
        tmp_iadd_expr_left_11 = var_pos;
        tmp_iadd_expr_right_11 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_11, tmp_iadd_expr_right_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_38 = tmp_iadd_expr_left_11;
        var_pos = tmp_assign_source_38;

    }
    {
        nuitka_bool tmp_condition_result_16;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_evaluatesTrue);
        tmp_truth_name_5 = CHECK_IF_TRUE(var_evaluatesTrue);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_21;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 156;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_52 = par_state;
        tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[11]);
        if (tmp_expression_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_expression_value_51);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 156;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_subscript_value_21 = var_nextLine;
        tmp_add_expr_left_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_21);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_add_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_add_expr_right_10 = mod_consts[10];
        tmp_assign_source_39 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_10, tmp_add_expr_right_10);
        Py_DECREF(tmp_add_expr_left_10);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_assign_unpack_2__assign_source;
            tmp_assign_unpack_2__assign_source = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_40 = tmp_assign_unpack_2__assign_source;
        {
            PyObject *old = var_initial;
            var_initial = tmp_assign_source_40;
            Py_INCREF(var_initial);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_41 = tmp_assign_unpack_2__assign_source;
        {
            PyObject *old = var_offset;
            var_offset = tmp_assign_source_41;
            Py_INCREF(var_offset);
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_22;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 159;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_54 = par_state;
        tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[8]);
        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_pos);
        tmp_subscript_value_22 = var_pos;
        tmp_assign_source_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_22);
        Py_DECREF(tmp_expression_value_53);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_next_char;
            var_next_char = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_1700ef78ec8285a5db77a00f3b057f67, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_1700ef78ec8285a5db77a00f3b057f67, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        tmp_cmp_expr_left_14 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_14 = PyExc_IndexError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = Py_None;
        {
            PyObject *old = var_next_char;
            var_next_char = tmp_assign_source_43;
            Py_INCREF(var_next_char);
            Py_XDECREF(old);
        }

    }
    goto branch_end_15;
    branch_no_15:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 158;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1700ef78ec8285a5db77a00f3b057f67->m_frame) frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_8;
    branch_end_15:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        CHECK_OBJECT(var_next_char);
        tmp_cmp_expr_left_15 = var_next_char;
        tmp_cmp_expr_right_15 = mod_consts[12];
        tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_iadd_expr_left_12;
        PyObject *tmp_iadd_expr_right_12;
        CHECK_OBJECT(var_pos);
        tmp_iadd_expr_left_12 = var_pos;
        tmp_iadd_expr_right_12 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_12, tmp_iadd_expr_right_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_44 = tmp_iadd_expr_left_12;
        var_pos = tmp_assign_source_44;

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_iadd_expr_left_13;
        PyObject *tmp_iadd_expr_right_13;
        CHECK_OBJECT(var_initial);
        tmp_iadd_expr_left_13 = var_initial;
        tmp_iadd_expr_right_13 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_13, tmp_iadd_expr_right_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_45 = tmp_iadd_expr_left_13;
        var_initial = tmp_assign_source_45;

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_iadd_expr_left_14;
        PyObject *tmp_iadd_expr_right_14;
        CHECK_OBJECT(var_offset);
        tmp_iadd_expr_left_14 = var_offset;
        tmp_iadd_expr_right_14 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_14, tmp_iadd_expr_right_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_46 = tmp_iadd_expr_left_14;
        var_offset = tmp_assign_source_46;

    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = Py_False;
        {
            PyObject *old = var_adjustTab;
            var_adjustTab = tmp_assign_source_47;
            Py_INCREF(var_adjustTab);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_48;
        tmp_assign_source_48 = NUITKA_BOOL_TRUE;
        var_spaceAfterMarker = tmp_assign_source_48;
    }
    goto branch_end_16;
    branch_no_16:;
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        CHECK_OBJECT(var_next_char);
        tmp_cmp_expr_left_16 = var_next_char;
        tmp_cmp_expr_right_16 = mod_consts[13];
        tmp_condition_result_19 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        nuitka_bool tmp_assign_source_49;
        tmp_assign_source_49 = NUITKA_BOOL_TRUE;
        var_spaceAfterMarker = tmp_assign_source_49;
    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_23;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 175;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_56 = par_state;
        tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[14]);
        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_expression_value_55);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 175;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_23 = var_nextLine;
        tmp_add_expr_left_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_23);
        Py_DECREF(tmp_expression_value_55);
        if (tmp_add_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_offset);
        tmp_add_expr_right_11 = var_offset;
        tmp_mod_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        if (tmp_mod_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_3 = mod_consts[15];
        tmp_cmp_expr_left_17 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_left_3);
        if (tmp_cmp_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_17 = mod_consts[16];
        tmp_condition_result_20 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        Py_DECREF(tmp_cmp_expr_left_17);
        if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iadd_expr_left_15;
        PyObject *tmp_iadd_expr_right_15;
        CHECK_OBJECT(var_pos);
        tmp_iadd_expr_left_15 = var_pos;
        tmp_iadd_expr_right_15 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_15, tmp_iadd_expr_right_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_50 = tmp_iadd_expr_left_15;
        var_pos = tmp_assign_source_50;

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_iadd_expr_left_16;
        PyObject *tmp_iadd_expr_right_16;
        CHECK_OBJECT(var_initial);
        tmp_iadd_expr_left_16 = var_initial;
        tmp_iadd_expr_right_16 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_16, tmp_iadd_expr_right_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_51 = tmp_iadd_expr_left_16;
        var_initial = tmp_assign_source_51;

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iadd_expr_left_17;
        PyObject *tmp_iadd_expr_right_17;
        CHECK_OBJECT(var_offset);
        tmp_iadd_expr_left_17 = var_offset;
        tmp_iadd_expr_right_17 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_17, tmp_iadd_expr_right_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_52 = tmp_iadd_expr_left_17;
        var_offset = tmp_assign_source_52;

    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = Py_False;
        {
            PyObject *old = var_adjustTab;
            var_adjustTab = tmp_assign_source_53;
            Py_INCREF(var_adjustTab);
            Py_XDECREF(old);
        }

    }
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = Py_True;
        {
            PyObject *old = var_adjustTab;
            var_adjustTab = tmp_assign_source_54;
            Py_INCREF(var_adjustTab);
            Py_XDECREF(old);
        }

    }
    branch_end_18:;
    goto branch_end_17;
    branch_no_17:;
    {
        nuitka_bool tmp_assign_source_55;
        tmp_assign_source_55 = NUITKA_BOOL_FALSE;
        var_spaceAfterMarker = tmp_assign_source_55;
    }
    branch_end_17:;
    branch_end_16:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_24;
        if (var_oldBMarks == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_57 = var_oldBMarks;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[34]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_59 = par_state;
        tmp_expression_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[4]);
        if (tmp_expression_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_expression_value_58);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_24 = var_nextLine;
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_24);
        Py_DECREF(tmp_expression_value_58);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 191;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT(var_pos);
        tmp_ass_subvalue_5 = var_pos;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_60 = par_state;
        tmp_ass_subscribed_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[4]);
        if (tmp_ass_subscribed_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_ass_subscribed_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_5 = var_nextLine;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subscribed_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    loop_start_3:;
    {
        bool tmp_condition_result_21;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        if (var_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 194;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_18 = var_pos;
        CHECK_OBJECT(var_max);
        tmp_cmp_expr_right_18 = var_max;
        tmp_operand_value_4 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_operand_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_21 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    goto loop_end_3;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_subscript_value_25;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_62 = par_state;
        tmp_expression_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[8]);
        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_pos == NULL) {
            Py_DECREF(tmp_expression_value_61);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_25 = var_pos;
        tmp_assign_source_56 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_25);
        Py_DECREF(tmp_expression_value_61);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ch;
            var_ch = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_9;
        int tmp_truth_name_6;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ch);
        tmp_args_element_value_9 = var_ch;
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 197;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_9);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        CHECK_OBJECT(var_ch);
        tmp_cmp_expr_left_19 = var_ch;
        tmp_cmp_expr_right_19 = mod_consts[13];
        tmp_condition_result_23 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_iadd_expr_left_18;
        PyObject *tmp_iadd_expr_right_18;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_subscript_value_26;
        nuitka_bool tmp_condition_result_24;
        int tmp_truth_name_7;
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 199;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_18 = var_offset;
        tmp_sub_expr_left_4 = mod_consts[15];
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 202;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_13 = var_offset;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 203;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_64 = par_state;
        tmp_expression_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[14]);
        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_expression_value_63);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 203;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_26 = var_nextLine;
        tmp_add_expr_right_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_26);
        Py_DECREF(tmp_expression_value_63);
        if (tmp_add_expr_right_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
        Py_DECREF(tmp_add_expr_right_13);
        if (tmp_add_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_adjustTab == NULL) {
            Py_DECREF(tmp_add_expr_left_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_7 = CHECK_IF_TRUE(var_adjustTab);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_24 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        tmp_add_expr_right_12 = mod_consts[10];
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_add_expr_right_12 = mod_consts[22];
        condexpr_end_3:;
        tmp_mod_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_left_12);
        if (tmp_mod_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_4 = mod_consts[15];
        tmp_sub_expr_right_4 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_left_4);
        if (tmp_sub_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_18 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_right_4);
        if (tmp_iadd_expr_right_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_18, tmp_iadd_expr_right_18);
        Py_DECREF(tmp_iadd_expr_right_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_57 = tmp_iadd_expr_left_18;
        var_offset = tmp_assign_source_57;

    }
    goto branch_end_21;
    branch_no_21:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_iadd_expr_left_19;
        PyObject *tmp_iadd_expr_right_19;
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 209;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_19 = var_offset;
        tmp_iadd_expr_right_19 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_19, tmp_iadd_expr_right_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_58 = tmp_iadd_expr_left_19;
        var_offset = tmp_assign_source_58;

    }
    branch_end_21:;
    goto branch_end_20;
    branch_no_20:;
    goto loop_end_3;
    branch_end_20:;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_iadd_expr_left_20;
        PyObject *tmp_iadd_expr_right_20;
        if (var_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_20 = var_pos;
        tmp_iadd_expr_right_20 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_20, tmp_iadd_expr_right_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_59 = tmp_iadd_expr_left_20;
        var_pos = tmp_assign_source_59;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 194;
        type_description_1 = "ooooooooooooboooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        if (var_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 215;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_20 = var_pos;
        CHECK_OBJECT(var_max);
        tmp_cmp_expr_right_20 = var_max;
        tmp_assign_source_60 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_lastLineEmpty;
            var_lastLineEmpty = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_27;
        if (var_oldBSCount == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 217;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_65 = var_oldBSCount;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[34]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 217;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_67 = par_state;
        tmp_expression_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[14]);
        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 217;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_expression_value_66);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 217;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_27 = var_nextLine;
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_27);
        Py_DECREF(tmp_expression_value_66);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 217;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 217;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_subscript_value_28;
        bool tmp_condition_result_25;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_ass_subscript_6;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 219;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_69 = par_state;
        tmp_expression_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[11]);
        if (tmp_expression_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_expression_value_68);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 219;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_28 = var_nextLine;
        tmp_add_expr_left_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_28);
        Py_DECREF(tmp_expression_value_68);
        if (tmp_add_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_15 = mod_consts[10];
        tmp_add_expr_left_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_15, tmp_add_expr_right_15);
        Py_DECREF(tmp_add_expr_left_15);
        if (tmp_add_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spaceAfterMarker != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_25 = var_spaceAfterMarker == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 != false) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        tmp_add_expr_right_14 = mod_consts[10];
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_add_expr_right_14 = mod_consts[22];
        condexpr_end_4:;
        tmp_ass_subvalue_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_left_14);
        if (tmp_ass_subvalue_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_ass_subvalue_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 218;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_70 = par_state;
        tmp_ass_subscribed_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[14]);
        if (tmp_ass_subscribed_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_6);

            exception_lineno = 218;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_ass_subvalue_6);
            Py_DECREF(tmp_ass_subscribed_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 218;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_6 = var_nextLine;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subscribed_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_subscript_value_29;
        if (var_oldSCount == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 222;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_71 = var_oldSCount;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[34]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 222;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_73 = par_state;
        tmp_expression_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[11]);
        if (tmp_expression_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 222;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_expression_value_72);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 222;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_29 = var_nextLine;
        tmp_args_element_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_29);
        Py_DECREF(tmp_expression_value_72);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 222;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 222;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_ass_subscript_7;
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_5 = var_offset;
        CHECK_OBJECT(var_initial);
        tmp_sub_expr_right_5 = var_initial;
        tmp_ass_subvalue_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        if (tmp_ass_subvalue_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_ass_subvalue_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_74 = par_state;
        tmp_ass_subscribed_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[11]);
        if (tmp_ass_subscribed_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_7);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_ass_subvalue_7);
            Py_DECREF(tmp_ass_subscribed_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_7 = var_nextLine;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subscribed_7);
        Py_DECREF(tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_subscript_value_30;
        if (var_oldTShift == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_75 = var_oldTShift;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[34]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_77 = par_state;
        tmp_expression_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[5]);
        if (tmp_expression_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_expression_value_76);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_30 = var_nextLine;
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_76, tmp_subscript_value_30);
        Py_DECREF(tmp_expression_value_76);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 225;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_subscript_value_31;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_ass_subscript_8;
        if (var_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 226;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_6 = var_pos;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 226;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_79 = par_state;
        tmp_expression_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[4]);
        if (tmp_expression_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_expression_value_78);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 226;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_31 = var_nextLine;
        tmp_sub_expr_right_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_31);
        Py_DECREF(tmp_expression_value_78);
        if (tmp_sub_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        Py_DECREF(tmp_sub_expr_right_6);
        if (tmp_ass_subvalue_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_ass_subvalue_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 226;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_80 = par_state;
        tmp_ass_subscribed_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[5]);
        if (tmp_ass_subscribed_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_8);

            exception_lineno = 226;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_ass_subvalue_8);
            Py_DECREF(tmp_ass_subscribed_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 226;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_8 = var_nextLine;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        Py_DECREF(tmp_ass_subscribed_8);
        Py_DECREF(tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_iadd_expr_left_21;
        PyObject *tmp_iadd_expr_right_21;
        if (var_nextLine == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 228;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_21 = var_nextLine;
        tmp_iadd_expr_right_21 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_21, tmp_iadd_expr_right_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_61 = tmp_iadd_expr_left_21;
        var_nextLine = tmp_assign_source_61;

    }
    goto loop_start_2;
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_26;
        int tmp_truth_name_8;
        if (var_lastLineEmpty == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 232;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_8 = CHECK_IF_TRUE(var_lastLineEmpty);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_26 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    goto loop_end_2;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = Py_False;
        {
            PyObject *old = var_terminate;
            var_terminate = tmp_assign_source_62;
            Py_INCREF(var_terminate);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_iter_arg_1;
        if (var_terminatorRules == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 238;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = var_terminatorRules;
        tmp_assign_source_63 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_64 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_64 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooboooooooooooooooooo";
                exception_lineno = 238;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_64;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_65 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_terminatorRule;
            var_terminatorRule = tmp_assign_source_65;
            Py_INCREF(var_terminatorRule);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        int tmp_truth_name_9;
        CHECK_OBJECT(var_terminatorRule);
        tmp_called_value_7 = var_terminatorRule;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 239;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_args_element_value_13 = par_state;
        if (var_nextLine == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 239;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_args_element_value_14 = var_nextLine;
        if (par_endLine == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 239;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_args_element_value_15 = par_endLine;
        tmp_args_element_value_16 = Py_True;
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_7, call_args);
        }

        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_9);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_9);

            exception_lineno = 239;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_27 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_9);
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = Py_True;
        {
            PyObject *old = var_terminate;
            assert(old != NULL);
            var_terminate = tmp_assign_source_66;
            Py_INCREF(var_terminate);
            Py_DECREF(old);
        }

    }
    goto loop_end_4;
    branch_no_23:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 238;
        type_description_1 = "ooooooooooooboooooooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_28;
        CHECK_OBJECT(var_terminate);
        tmp_condition_result_28 = CHECK_IF_TRUE(var_terminate) == 1;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        if (var_nextLine == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 248;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_2 = var_nextLine;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 248;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_state;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        PyObject *tmp_expression_value_81;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 250;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_81 = par_state;
        tmp_cmp_expr_left_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[32]);
        if (tmp_cmp_expr_left_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_21 = mod_consts[22];
        tmp_condition_result_29 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        Py_DECREF(tmp_cmp_expr_left_21);
        if (tmp_condition_result_29 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_subscript_value_32;
        if (var_oldBMarks == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 254;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_82 = var_oldBMarks;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[34]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 254;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_84 = par_state;
        tmp_expression_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[4]);
        if (tmp_expression_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 254;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_expression_value_83);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 254;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_32 = var_nextLine;
        tmp_args_element_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_32);
        Py_DECREF(tmp_expression_value_83);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 254;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 254;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_subscript_value_33;
        if (var_oldBSCount == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 255;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_85 = var_oldBSCount;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[34]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 255;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_87 = par_state;
        tmp_expression_value_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[14]);
        if (tmp_expression_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 255;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_expression_value_86);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 255;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_33 = var_nextLine;
        tmp_args_element_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_86, tmp_subscript_value_33);
        Py_DECREF(tmp_expression_value_86);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 255;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 255;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_subscript_value_34;
        if (var_oldTShift == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 256;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_88 = var_oldTShift;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[34]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 256;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_90 = par_state;
        tmp_expression_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[5]);
        if (tmp_expression_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 256;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_expression_value_89);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 256;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_34 = var_nextLine;
        tmp_args_element_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_89, tmp_subscript_value_34);
        Py_DECREF(tmp_expression_value_89);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 256;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 256;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_subscript_value_35;
        if (var_oldSCount == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_91 = var_oldSCount;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[34]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_93 = par_state;
        tmp_expression_value_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[11]);
        if (tmp_expression_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_expression_value_92);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_35 = var_nextLine;
        tmp_args_element_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_92, tmp_subscript_value_35);
        Py_DECREF(tmp_expression_value_92);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 257;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_expression_value_94;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 258;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_94 = par_state;
        tmp_assign_source_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[11]);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_subscr_1__target == NULL);
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_67;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        if (var_nextLine == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 258;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_assign_source_68 = var_nextLine;
        assert(tmp_inplace_assign_subscr_1__subscript == NULL);
        Py_INCREF(tmp_assign_source_68);
        tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_36;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_95 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_subscript_value_36 = tmp_inplace_assign_subscr_1__subscript;
        tmp_assign_source_69 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_95, tmp_subscript_value_36);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_inplace_assign_subscr_1__value == NULL);
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        PyObject *tmp_expression_value_96;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_isub_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 258;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_expression_value_96 = par_state;
        tmp_isub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[32]);
        if (tmp_isub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        Py_DECREF(tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_70 = tmp_isub_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_70;

    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_9 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_9 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_ass_subscript_9 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_10;
        }
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    branch_no_25:;
    goto loop_end_2;
    branch_no_24:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_subscript_value_37;
        if (var_oldBMarks == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 262;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_97 = var_oldBMarks;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[34]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 262;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_99 = par_state;
        tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[4]);
        if (tmp_expression_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 262;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_expression_value_98);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 262;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_37 = var_nextLine;
        tmp_args_element_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_98, tmp_subscript_value_37);
        Py_DECREF(tmp_expression_value_98);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 262;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 262;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_subscript_value_38;
        if (var_oldBSCount == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 263;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_100 = var_oldBSCount;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[34]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 263;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_102 = par_state;
        tmp_expression_value_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[14]);
        if (tmp_expression_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 263;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_expression_value_101);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 263;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_38 = var_nextLine;
        tmp_args_element_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_101, tmp_subscript_value_38);
        Py_DECREF(tmp_expression_value_101);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 263;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 263;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_subscript_value_39;
        if (var_oldTShift == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 264;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_103 = var_oldTShift;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[34]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 264;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_105 = par_state;
        tmp_expression_value_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[5]);
        if (tmp_expression_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 264;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_expression_value_104);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 264;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_39 = var_nextLine;
        tmp_args_element_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_104, tmp_subscript_value_39);
        Py_DECREF(tmp_expression_value_104);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 264;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 264;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_subscript_value_40;
        if (var_oldSCount == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 265;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_106 = var_oldSCount;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[34]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 265;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_108 = par_state;
        tmp_expression_value_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[11]);
        if (tmp_expression_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 265;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_expression_value_107);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 265;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_40 = var_nextLine;
        tmp_args_element_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_107, tmp_subscript_value_40);
        Py_DECREF(tmp_expression_value_107);
        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 265;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 265;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_ass_subscript_10;
        tmp_ass_subvalue_10 = mod_consts[40];
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 269;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_109 = par_state;
        tmp_ass_subscribed_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[11]);
        if (tmp_ass_subscribed_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_ass_subscribed_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 269;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_10 = var_nextLine;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        Py_DECREF(tmp_ass_subscribed_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_iadd_expr_left_22;
        PyObject *tmp_iadd_expr_right_22;
        if (var_nextLine == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 271;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_22 = var_nextLine;
        tmp_iadd_expr_right_22 = mod_consts[10];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_22, tmp_iadd_expr_right_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_71 = tmp_iadd_expr_left_22;
        var_nextLine = tmp_assign_source_71;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 132;
        type_description_1 = "ooooooooooooboooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_expression_value_110;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 273;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_110 = par_state;
        tmp_assign_source_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[32]);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_oldIndent == NULL);
        var_oldIndent = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[22];
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 274;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_state;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[32], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_instance_4;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 276;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_state;
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 276;
        tmp_assign_source_73 = CALL_METHOD_WITH_ARGS3(
            tstate,
            tmp_called_instance_4,
            mod_consts[41],
            &PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_token == NULL);
        var_token = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[9];
        CHECK_OBJECT(var_token);
        tmp_assattr_target_4 = var_token;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[43], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_list_element_5;
        CHECK_OBJECT(par_startLine);
        tmp_list_element_5 = par_startLine;
        tmp_assign_source_74 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_74, 0, tmp_list_element_5);
        tmp_list_element_5 = mod_consts[22];
        PyList_SET_ITEM0(tmp_assign_source_74, 1, tmp_list_element_5);
        assert(tmp_assign_unpack_3__assign_source == NULL);
        tmp_assign_unpack_3__assign_source = tmp_assign_source_74;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assattr_value_5 = tmp_assign_unpack_3__assign_source;
        CHECK_OBJECT(var_token);
        tmp_assattr_target_5 = var_token;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[44], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_11;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
    Py_DECREF(tmp_assign_unpack_3__assign_source);
    tmp_assign_unpack_3__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assign_source_75 = tmp_assign_unpack_3__assign_source;
        assert(var_lines == NULL);
        Py_INCREF(tmp_assign_source_75);
        var_lines = tmp_assign_source_75;
    }
    CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
    Py_DECREF(tmp_assign_unpack_3__assign_source);
    tmp_assign_unpack_3__assign_source = NULL;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 280;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_113 = par_state;
        tmp_expression_value_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[23]);
        if (tmp_expression_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[24]);
        Py_DECREF(tmp_expression_value_112);
        if (tmp_expression_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[45]);
        Py_DECREF(tmp_expression_value_111);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 280;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_25 = par_state;
        CHECK_OBJECT(par_startLine);
        tmp_args_element_value_26 = par_startLine;
        if (var_nextLine == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 280;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_27 = var_nextLine;
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_called_value_16);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_instance_5;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 282;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = par_state;
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 282;
        tmp_assign_source_76 = CALL_METHOD_WITH_ARGS3(
            tstate,
            tmp_called_instance_5,
            mod_consts[41],
            &PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_token;
            assert(old != NULL);
            var_token = tmp_assign_source_76;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[9];
        CHECK_OBJECT(var_token);
        tmp_assattr_target_6 = var_token;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[43], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(var_oldLineMax);
        tmp_assattr_value_7 = var_oldLineMax;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 285;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = par_state;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[3], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(var_oldParentType);
        tmp_assattr_value_8 = var_oldParentType;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 286;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = par_state;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[28], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        int tmp_ass_subscript_res_1;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 287;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_114 = par_state;
        tmp_ass_subvalue_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[47]);
        if (tmp_ass_subvalue_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lines);
        tmp_ass_subscribed_11 = var_lines;
        tmp_ass_subscript_11 = mod_consts[10];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, 1, tmp_ass_subvalue_11);
        Py_DECREF(tmp_ass_subvalue_11);
        if (tmp_ass_subscript_res_1 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_28;
        tmp_called_value_17 = (PyObject *)&PyEnum_Type;
        if (var_oldTShift == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 291;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_28 = var_oldTShift;
        frame_1700ef78ec8285a5db77a00f3b057f67->m_frame.f_lineno = 291;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_28);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_77 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_77;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_78;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_78 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_78 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooboooooooooooooooooo";
                exception_lineno = 291;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_79 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_80 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_80 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooboooooooooooooooooo";
            exception_lineno = 291;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_81 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_81 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooboooooooooooooooooo";
            exception_lineno = 291;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooboooooooooooooooooo";
                    exception_lineno = 291;
                    goto try_except_handler_14;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[48];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooboooooooooooooooooo";
            exception_lineno = 291;
            goto try_except_handler_14;
        }
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_13;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_12;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_82;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_82 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_82;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_83;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_83 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_item;
            var_item = tmp_assign_source_83;
            Py_INCREF(var_item);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_subscript_value_41;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_ass_subscript_12;
        PyObject *tmp_add_expr_left_16;
        PyObject *tmp_add_expr_right_16;
        if (var_oldBMarks == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_115 = var_oldBMarks;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_41 = var_i;
        tmp_ass_subvalue_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_115, tmp_subscript_value_41);
        if (tmp_ass_subvalue_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_ass_subvalue_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_116 = par_state;
        tmp_ass_subscribed_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[4]);
        if (tmp_ass_subscribed_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_12);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_i);
        tmp_add_expr_left_16 = var_i;
        if (par_startLine == NULL) {
            Py_DECREF(tmp_ass_subvalue_12);
            Py_DECREF(tmp_ass_subscribed_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_add_expr_right_16 = par_startLine;
        tmp_ass_subscript_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
        if (tmp_ass_subscript_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_12);
            Py_DECREF(tmp_ass_subscribed_12);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
        Py_DECREF(tmp_ass_subscribed_12);
        Py_DECREF(tmp_ass_subscript_12);
        Py_DECREF(tmp_ass_subvalue_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
    }
    {
        PyObject *tmp_ass_subvalue_13;
        PyObject *tmp_ass_subscribed_13;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_ass_subscript_13;
        PyObject *tmp_add_expr_left_17;
        PyObject *tmp_add_expr_right_17;
        CHECK_OBJECT(var_item);
        tmp_ass_subvalue_13 = var_item;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 293;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_117 = par_state;
        tmp_ass_subscribed_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[5]);
        if (tmp_ass_subscribed_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_i);
        tmp_add_expr_left_17 = var_i;
        if (par_startLine == NULL) {
            Py_DECREF(tmp_ass_subscribed_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 293;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_add_expr_right_17 = par_startLine;
        tmp_ass_subscript_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_17, tmp_add_expr_right_17);
        if (tmp_ass_subscript_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_13);

            exception_lineno = 293;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
        Py_DECREF(tmp_ass_subscribed_13);
        Py_DECREF(tmp_ass_subscript_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
    }
    {
        PyObject *tmp_ass_subvalue_14;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_ass_subscribed_14;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_ass_subscript_14;
        PyObject *tmp_add_expr_left_18;
        PyObject *tmp_add_expr_right_18;
        if (var_oldSCount == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 294;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_118 = var_oldSCount;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_42 = var_i;
        tmp_ass_subvalue_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_118, tmp_subscript_value_42);
        if (tmp_ass_subvalue_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_ass_subvalue_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 294;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_119 = par_state;
        tmp_ass_subscribed_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[11]);
        if (tmp_ass_subscribed_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_14);

            exception_lineno = 294;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_i);
        tmp_add_expr_left_18 = var_i;
        if (par_startLine == NULL) {
            Py_DECREF(tmp_ass_subvalue_14);
            Py_DECREF(tmp_ass_subscribed_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 294;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_add_expr_right_18 = par_startLine;
        tmp_ass_subscript_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
        if (tmp_ass_subscript_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_14);
            Py_DECREF(tmp_ass_subscribed_14);

            exception_lineno = 294;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
        Py_DECREF(tmp_ass_subscribed_14);
        Py_DECREF(tmp_ass_subscript_14);
        Py_DECREF(tmp_ass_subvalue_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
    }
    {
        PyObject *tmp_ass_subvalue_15;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_subscript_value_43;
        PyObject *tmp_ass_subscribed_15;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_ass_subscript_15;
        PyObject *tmp_add_expr_left_19;
        PyObject *tmp_add_expr_right_19;
        if (var_oldBSCount == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 295;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_120 = var_oldBSCount;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_43 = var_i;
        tmp_ass_subvalue_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_120, tmp_subscript_value_43);
        if (tmp_ass_subvalue_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
        if (par_state == NULL) {
            Py_DECREF(tmp_ass_subvalue_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 295;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_121 = par_state;
        tmp_ass_subscribed_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[14]);
        if (tmp_ass_subscribed_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_15);

            exception_lineno = 295;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_i);
        tmp_add_expr_left_19 = var_i;
        if (par_startLine == NULL) {
            Py_DECREF(tmp_ass_subvalue_15);
            Py_DECREF(tmp_ass_subscribed_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 295;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_add_expr_right_19 = par_startLine;
        tmp_ass_subscript_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_19, tmp_add_expr_right_19);
        if (tmp_ass_subscript_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_15);
            Py_DECREF(tmp_ass_subscribed_15);

            exception_lineno = 295;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
        Py_DECREF(tmp_ass_subscribed_15);
        Py_DECREF(tmp_ass_subscript_15);
        Py_DECREF(tmp_ass_subvalue_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto try_except_handler_12;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 291;
        type_description_1 = "ooooooooooooboooooooooooooooooo";
        goto try_except_handler_12;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(var_oldIndent);
        tmp_assattr_value_9 = var_oldIndent;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 297;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = par_state;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[32], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooooooooboooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1700ef78ec8285a5db77a00f3b057f67, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1700ef78ec8285a5db77a00f3b057f67->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1700ef78ec8285a5db77a00f3b057f67, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1700ef78ec8285a5db77a00f3b057f67,
        type_description_1,
        par_state,
        par_startLine,
        par_endLine,
        par_silent,
        var_second_char,
        var_next_char,
        var_oldLineMax,
        var_pos,
        var_max,
        var_initial,
        var_offset,
        var_adjustTab,
        (int)var_spaceAfterMarker,
        var_oldBMarks,
        var_ch,
        var_oldBSCount,
        var_lastLineEmpty,
        var_oldSCount,
        var_oldTShift,
        var_terminatorRules,
        var_oldParentType,
        var_nextLine,
        var_isOutdented,
        var_evaluatesTrue,
        var_terminate,
        var_terminatorRule,
        var_oldIndent,
        var_token,
        var_lines,
        var_i,
        var_item
    );


    // Release cached frame if used for exception.
    if (frame_1700ef78ec8285a5db77a00f3b057f67 == cache_frame_1700ef78ec8285a5db77a00f3b057f67) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1700ef78ec8285a5db77a00f3b057f67);
        cache_frame_1700ef78ec8285a5db77a00f3b057f67 = NULL;
    }

    assertFrameObject(frame_1700ef78ec8285a5db77a00f3b057f67);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_second_char);
    var_second_char = NULL;
    Py_XDECREF(var_next_char);
    var_next_char = NULL;
    CHECK_OBJECT(var_oldLineMax);
    Py_DECREF(var_oldLineMax);
    var_oldLineMax = NULL;
    Py_XDECREF(var_pos);
    var_pos = NULL;
    Py_XDECREF(var_max);
    var_max = NULL;
    Py_XDECREF(var_initial);
    var_initial = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_adjustTab);
    var_adjustTab = NULL;
    var_spaceAfterMarker = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_oldBMarks);
    var_oldBMarks = NULL;
    Py_XDECREF(var_ch);
    var_ch = NULL;
    Py_XDECREF(var_oldBSCount);
    var_oldBSCount = NULL;
    Py_XDECREF(var_lastLineEmpty);
    var_lastLineEmpty = NULL;
    Py_XDECREF(var_oldSCount);
    var_oldSCount = NULL;
    Py_XDECREF(var_oldTShift);
    var_oldTShift = NULL;
    Py_XDECREF(var_terminatorRules);
    var_terminatorRules = NULL;
    Py_XDECREF(var_oldParentType);
    var_oldParentType = NULL;
    Py_XDECREF(var_nextLine);
    var_nextLine = NULL;
    Py_XDECREF(var_isOutdented);
    var_isOutdented = NULL;
    Py_XDECREF(var_evaluatesTrue);
    var_evaluatesTrue = NULL;
    Py_XDECREF(var_terminate);
    var_terminate = NULL;
    Py_XDECREF(var_terminatorRule);
    var_terminatorRule = NULL;
    Py_XDECREF(var_oldIndent);
    var_oldIndent = NULL;
    Py_XDECREF(var_token);
    var_token = NULL;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_second_char);
    var_second_char = NULL;
    Py_XDECREF(var_next_char);
    var_next_char = NULL;
    Py_XDECREF(var_oldLineMax);
    var_oldLineMax = NULL;
    Py_XDECREF(var_pos);
    var_pos = NULL;
    Py_XDECREF(var_max);
    var_max = NULL;
    Py_XDECREF(var_initial);
    var_initial = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_adjustTab);
    var_adjustTab = NULL;
    var_spaceAfterMarker = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_oldBMarks);
    var_oldBMarks = NULL;
    Py_XDECREF(var_ch);
    var_ch = NULL;
    Py_XDECREF(var_oldBSCount);
    var_oldBSCount = NULL;
    Py_XDECREF(var_lastLineEmpty);
    var_lastLineEmpty = NULL;
    Py_XDECREF(var_oldSCount);
    var_oldSCount = NULL;
    Py_XDECREF(var_oldTShift);
    var_oldTShift = NULL;
    Py_XDECREF(var_terminatorRules);
    var_terminatorRules = NULL;
    Py_XDECREF(var_oldParentType);
    var_oldParentType = NULL;
    Py_XDECREF(var_nextLine);
    var_nextLine = NULL;
    Py_XDECREF(var_isOutdented);
    var_isOutdented = NULL;
    Py_XDECREF(var_evaluatesTrue);
    var_evaluatesTrue = NULL;
    Py_XDECREF(var_terminate);
    var_terminate = NULL;
    Py_XDECREF(var_terminatorRule);
    var_terminatorRule = NULL;
    Py_XDECREF(var_oldIndent);
    var_oldIndent = NULL;
    Py_XDECREF(var_token);
    var_token = NULL;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_startLine);
    Py_DECREF(par_startLine);
    CHECK_OBJECT(par_endLine);
    Py_DECREF(par_endLine);
    CHECK_OBJECT(par_silent);
    Py_DECREF(par_silent);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_startLine);
    Py_DECREF(par_startLine);
    CHECK_OBJECT(par_endLine);
    Py_DECREF(par_endLine);
    CHECK_OBJECT(par_silent);
    Py_DECREF(par_silent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_block$blockquote$$$function__1_blockquote(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_block$blockquote$$$function__1_blockquote,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1700ef78ec8285a5db77a00f3b057f67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_block$blockquote,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_markdown_it$rules_block$blockquote[] = {
    impl_markdown_it$rules_block$blockquote$$$function__1_blockquote,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_markdown_it$rules_block$blockquote);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_markdown_it$rules_block$blockquote,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_markdown_it$rules_block$blockquote,
        sizeof(function_table_markdown_it$rules_block$blockquote) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_markdown_it$rules_block$blockquote(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("markdown_it$rules_block$blockquote");

    // Store the module for future use.
    module_markdown_it$rules_block$blockquote = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("markdown_it$rules_block$blockquote: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("markdown_it$rules_block$blockquote: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initmarkdown_it$rules_block$blockquote\n");

    moduledict_markdown_it$rules_block$blockquote = MODULE_DICT(module_markdown_it$rules_block$blockquote);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_markdown_it$rules_block$blockquote,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_block$blockquote,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[70]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_block$blockquote,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_block$blockquote,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_block$blockquote,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_markdown_it$rules_block$blockquote);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_markdown_it$rules_block$blockquote);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_9089daa056b7e4f571e40f6641f556c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_2);
    }
    frame_9089daa056b7e4f571e40f6641f556c9 = MAKE_MODULE_FRAME(codeobj_9089daa056b7e4f571e40f6641f556c9, module_markdown_it$rules_block$blockquote);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9089daa056b7e4f571e40f6641f556c9);
    assert(Py_REFCNT(frame_9089daa056b7e4f571e40f6641f556c9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[53], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[54], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[56]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[57];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_markdown_it$rules_block$blockquote;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[22];
        frame_9089daa056b7e4f571e40f6641f556c9->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[58];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_markdown_it$rules_block$blockquote;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[59];
        tmp_level_value_2 = mod_consts[60];
        frame_9089daa056b7e4f571e40f6641f556c9->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_markdown_it$rules_block$blockquote,
                mod_consts[19],
                mod_consts[22]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[61];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_markdown_it$rules_block$blockquote;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[62];
        tmp_level_value_3 = mod_consts[10];
        frame_9089daa056b7e4f571e40f6641f556c9->m_frame.f_lineno = 7;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_markdown_it$rules_block$blockquote,
                mod_consts[63],
                mod_consts[22]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[63]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        frame_9089daa056b7e4f571e40f6641f556c9->m_frame.f_lineno = 9;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[65], 0)
        );

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_8);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9089daa056b7e4f571e40f6641f556c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9089daa056b7e4f571e40f6641f556c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9089daa056b7e4f571e40f6641f556c9, exception_lineno);
    }



    assertFrameObject(frame_9089daa056b7e4f571e40f6641f556c9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[66]);


        tmp_assign_source_9 = MAKE_FUNCTION_markdown_it$rules_block$blockquote$$$function__1_blockquote(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_9);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("markdown_it$rules_block$blockquote", false);

    Py_INCREF(module_markdown_it$rules_block$blockquote);
    return module_markdown_it$rules_block$blockquote;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("markdown_it$rules_block$blockquote", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
