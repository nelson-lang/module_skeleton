%=============================================================================
% Copyright (c) 2018-present Allan CORNET (Nelson)
%
% This file is released under the 3-clause BSD license. See COPYING-BSD.
%=============================================================================
function varargout = macro_sum(varargin)
	narginchk(1, 2)
	nargoutchk(0, 1)
	A = varargin{1};
	B = varargin{2};
	mustBeScalarOrEmpty(A, 1);
	mustBeReal(A, 1);
	mustBeScalarOrEmpty(B, 2);
	mustBeReal(B, 2);
	C = A + B;
	varargout{1} = C;
endfunction
%=============================================================================