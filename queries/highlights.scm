
[
    "naj"
    "če"
    "čene"
    "dokler"
    "funkcija"
    "vrni"
] @keyword

[
     "brez"
     "bool"
     "celo"
     "real"
     "znak"
 ] @type.builtin

[
    "="

    "||"
    "&&"
        
    "|"
    "^"
    "&"
    "<<"
    ">>"
        
    "=="
    "!="
    ">"
    ">="
    "<"
    "<="
        
    "+"
    "-"
        
    "*"
    "/"
    "%"
        
    "**"

    "+="
    "-="
    "*="
    "/="
    "%="
    "**="
    "||="
    "&&="
    "<<="
    ">>="
    "|="
    "^="
    "&="
 ] @operator

[
    ";"
    ":"
    ","
] @punctuation.delimiter

[
    "{"
    "}"
    "("
    ")"
    "["
    "]"
 ] @punctuation.bracket

[
 "->"
 "!"
 ] @punctuation.special

(komentar) @comment
(stevilo) @number
(ime) @variable
(tip) @type
(niz) @string
(bool) @constant.builtin
(velikost) @number

(funkcija
    (ime) @function)

(parameter
    (ime)* @variable.parameter)

(makro_klic
    (ime) @function)

(funkcijski_klic
    (ime) @function)

