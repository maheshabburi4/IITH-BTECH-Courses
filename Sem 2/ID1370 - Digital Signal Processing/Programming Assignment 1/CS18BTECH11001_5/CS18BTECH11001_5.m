info=imfinfo('test4.jpg');
X=imread('test4.jpg');
BitDepth=8;
N=1;
figure;
b=max(X);
c=min(X);
A=(round((X-c).*((2^(N))-1)./(b-c))).*((b-c)./(2^(N)-1))+c;
image (X);