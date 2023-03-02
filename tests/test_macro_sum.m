%=============================================================================
% Copyright (c) 2018-present Allan CORNET (Nelson)
%
% This file is released under the 3-clause BSD license. See COPYING-BSD.
%=============================================================================
if ~ismodule('module_skeleton')
  run([fileparts(nfilename('fullpathext')), '/../loader.m']);
end
%=============================================================================
assert_isequal(nargin('macro_sum'), -1);
assert_isequal(nargout('macro_sum'), -1);
%=============================================================================
assert_isequal(macro_sum(3, 2), 5);
%=============================================================================
assert_checkerror('macro_sum(3, 2, 4)', _('Wrong number of input arguments.'));
msg = [sprintf(_('Invalid input argument at position %d.'), 1), char(10),  _('Value must be scalar or empty.')];
assert_checkerror('macro_sum([3, 4], 2)', msg);
%=============================================================================
