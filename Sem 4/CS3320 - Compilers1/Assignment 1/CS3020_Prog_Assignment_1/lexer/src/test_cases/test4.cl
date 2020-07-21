-- When an "*)" found outside a comment, report this error as "Unmatched *)"
Here is your Unmatched *)


(*
 * Check for nested comment
    -- This is a single line comment nested in a block comment
    (*
     * This is a nested block comment
     *)
 *)


(*
 * If a comment remains open when EOF is encountered,
 * report this error with the message ”EOF in comment”
 *)
(*
    This is a comment to checked EOF error
    (* 
        The above comment is still open.
        This is a nested comment.
    *)
    The comment is ending with EOF