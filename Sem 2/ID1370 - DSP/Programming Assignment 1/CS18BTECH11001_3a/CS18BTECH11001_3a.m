[signal,fs]=audioread('CC_0101.WAV');
dsr=2;
dsignal=signal(1:dsr:end);
sound(dsignal,fs/dsr);
plot(dsignal);