n=-10:1:10;
p=-10:0.1:10;
x=sin(2*pi*(2/8)*n);
y=sin(2*pi*(2/8)*p);
stem(p,y,'b.-')
hold on 
stem(n,x,'r.-')
xlim([-10.0 10.0])
ylim([-1.00 1.00])
grid on
title('For fo=2KHz')
xlabel('n')
xlim([-10.0 10.0])
ylim([-1.00 1.00])
legend({'y[n]','x[n]'})
ylabel('Discrete Time Signals')

