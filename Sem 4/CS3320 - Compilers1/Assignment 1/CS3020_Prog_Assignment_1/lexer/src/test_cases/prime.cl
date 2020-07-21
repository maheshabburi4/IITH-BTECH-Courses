(*
 * Prime number or Composite number
 *
 * Logic :
 * To find whether a number N is prime or not
 * It is enough to check if there is any factor 
 * between 2 and sqrt(N) or not
 *)

class Main inherits IO{
    x : Int;
    flag : Int <-1;

    main() : Main{{
        out_string("Enter a non-negative number : ");
        x <- in_int();
        out_int(x);
        if x=0 then out_string(" is neither a prime number nor a composite number\n") else 
        if x=1 then out_string(" is neither a prime number nor a composite number\n") else {
            let i : Int <-2 in 
                while i*i<=x loop {
                    if x-i*(x/i) = 0 then flag<-0 else flag<-flag fi;
                    i<-i+1;
                }pool;
            if flag=1 then out_string(" is a prime number\n") else out_string(" is a composite number\n") fi;
        } fi fi;
    }};
};

-- This shuld report error as EOF in string constant
"hello\
