n=-10:1:10;
x=cos(2*pi*(5/8)*n);
stem(n,x)
xlim([-10.0 10.0])
ylim([-1.00 1.00])
grid on
title('For fo=5KHz')
xlabel('n')
ylabel('x[n]')
