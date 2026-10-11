%a.
x = 0:0.2:3;
disp(x); %[output:2b42f913]

%b.
y = sin(x) .* exp(-x);
disp(y); %[output:71953eac]

%c.
A = [x',y'];
disp(A); %[output:5a0b3cc1]

%d.
dimensiune = size(A);
disp(dimensiune); %[output:231877b5]

%e.
A(5,:) = 0;
disp(A); %[output:19cdb7f9]

%[appendix]{"version":"1.0"}
%---
%[metadata:view]
%   data: {"layout":"onright"}
%---
%[output:2b42f913]
%   data: {"dataType":"text","outputData":{"text":"         0    0.2000    0.4000    0.6000    0.8000    1.0000    1.2000    1.4000    1.6000    1.8000    2.0000    2.2000    2.4000    2.6000    2.8000    3.0000\n\n","truncated":false}}
%---
%[output:71953eac]
%   data: {"dataType":"text","outputData":{"text":"         0    0.1627    0.2610    0.3099    0.3223    0.3096    0.2807    0.2430    0.2018    0.1610    0.1231    0.0896    0.0613    0.0383    0.0204    0.0070\n\n","truncated":false}}
%---
%[output:5a0b3cc1]
%   data: {"dataType":"text","outputData":{"text":"         0         0\n    0.2000    0.1627\n    0.4000    0.2610\n    0.6000    0.3099\n    0.8000    0.3223\n    1.0000    0.3096\n    1.2000    0.2807\n    1.4000    0.2430\n    1.6000    0.2018\n    1.8000    0.1610\n    2.0000    0.1231\n    2.2000    0.0896\n    2.4000    0.0613\n    2.6000    0.0383\n    2.8000    0.0204\n    3.0000    0.0070\n\n","truncated":false}}
%---
%[output:231877b5]
%   data: {"dataType":"text","outputData":{"text":"    16     2\n\n","truncated":false}}
%---
%[output:19cdb7f9]
%   data: {"dataType":"text","outputData":{"text":"         0         0\n    0.2000    0.1627\n    0.4000    0.2610\n    0.6000    0.3099\n         0         0\n    1.0000    0.3096\n    1.2000    0.2807\n    1.4000    0.2430\n    1.6000    0.2018\n    1.8000    0.1610\n    2.0000    0.1231\n    2.2000    0.0896\n    2.4000    0.0613\n    2.6000    0.0383\n    2.8000    0.0204\n    3.0000    0.0070\n\n","truncated":false}}
%---
