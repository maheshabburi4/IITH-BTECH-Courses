clc 
clear all
close all
syms n;
p(n)=input('Enter the function x[n] :');
n =-10:1:10;
x=@(n) p(n);
xe =(x(n)-x(-n))/2;
stem(n,xe);
xlabel('n');
ylabel('xo =(x[n]-x[-n])/2');
title('Odd Function of x[n]');
grid on;