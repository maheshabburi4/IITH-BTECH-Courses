clc 
clear all
close all
syms n
p(n)=input('Enter the function x[n] : ');
n=-10:1:10;
x=@(n) p(n);
d=input('Enter any number: ');
stem(n,x(n-d));
xlabel('n')
ylabel('y[n]=x[n-d]')
grid on;

