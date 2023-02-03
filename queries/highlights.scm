
[
    "naj"
    "če"
    "čene"
    "dokler"
    "funkcija"
    "vrni"
] @keyword

[
     "resnica"
     "laž"
 ] @constant.builtin

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
 ] @punctuation.special

(komentar) @comment
(stevilo) @number
(ime) @variable
(tip) @type
(niz) @string

(funkcija
    (ime) @function
    (parametri
        (ime) @variable.parameter))

(makro_funkcija
    (ime) @function)

(funkcijski_klic
    (ime) @function)

