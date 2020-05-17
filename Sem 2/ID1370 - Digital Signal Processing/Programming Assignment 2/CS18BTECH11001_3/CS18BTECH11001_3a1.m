clc
close all
n=-100:1:100;
unitstep= n>=0;
x=@(n) power(0.9,n).*unitstep;
stem(n,x(n));
xlabel('n')
ylabel('y[n]=0.9^n*u[n]')
grid on;
