(* 
 * printing the number triangle
 *           1
 *          121
 *         12321
 *        1234321
 *
 * Logic :
 * if there are n lines, for the ith line fill n-i spaces 
 * then numbers from 1 to i then from i-1 to 1 and then a new line. 
 *)

class Main inherits IO {
    x : Int;
    i : Int <- 0;
    j : Int;

    main() : Object {{       --  expr={[expr;]+}
        out_string("Enter no. of lines in the number tree : ");
        x<-in_int();
        while i<x loop{
            j <- 0;
            while j<x-i-1 loop{
                out_string(" ");
                j <- j+1;
            }pool;
            j <- 0;
            while j<i+1 loop{
                out_int(j+1);
                j <- j+1;
            }pool;
            j <- i-1;
            while 0<=j loop{
                out_int(j+1);
                j <- j-1;
            }pool;
            out_string("\n");
            i<-i+1;
        }pool;
    }};
};