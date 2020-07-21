function A=CS18BTECH11001_4a(B,N)
a=min(B);
b=max(B);  
A=(round((B-a)*(2^N-1)/(b-a))*(b-a)/(2^N-1))+a;
end

