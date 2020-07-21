class Main {
	x : String <- hello world";		-- Unterminated string constant
	main():IO {{
		new IO.out_string(x);
	}};
};
\			-- should report error of invalid characters

-- The below should report Error as "Unterminated string constant"
"

-- Nested Empty comment - should report error as "EOF in comment"
(*(*(**)