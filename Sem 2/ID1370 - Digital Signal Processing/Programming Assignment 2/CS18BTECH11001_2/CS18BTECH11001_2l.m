clc 
close all
syms n
p(n)=input('Enter the function x[n] : ');
n=-10:1:10;
x=@(n) p(n);
stem(n,(x(n-2)+x(2-n)));
xlabel('n')
ylabel('y[n]=x[n-2]+x[2-n]')
grid on;