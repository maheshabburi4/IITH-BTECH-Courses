clear all
close all;
clc;
info=audioinfo('CC_0101.wav');
[y,fs]=audioread('CC_0101.wav');
N=4;
figure;
b=max(y);
c=min(y);
A=(round((y-c)*((2^(N))-1)/(b-c)))*((b-c)/(2^(N)-1))+c;
sound (A-y,fs);
plot(A-y);
