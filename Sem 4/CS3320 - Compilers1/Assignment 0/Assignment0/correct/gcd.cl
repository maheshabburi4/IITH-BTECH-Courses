-- G.C.D of two numbers

class Main {
    x : Int;
    y : Int;
    gcd : Int;
    i_o : IO <- (new IO);

    main() : Object{{
        i_o.out_string("Enter x : ");
        x <- i_o.in_int();
        i_o.out_string("Enter y : ");
        y <- i_o.in_int();
        gcd <- find_gcd(x,y);
        i_o.out_string("GCD of ").out_int(x).out_string(" and ").out_int(y).out_string(" is : ").out_int(gcd).out_string("\n");
    }};
    
    find_gcd(i : Int,j : Int) : Int{
        if not j=0 then find_gcd(j,i-j*(i/j)) else i fi
    };
};