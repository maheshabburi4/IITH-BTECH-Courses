clc ;
clear all;
close all;
syms n
n=-10:1:10;
u1 =n>=0;
u2 =-n>=0;
x=@(n) power(0.95,n).*u1;
y=@(n) power(0.95,-n).*u2;
xo=(x(n)-y(n))/2;
xe=(x(n)+y(n))/2;
figure(1)
stem(n,y(n));
xlabel('n')
ylabel('y[n]=x[-n]')
grid on;
figure(2)
stem(n,xe);
xlabel('n')
ylabel('xe =(x[n]+x[-n])/2')
grid on;
figure(3)
stem(n,xo);
xlabel('n')
ylabel('xo =(x[n]-x[-n])/2')
grid on;