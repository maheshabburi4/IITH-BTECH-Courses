(*
 * String Palindrome
 *
 * Logic :
 * recursively pass the string by removing first and 
 * last elements if first letter of a string equal to last letter 
 * else return false.
 *)

class Main {
    x : String;
    
    main() : Object {{
        (new IO).out_string("Enter a string : ");
        x <- (new IO).in_string();
        (new IO).out_string(x);
        if isPalindrome(x) then  (new IO).out_string(" is a Palindrome\n") else (new IO).out_string(" is not a Palindrome\n") fi;
    }};
    
    isPalindrome(str : String) : Bool {
        if str="" then true else
        if str.length() = 1 then true else
        if str.substr(0,1)=str.substr(str.length()-1,1) then isPalindrome(str.substr(1,str.length()-2)) else false
        fi fi fi
    };
};