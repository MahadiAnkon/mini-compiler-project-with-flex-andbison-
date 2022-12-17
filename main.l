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

.h               {return extension;}
"#include"      {return headr;}
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
"iif"           {return iiff;}
(\n)*"eelse"         {return eelse;}
(\n)*"eelif"         {return eelif;}
"whil"        {return wwhile;}
"func"          {return ffunc;}
(\n)*"(("           {return fbs;}
(\n)*"))"           {return fbf;}
(\n)*"{{"            {return sbs;}
(\n)*"}}"            {return sbf;}


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
{String}        {yylval = strdup(yytext);
                return STRING;} 
{Char}          {yylval = *yytext;
                return CHARACTER;}


"////".*     {yylval = strdup(yytext);
                return slcmnt;}

"//**"(.*|\n)*"**//" {yylval = strdup(yytext);
                return mlcmnt;}



"  " {}


[ \t]   ;       /* skip whitespace */
[ \n]   ;

.               yyerror("Unknown character");


%%

int yywrap(void) {
    return 1;
}
