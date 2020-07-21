close all;
clc;
[y,fs]=audioread('CC_0101.wav');
N=4;
b=max(y);
c=min(y);
A=(round((y-c)*((2^(N))-1)/(b-c)))*((b-c)/(2^(N)-1))+c;
sound (A,fs);
plot(A);