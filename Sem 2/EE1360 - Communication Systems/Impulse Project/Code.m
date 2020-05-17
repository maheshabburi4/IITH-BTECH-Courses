close all;
clc;
% As these are discrete time signals
% let the Input x[n] be X
% let System impulse response h[n] is H
% let the Output y[n] be Y
[X,fs1]=audioread ('Input.wav') ;%input signal recorded in phone
[H,fs2]=audioread ('Clap Impulse.wav') ;%impulse signal recorded in a closed space
Y=conv2(X,H);% Here the Convolution of both input& impulse response of system &Output y[n](i.e Y)is obtained
figure(1)%for the input signal
plot(X);%plot of x[n]
xlabel('n');ylabel('x[n]');
title('Plot of x[n]')
figure(2)%for the response signal
plot(H);%plot of h[n]
xlabel('n');ylabel('h[n]');
title('Plot of h[n]')
figure(3)%for the convolved output
plot(Y);% plot of y[n]
xlabel('n');ylabel('y[n]');
title('Plot of y[n]=x[n]*h[n]')
sound(Y,fs1)%Outputing the convoluted signal