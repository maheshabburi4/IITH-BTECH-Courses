(*
 * Problem :
 * Check if there exist an integer A  
 * such that it has exactly N positive integer divisors 
 * and exactly K of them are prime numbers.
 *
 *
 * Logic :
 * A valid choice for A exists if the prime factorization 
 * of N has the number of terms at least K
 * 
 *
 * Explanation :
 * Let prime factorisation of A has K primes(p1,p2,...,pk) with exponents
 * e1,e2,...,ek. Then N=(e1+1)*(e2+1)*...*(ek+1) for all ei>=1 hence (ei+1)>=2.
 * So our problem is reduced to determining whether is it possible 
 * to write N as a product of K values greater than 1 or not.
 *
 *)

class Main inherits IO {
    n : Int;
    k : Int;

    main() : Object{{
        out_string("Enter the number N : ");
        n <- in_int();
        out_string("Enter the number K : ");
        k <- in_int();
        out_string("A number having exactly ").out_int(n).out_string(" positive integer divisors and exactly ");
        out_int(k).out_string(" of them are prime numbers ");
        if k <= primeFactors(n) then out_string("exists\n")
        else out_string("doesn't exist\n")
        fi;
    }};

    remainder(x : Int, y : Int) : Int {
        x-y*(x/y)
    };

    primeFactors(x : Int) : Int {
        let count : Int <- 0 , i : Int <- 3 in {
            while remainder(x,2) = 0 loop {
                count <- count+1;
                x <- x/2;
            } pool;
            while i*i <= x loop { 
                while remainder(x,i) = 0 loop {
                    count <- count+1;
                    x <- x/i;
                } pool;
                i <- i+2;
            } pool;
            if 2<x then count<-count+1 else count fi;   
        }
    };
};