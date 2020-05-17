clc;
close all;
j = 1:10;
a=input('Enter value of a:');
b=input('Enter value of b:'); 
x1(j)=(0.9.^j);
x2(j)=sin(2*pi*(200/8000)*j);
%consider y[n]=3*x[n]
y1(j)=3*x1(j);
y2(j)=3*x2(j);
z(j)= (a*y1(j) +b*y2(j));
w(j)=3*(a*x1(j)+b*x2(j));
subplot(2,1,1);
stem(j,z(j))
xlabel('n')
ylabel('a*y1[n]+b*y2[n]')
grid on;
subplot(2,1,2);
stem(j,w(j))
xlabel('n')
ylabel('y[n]')
grid on;