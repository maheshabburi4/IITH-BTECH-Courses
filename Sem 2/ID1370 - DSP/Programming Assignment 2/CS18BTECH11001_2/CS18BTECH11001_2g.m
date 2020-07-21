M=10;
for i=1:31
    if i<=15
        x(1,i)=0;
    
    else
        x(1,i)=(0.95)^(i-15);
    end
end
n=length(x);
for i=1:n
    sum=0;
    if i<=M
       for j= 0:i-1
           sum=sum+x(1,i-j);
           y(1,i)=sum/(M+1);
       end
    else
        for j= 0:M
            sum=sum+x(1,i-j);
            y(1,i)=sum/(M+1);
        end
    end     
end
