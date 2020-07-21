(*
 * Problem :
 * Validate an IPv4 address
 * An IPv4 address is valid of it satisfies the 
 * generalised form (0-255).(0-255).(0-255).(0-255)
 *
 * Logic :
 * traverse the whole string. When a "." is reached 
 * convert the string from the next index of before "."(i.e.,j) 
 * to before element of present "." into int and check whether 
 * it is less than 255 or not and change the value of j to next index of present ".".  
 *)

 class String_to_int {
    
    char_to_int(s : String) : Int{
        if s="0" then 0 else
        if s="1" then 1 else
        if s="2" then 2 else
        if s="3" then 3 else
        if s="4" then 4 else
        if s="5" then 5 else
        if s="6" then 6 else
        if s="7" then 7 else
        if s="8" then 8 else
        if s="9" then 9 else 10 
        fi fi fi fi fi fi fi fi fi fi
    };

    to_int(s : String) : Int {
        let i : Int <-0, val : Int <-0, temp : Int, flag : Int<-0 in {
            if s="" then flag <- 1 else 
            if s="0" then flag<-flag else 
            if s.substr(0,1)="0" then flag<-1 else {
                while i<s.length() loop {
                    temp <- char_to_int(s.substr(i,1));
                    i <- i+1;
                    if  temp = 10 then {
                        i <- s.length();
                        flag <- 1;
                    } else val<-val*10+temp fi;
                } pool;
            } fi fi fi;
            if flag=1 then 256 else val fi;
        }
    };  
 }; 

 class IP inherits String_to_int {
    
    isValid(s : String) : Bool {
        let i : Int <-0, j : Int <-0 ,flag : Bool <- true , count : Int <-0, val : Int in {
            while i< s.length() loop {
                if s.substr(i,1) = "." then {
                    count<-count+1;
                    val <- to_int(s.substr(j,i-j));
                    if 255<val then flag<-false else flag<-flag fi;
                    j<-i+1;
                }else flag<-flag fi;
                if i=s.length()-1 then{ 
                    val <- to_int(s.substr(j,i-j+1));
                    if 255<val then flag<-false else flag<-flag fi;
                    if not count=3 then flag<-false else flag<-flag fi;
                }else flag<-flag fi;
                i<-i+1;
            }pool;
            flag;
        }
    };
 };
 
 class Main inherits IP {
    ip : String;
    i_o : IO <- (new IO);

    main() : Object {{
        i_o.out_string("Enter the ip address : ");
        ip <- i_o.in_string();
        --i_o.out_int(to_int("255"));
        i_o.out_string(ip.concat(" is "));
        if isValid(ip) then i_o.out_string("a valid") else i_o.out_string("an invalid") fi;
        i_o.out_string(" IPv4 address\n");
    }};
 };