clc;
close all;
syms n
p(n)=input('Enter the function x[n] : ');
d=input('Enter value of d:');
n= -10:1:10;
x=@(n) p(n);
stem(n,3*x(n-d));
xlabel('n');
ylabel('y[n]');
title('Delayed Output')
grid on;