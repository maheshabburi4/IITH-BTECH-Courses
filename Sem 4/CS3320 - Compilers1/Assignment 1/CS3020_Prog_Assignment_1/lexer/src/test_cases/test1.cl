(*
 * Recognising Operators
 *)
=>
(
)
:
@
;
,
+
-
*
/
~
<-
=
{
}
<
<=
.


(*
 * Integers are non-empty strings of digits 0-9
 *)
456975          -- This should be recognised as an INT_CONST token
495bv44         -- This should not be recognised as INT_CONST token


(*
 * Identifiers are strings other than keywords.
 * The following are keywords and should be 
 * recognised with their respective token but not 
 * as an Identifier token(TYPEID,OBJECTID). 
 *)
-- Except for the constants true and false, keywords are case insensitive
class
elsE
FI
If
in
Inherits
IsVoid
LEt
loOp
PoOl
tHen
WHiLE
CaSe
ESAc
nEW
oF
noT

-- first letter of true and false must be lowercase
true                -- This should be recognised as BOOL_CONST not as an identifier
True                -- This should be recognised as an identifier(TYPEID)
fAlSe               -- This should be recognised as BOOL_CONST not as an identifier
FaLSE               -- This should be recognised as an identifier(TYPEID)

-- self and SELF_TYPE are not treated as keywords
self                -- This should be recognised as an identifier(OBJECTID)
SELF_TYPE           -- This should be recognised as an identifier(TYPEID)


(*
 * Identifiers(TYPEID,OBJECTID) are strings 
 * consisting of letters,digits and the 
 * underscore character
 *)
-- Type Identifiers(TYPEID) begin with a capital letter
Gy0Cqn_b56h_Bwa      -- This as a whole should be recognised as an identifier(OBJECTID)
Uj!h45b*HB-uy        -- This as a whole should not be recognised as an identifier

-- Object identifiers(OBJECTID) begin with a small letter
bvU4B6_kj9w_HY       -- This as a whole should be recognised as a single identifer(TYPEID)
0wuejbw0qygWVY       -- This as a whole should not be recognised as a single identifer 


(*
 * When an invalid character (one that can’t begin any
 * token) is encountered, a string containing just
 * that character should be returned as the error string.
 * Resume lexing at the following character.
 *)
!                    -- '!' can't begin any token
_wvaWnf_u48616       -- '_' is an invalid character and can't begin any token. The lexing resumes from 'w'. 
​                     -- There is a zero width space in the start in this line inserted using unicode which should report an ERROR as INVALID_CHARACTER.
                     -- Null character is also an invalid character. So it should report an ERROR with this character as string
\                    -- '\' is an invalid character and can't begin any token. So it should report error as string containing that backslash.


(*
 * A string may not contain EOF.
 * if an EOF is encountered before the close-quote,
 * report this error as ”EOF in string constant”.
 *) 
"This is a string with EOF