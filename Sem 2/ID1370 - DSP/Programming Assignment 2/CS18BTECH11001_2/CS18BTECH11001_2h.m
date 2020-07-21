clc 
close all
syms n
p(n)=input('Enter the function x[n] : ');
n=-10:1:10;
x=@(n) p(n);
stem(n,x(n)-x(n-1));
xlabel('n')
ylabel('y[n]=x[n]-x[n-1]')
title('Backward Difference of x[n]')
grid on;