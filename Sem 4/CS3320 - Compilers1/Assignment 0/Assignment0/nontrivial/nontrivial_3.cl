(*
 * Problem :
 * Find the minimum Z in the range L and R 
 * such that f(X,Y,Z)=(X&Z)*(Y&Z) will be maximum
 * where & is bitwise and
 *
 * Logic :
 * If L<=X|Y<=R then Z=X|Y where | is bitwise or.
 * Else set initial z at l and iterate i from L+1 to R 
 * and if the value of f(X,Y,i) is greater than before 
 * values update result and z value
 *
 * Constraints : (as it can't increase memory than these values)
 * 0<= X,Y,L,R < 1024
 * R-L<130
 *)

class Main inherits IO{
    x : Int;
    y : Int;
    l : Int;
    r : Int;
    bin_x : String;
    bin_y : String;
    optimal_z :Int;
    result : Int;

    main() : Object{{
        out_string("Enter the value of X : ");
        x <- in_int();
        out_string("Enter the value of Y : ");
        y <- in_int();
        out_string("Enter the value of L : ");
        l <- in_int();
        out_string("Enter the value of R : ");
        r <- in_int();
        if 1023<x then out_string("please enter X according to constraints\n") else
        if 1023<y then out_string("please enter Y according to constraints\n") else 
        if 1023<l then out_string("please enter L according to constraints\n") else
        if 1023<r then out_string("please enter R according to constraints\n") else
        if r-l<0 then out_string("please enter r greater than l\n") else 
        if 130<(r-l) then out_string("please enter L and R according to constraints\n") 
        else{
            solve();
            out_string("The minimum value of z where ");
            out_int(l);
            out_string("<=z<=");
            out_int(r);
            out_string(" such that f(x,y,z) is maximised = ");
            out_int(optimal_z);
            out_string("\nThe maximum f(x,y,z) = ");
            out_int(result);
            out_string("\n");
        }fi fi fi fi fi fi;
    }};

    mod(p:Int,q:Int) : Int{
        p-q*(p/q)
    };
    
    convert_binary(p : Int) : String{
        let i :Int <- 0, temp : String <- "", str : String <- "" in {
            while i<10 loop {
                if mod(p,2)=1 then temp<-temp.concat("1") else temp<-temp.concat("0") fi;
                i <- i+1;
                p <- p/2;
            }pool;
            while 0<i loop {
                str<- str.concat(temp.substr(i-1,1));
                i<-i-1;
            }pool;
            str;
        }
    };
    
    convert_int(s:String) : Int{{
        let i : Int <- 0, ans : Int <-0 in {
            while i<s.length() loop {
                if s.substr(i,1)="1" then ans<-ans*2+1 else ans<-ans*2 fi;
                i <- i+1;
            }pool;
            ans;
        };
    }};
    
    bin_and(p : String,q : String) : String {
        let i : Int <-0 ,str : String<-"" in {
            while i<p.length() loop{
                if p.substr(i,1) = "1" 
                    then {
                        if q.substr(i,1) = "1" 
                            then str <- str.concat("1")
                            else str <- str.concat("0") 
                        fi;
                    }
                    else
                        str <- str.concat("0") 
                fi;
                i<-i+1;
            }pool;
            str;
        }
    };

    bin_or(p : String,q : String) : String {
        let i : Int <-0 ,str : String<-"" in {
            while i<p.length() loop{
                if p.substr(i,1) = "0" 
                    then {
                        if q.substr(i,1) = "0" 
                            then str <- str.concat("0")
                            else str <- str.concat("1") 
                        fi;
                    }
                    else
                        str <- str.concat("1") 
                fi;
                i<-i+1;
            }pool;
            str;
        }
    };
    
    f(a : Int, b : Int, c : Int ) : Int {{
        let bin_c : String <- convert_binary(c), temp1: Int, temp2: Int in {
            temp1 <- convert_int(bin_and(bin_x,bin_c));
            temp2 <- convert_int(bin_and(bin_y,bin_c));
            temp1*temp2;
        };
    }};

    solve() : Object{{
        bin_x <- convert_binary(x);
        bin_y <- convert_binary(y);
        result <- f(x,y,l);
        optimal_z <- l;
        let i: Int <-l+1, temp: Int, temp1: Int in{
            temp1 <- convert_int(bin_or(bin_x,bin_y));
            if l <= temp1 
                then if temp1 <= r 
                    then {
                        result <- x*y;
                        optimal_z <- temp1;
                    }
                    else {
                        while i<=r loop {
                            temp <- f(x,y,i);
                            if result < temp
                                then {
                                    optimal_z <- i;
                                    result <- temp;
                                }
                                else 1
                            fi; 
                            i <- i+1;
                        }pool;
                    }
                    fi
                else {
                    while i<=r loop {
                        temp <- f(x,y,i);
                        if result < temp
                            then {
                                optimal_z <- i;
                                result <- temp;
                            }
                            else 1
                        fi; 
                        i <- i+1;
                    }pool;
                }
            fi; 
        };
    }};
};