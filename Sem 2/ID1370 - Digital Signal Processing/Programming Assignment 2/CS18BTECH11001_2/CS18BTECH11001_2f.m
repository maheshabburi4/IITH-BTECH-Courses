clc 
close all
syms n a(n);
a(n)=0;
p(n)=input('Enter the function x[n] : ');
M=input('Enter the value of M: ');
k = 0:M;
n=-10:1:10;
x=@(n) p(n);
for k=0:M
    a=a +(x(n-k)/(M+1));
end
stem(n,a);
xlabel('n')
ylabel('y[n]')
title('Moving Average System')
grid on;