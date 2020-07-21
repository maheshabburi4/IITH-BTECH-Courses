-- Any characters between two dashes “--” and the next newline (or EOF, if there is no next newline) are treated as comments
(*
 * comments are enclosed in (∗ . . . ∗)
 *)     -- This is a nested comment
 
class Main {
    main() : Main{{
        - This is not a comment as it is not enclosed between -- and next newline or between (* and *)
    self;
    }};
};