class Main inherits IO {
	str: String <- "Hello World!\n";
  
   main(): Object {
		if true thenout_string(str) else out_string("1") fi 
   -- as per syntax, there must be a white space between then and expression in the if condition
   -- white space = [ 32(ascii) | \n | \f | \r | \t | \v ]+
   -- epsilon is not a part of white space.
   };
};