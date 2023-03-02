%=============================================================================
% Copyright (c) 2018-present Allan CORNET (Nelson)
%
% This file is released under the 3-clause BSD license. See COPYING-BSD.
%=============================================================================
if ~ismodule('module_skeleton')
    run([fileparts(nfilename('fullpathext')), '/../loader.m']);
end
%=============================================================================
tic()
r = macro_sum(3,5);
toc
%=============================================================================
