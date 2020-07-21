class Main {
    str1 : String <- "mahesh;    -- strings are enclosed in double quotes(mahesh should be in double quotes = "mahesh")
    str2 : String;

    main() : Object {
        -- A non-escaped newline character may not appear in a string
        str2 <- "I 
                am Mahesh"            -- an escape character "\" must be included before the newline
    };
};