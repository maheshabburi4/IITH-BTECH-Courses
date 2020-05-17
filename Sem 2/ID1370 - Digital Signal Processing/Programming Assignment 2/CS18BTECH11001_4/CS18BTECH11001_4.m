
clear all;
close all; 
clc;
x=input('Enter the signal :');
n=length(x);
M=input('Give the number of reflections: ');
a=input('Enter attenuation coefficients :');
d=('Enter delay coefficients :');
for i=1:M
sum(1,i)=0;
end
for i=1:100000
    h(1,i)=(0.999)^i;
end
for i=1:M
    sum1=0
    for j=1:n+d(1,i)
    if j<=d(1,i)
        y(1,j)=0;
    else
        y(1,j)=x(1,j-d(1,i));
    end
    if (n+d(1,i))<=M
        for k=1:(n+d(1,i))
     sum1=sum1+(a(1,i)*y(1,k));
        end
     else
         for k=1:M
     sum1(1,i)=sum1(1,i-1)+(a(1,i)*y(1,k));
         end
    end
         
    end
    sum(1,i)=sum1;
end
xr=conv(sum,h);