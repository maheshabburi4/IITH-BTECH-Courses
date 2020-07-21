clear all;
close all;
clc;
I = imread('IITH.png');
K = imnoise(I,'gaussian');
[R,G,D]=size(K);

for a=1:R
for b=3:G
I(a,b,1)=K(a,b,1)-2*K(a,b-1,1)+K(a,b-2,1);
I(a,b,2)=K(a,b,2)-2*K(a,b-1,2)+K(a,b-2,1);
I(a,b,3)=K(a,b,3)-2*K(a,b-1,3)+K(a,b-2,1);
end
end
for b=1:G
for a=3:R
I(a,b,1)=K(a,b,1)-2*K(a-1,b,1)+K(a-2,b,1);
I(a,b,2)=K(a,b,2)-2*K(a-1,b,2)+K(a-2,b,1);
I(a,b,3)=K(a,b,3)-2*K(a-1,b,3)+K(a-2,b,1);
end
end