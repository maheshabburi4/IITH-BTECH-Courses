clc 
close all
syms n
p(n)=input('Enter the function x[n] : ');
n=-10:1:10;
x=@(n) p(n);
stem(n,(x(n)-2*x(n-1)+x(n-2)));
xlabel('n')
ylabel('y[n]=x[n]-2x[n-1]+x[n-2]')
grid on;
