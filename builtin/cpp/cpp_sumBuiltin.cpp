//=============================================================================
// Copyright (c) 2018-present Allan CORNET (Nelson)
//
// This file is released under the 3-clause BSD license. See COPYING-BSD.
//=============================================================================
#include "cpp_sumBuiltin.hpp"
#include "cpp_sum.hpp"
#include "Error.hpp"
//=============================================================================
ArrayOfVector cpp_sumBuiltin(Evaluator* eval, int nLhs, const ArrayOfVector& argIn)
{
    ArrayOfVector retval;
    if (argIn.size() != 2)
    {
        Error(ERROR_WRONG_NUMBERS_INPUT_ARGS);
    }
    if (nLhs > 1)
    {
        Error(ERROR_WRONG_NUMBERS_OUTPUT_ARGS);
    }
    ArrayOf param1 = argIn[0];
    ArrayOf param2 = argIn[1];
    retval.push_back(
        ArrayOf::doubleConstructor(
            cpp_sum(param1.getContentAsDoubleScalar(), param2.getContentAsDoubleScalar())));
    return retval;
}
//=============================================================================
