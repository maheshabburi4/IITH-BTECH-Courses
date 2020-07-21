[signal,fs]=audioread('mahesh.mp3');
dsr=2;
dsignal=signal(1:dsr:end);
sound(dsignal,fs/dsr);
plot(dsignal);