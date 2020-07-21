(*
 * Converting integer to binary string
 *
 * Logic :
 * By concatinating all the remainders of x by 2 until x=0
 * by reducing x to x/2 each time we get the reverse of binary string.
 * By reversing this string again we get the binary string.
 *)

class Integer inherits IO{
    binary : String <- "";
    temp : String <- "";

    remainder_2(x:Int) : String{
       if x-2*(x/2) = 0 then "0" else "1" fi
    };

    to_binary_string(x : Int) : String {{ 
        while 0<x loop {   
            temp <- temp.concat(remainder_2(x));
            x<-x/2;
        } pool;
        let i : Int <- temp.length() in 
            while 0<i loop {
                binary<-binary.concat(temp.substr(i-1,1));
                i <- i-1;
            } pool;
        if binary = "" then "0" else binary fi;
    }};
};

class Main inherits Integer{
    x : Int;
    bin_res : String;

    main() : Object {{
        out_string("Enter an Integer : ");
        x <- in_int();                      -- IO inherited by Integer class which is inherited by Main
        bin_res <- to_binary_string(x);     -- methods are declared globally
        out_string("Binary representation of ").out_int(x).out_string(" is : ".concat(bin_res.concat("\n")));
    }};
};