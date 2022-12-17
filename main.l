%{

  #include "main.tab.h"
  
  #include <stdlib.h>

  int yyparse();
 void yyerror(char *);
 

%}


Var [a-zA-Z][0-9a-zA-Z]*[_]?[0-9a-zA-Z]*

Int [0-9]+

Char ['][a-zA-Z0-9][']

Float [0-9]*[.][0-9]+

String ["].+["]

logicaloperator ">>"|"<<"|">>=="|"<<=="|"!!=="|"===="

operation "++"|"--"|"**"|"//"|"%%"

io "++++"|"----"?



%%



"Begin"         {return begin;}
"Finish"        {return end;}
"intg"          {return int_type;}
"flt"           {return float_type;}
"Charc"         {return char_type;}
"String"        {return string_type;}
"++"            {return plus;}
"--"            {return minus;}
"**"            {return into;}
"//"            {return divi;}
"++++"          {return inc;}
"----"          {return dec;}
";;"            {return eol;}
",,"            {return sep;}
"^^"            {return power;}
[=\n]           {return *yytext;}
">>=="          {return ge;}
"<<=="          {return le;}
"===="          {return eqeq;}
">>"            {return gt;}
"!!>>"          {return ngt;}
"<<"            {return lt;}
"!!<<"          {return nlt;}
"!!=="          {return neq;}
"%%"            {return mod;}
"write"         {return prnt;}
"root"          {return ssqrt;}
"prime"         {return prime;}
"ffor"          {return ffor;}
"iif"           {return iif;}
"eelse"         {return eelse;}
"eelif"         {return eelif;}
"wwhile"        {return wwhile;}
"func"          {return ffunc;}



{Int}      {
                yylval = atoi(yytext);
                return INTEGER;
            }
{Var}           {
			yylval = strdup(yytext);
 			return VARIABLE;
 			}
{Float}         {yylval = atoi(yytext);
                return FLOAT;}
{String}        {yylval = *yytext;
                return STRING;} 
{Char}          {yylval = *yytext;
                return CHARACTER;}


"////".*      {return slcmnt;}



"  " {}


[ \t]   ;       /* skip whitespace */

.               yyerror("Unknown character");


%%

int yywrap(void) {
    return 1;
}
