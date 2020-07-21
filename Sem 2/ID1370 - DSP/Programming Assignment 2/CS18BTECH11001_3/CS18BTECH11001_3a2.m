clc;
close all;
n=-100:1:100;
x=@(n) sin(2*pi*(200/8000)*n);
stem(n,x(n));
xlabel('n')
ylabel('y[n]=sin(2*pi*(200/8000)*n)')
grid on;