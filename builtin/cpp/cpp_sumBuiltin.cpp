//=============================================================================
// Copyright (c) 2018-present Allan CORNET (Nelson)
//
// This file is released under the 3-clause BSD license. See COPYING-BSD.
//=============================================================================
#include "cpp_sumBuiltin.hpp"
#include "cpp_sum.hpp"
#include "Error.hpp"
#include "Validators.hpp"
//=============================================================================
ArrayOfVector cpp_sumBuiltin(int nLhs, const ArrayOfVector& argIn)
{
    ArrayOfVector retval;
    nargincheck(argIn, 2, 2);
    nargoutcheck(nLhs, 0, 1);
    mustBeScalarOrEmpty(argIn, 0);
    mustBeFloat(argIn, 0);
    mustBeScalarOrEmpty(argIn, 1);
    mustBeFloat(argIn, 1);
    ArrayOf param1 = argIn[0];
    ArrayOf param2 = argIn[1];
    retval << ArrayOf::doubleConstructor(
            cpp_sum(param1.getContentAsDoubleScalar(), param2.getContentAsDoubleScalar()));
    return retval;
}
//=============================================================================
