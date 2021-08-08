%=============================================================================
% Copyright (c) 2018-present Allan CORNET (Nelson)
%
% This file is released under the 3-clause BSD license. See COPYING-BSD.
%=============================================================================
% load C/C++ business code used by the gateway
run([fileparts(nfilename('fullpath')), '/../src/loader.m']);
%=============================================================================
% load C/C++ gateway
MODULE_NAME = 'module_skeleton';
addgateway([fileparts(nfilename('fullpath')), '/../builtin/', [MODULE_NAME, '_builtin'], getdynlibext()]);
%=============================================================================
% load macros
addpath([fileparts(nfilename('fullpath')), '/../functions'], '-frozen');
%=============================================================================
clear('MODULE_NAME');
%=============================================================================