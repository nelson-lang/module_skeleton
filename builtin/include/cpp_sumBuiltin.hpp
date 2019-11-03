//=============================================================================
// Copyright (c) 2018-present Allan CORNET (Nelson)
//
// This file is released under the 3-clause BSD license. See COPYING-BSD.
//=============================================================================
#pragma once
//=============================================================================
#include "ArrayOf.hpp"
#include "Evaluator.hpp"
//=============================================================================
using namespace Nelson;
//=============================================================================
ArrayOfVector cpp_sumBuiltin(Evaluator* eval, int nLhs, const ArrayOfVector& argIn);
//=============================================================================
