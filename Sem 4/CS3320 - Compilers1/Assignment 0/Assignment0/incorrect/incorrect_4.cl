class Main inherits IO{
    x : Bool <- True;       -- true and false are case sensitive keywords
    
    main() : Object {
        if x then out_string("True\n") else out_string("False\n") fi
    };
};