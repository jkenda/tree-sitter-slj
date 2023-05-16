
[
    "naj"
    "če"
    "čene"
    "dokler"
    "za"
    "v"
    "intervalu"
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
    "kot"

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

    "@"
 ] @operator

[
    "."
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
(prekini) @keyword

(funkcija
    (ime) @function)

(parameter
    (ime)* @variable.parameter)

(multifunkcijski_klic
    (ime) @function)

(funkcijski_klic
    (ime) @function)

