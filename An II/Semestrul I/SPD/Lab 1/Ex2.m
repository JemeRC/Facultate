%a.
A = rand(4);
disp(A); %[output:2c5de36e]
%b.
rang = rank(A);
disp(rang); %[output:64797e1f]
%c.
deter = det(A);
disp(deter); %[output:97ef4c8e]
%d.
A = A';
disp(A); %[output:5a0baf2a]
%e.
A = [1 2 3; 4 5 6; 7 8 0];
b = [5; 8; -7];

x = A \ b;
disp(x); %[output:13cf5472]
%f.
diagonala = diag(A);
disp(diagonala); %[output:071cce5c]
%g.
x = [-1; 0; 2];
y = [-2; -1; 1];

A = x * y';
disp(A); %[output:640c1e1f]
B = y * x';
disp(B); %[output:5a4d213e]
x = x * pi;
disp(x); %[output:927acf69]
B_patrat = B^2;
disp(B_patrat); %[output:89ffca5f]
if det(A) ~= 0 %[output:group:4db38c8f]
    A_Inversa = inv(A);
    disp(A_Inversa)
else
    disp('Matrice singulara') %[output:9ee1d5df]
end %[output:group:4db38c8f]
A_radicali = sqrt(A);
disp(A_radicali); %[output:74265c48]
A_superior = A .* ((1:3) > (1:3)');
disp(A_superior); %[output:62c50136]
maxim = -20;
for i = 1:3
    if maxim < ( sum(A(:,i)) / 3 )
        maxim = sum(A(:,i)) / 3;
    end
    if maxim < ( sum(B(:,i)) / 3 )
        maxim = sum(B(:,i)) / 3;
    end
end
disp(maxim); %[output:72bb9d70]
for i = 1:3 %[output:group:18182a79]
    disp(max(A(i,:))) %[output:0b5d4801] %[output:454507d3] %[output:2b2b6d70]
    disp(max(A(:,i))) %[output:908c9ec6] %[output:10276e61] %[output:29216af8]
    disp(max(abs(A(i,:)))) %[output:0ad93ea5] %[output:6bb6e922] %[output:76ac9648]
    disp(max(abs(A(:,i)))) %[output:9e285a42] %[output:15ff3270] %[output:930fcff5]
end %[output:group:18182a79]
for i = 1:3 %[output:group:02f884e3]
    disp(max(B(i,:))) %[output:61992a40] %[output:23488417] %[output:704e27cc]
    disp(max(B(:,i))) %[output:486413cb] %[output:1217d1a2] %[output:29a535a8]
    disp(max(abs(B(i,:)))) %[output:290e99fe] %[output:89a9f066] %[output:4e9a7c75]
    disp(max(abs(B(:,i)))) %[output:79f4ba4a] %[output:308eeae5] %[output:938d235a]
end %[output:group:02f884e3]
urmaA = trace(A);
disp(urmaA); %[output:5a49ed49]
urmaB = trace(B);
disp(urmaB); %[output:62046452]
C = [1 1 0 0 0; 1 1 1 0 0; 0 1 1 1 0; 0 0 1 1 1; 0 0 0 1 1];
disp(C); %[output:511c2f1c]

%[appendix]{"version":"1.0"}
%---
%[metadata:view]
%   data: {"layout":"onright"}
%---
%[output:2c5de36e]
%   data: {"dataType":"text","outputData":{"text":"    0.2599    0.1818    0.8693    0.8530\n    0.8001    0.2638    0.5797    0.6221\n    0.4314    0.1455    0.5499    0.3510\n    0.9106    0.1361    0.1450    0.5132\n\n","truncated":false}}
%---
%[output:64797e1f]
%   data: {"dataType":"text","outputData":{"text":"     4\n\n","truncated":false}}
%---
%[output:97ef4c8e]
%   data: {"dataType":"text","outputData":{"text":"   -0.0154\n\n","truncated":false}}
%---
%[output:5a0baf2a]
%   data: {"dataType":"text","outputData":{"text":"    0.2599    0.8001    0.4314    0.9106\n    0.1818    0.2638    0.1455    0.1361\n    0.8693    0.5797    0.5499    0.1450\n    0.8530    0.6221    0.3510    0.5132\n\n","truncated":false}}
%---
%[output:13cf5472]
%   data: {"dataType":"text","outputData":{"text":"    -1\n     0\n     2\n\n","truncated":false}}
%---
%[output:071cce5c]
%   data: {"dataType":"text","outputData":{"text":"     1\n     5\n     0\n\n","truncated":false}}
%---
%[output:640c1e1f]
%   data: {"dataType":"text","outputData":{"text":"     2     1    -1\n     0     0     0\n    -4    -2     2\n\n","truncated":false}}
%---
%[output:5a4d213e]
%   data: {"dataType":"text","outputData":{"text":"     2     0    -4\n     1     0    -2\n    -1     0     2\n\n","truncated":false}}
%---
%[output:927acf69]
%   data: {"dataType":"text","outputData":{"text":"   -3.1416\n         0\n    6.2832\n\n","truncated":false}}
%---
%[output:89ffca5f]
%   data: {"dataType":"text","outputData":{"text":"     8     0   -16\n     4     0    -8\n    -4     0     8\n\n","truncated":false}}
%---
%[output:9ee1d5df]
%   data: {"dataType":"text","outputData":{"text":"Matrice singulara\n","truncated":false}}
%---
%[output:74265c48]
%   data: {"dataType":"text","outputData":{"text":"   1.4142 + 0.0000i   1.0000 + 0.0000i   0.0000 + 1.0000i\n   0.0000 + 0.0000i   0.0000 + 0.0000i   0.0000 + 0.0000i\n   0.0000 + 2.0000i   0.0000 + 1.4142i   1.4142 + 0.0000i\n\n","truncated":false}}
%---
%[output:62c50136]
%   data: {"dataType":"text","outputData":{"text":"     0     1    -1\n     0     0     0\n     0     0     0\n\n","truncated":false}}
%---
%[output:72bb9d70]
%   data: {"dataType":"text","outputData":{"text":"    0.6667\n\n","truncated":false}}
%---
%[output:0b5d4801]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:908c9ec6]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:0ad93ea5]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:9e285a42]
%   data: {"dataType":"text","outputData":{"text":"     4\n\n","truncated":false}}
%---
%[output:454507d3]
%   data: {"dataType":"text","outputData":{"text":"     0\n\n","truncated":false}}
%---
%[output:10276e61]
%   data: {"dataType":"text","outputData":{"text":"     1\n\n","truncated":false}}
%---
%[output:6bb6e922]
%   data: {"dataType":"text","outputData":{"text":"     0\n\n","truncated":false}}
%---
%[output:15ff3270]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:2b2b6d70]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:29216af8]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:76ac9648]
%   data: {"dataType":"text","outputData":{"text":"     4\n\n","truncated":false}}
%---
%[output:930fcff5]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:61992a40]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:486413cb]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:290e99fe]
%   data: {"dataType":"text","outputData":{"text":"     4\n\n","truncated":false}}
%---
%[output:79f4ba4a]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:23488417]
%   data: {"dataType":"text","outputData":{"text":"     1\n\n","truncated":false}}
%---
%[output:1217d1a2]
%   data: {"dataType":"text","outputData":{"text":"     0\n\n","truncated":false}}
%---
%[output:89a9f066]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:308eeae5]
%   data: {"dataType":"text","outputData":{"text":"     0\n\n","truncated":false}}
%---
%[output:704e27cc]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:29a535a8]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:4e9a7c75]
%   data: {"dataType":"text","outputData":{"text":"     2\n\n","truncated":false}}
%---
%[output:938d235a]
%   data: {"dataType":"text","outputData":{"text":"     4\n\n","truncated":false}}
%---
%[output:5a49ed49]
%   data: {"dataType":"text","outputData":{"text":"     4\n\n","truncated":false}}
%---
%[output:62046452]
%   data: {"dataType":"text","outputData":{"text":"     4\n\n","truncated":false}}
%---
%[output:511c2f1c]
%   data: {"dataType":"text","outputData":{"text":"     1     1     0     0     0\n     1     1     1     0     0\n     0     1     1     1     0\n     0     0     1     1     1\n     0     0     0     1     1\n\n","truncated":false}}
%---
