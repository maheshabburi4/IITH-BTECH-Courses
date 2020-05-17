clear all;
close all; 
clc;
mygrayimg = imread('IITH.png');
[m,n]=size(mygrayimg);
x=mygrayimg;
 gau = imnoise(mygrayimg, 'gaussian', 0, 0.01);
 M=100;

for i=1:m
    for j=1:n
    sum=0;
    if i<=M
       for k= 0:j-1
           sum=sum+x(i,j-k);
           y(i,j)=sum/(M+1);
       end
    else
        for k= 0:M
            sum=sum+x(i,j-k);
            y(i,j)=sum/(M+1);
        end
    end
    end
end