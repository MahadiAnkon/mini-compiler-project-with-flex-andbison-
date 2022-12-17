%{
    #include <stdio.h> 
    #include<math.h>
    #include<stdlib.h>
    #include<string.h>

        extern FILE *yyin;
        extern FILE *yyout;
	int yylex();
	int yyparse();


    char VAR[10000][10000];
    int VALUE[10000];
    int tot_dec = 0;
   
    int aldec(char *s){
        for(int i=0;i<tot_dec;i++)
        {
                if(strcmp(VAR[i],s) == 0)
                        return 1;
        }return 0;
    }

    int setval(char *s,int val)
    {   int flag =-1;
        for(int i=0;i<tot_dec;i++)
        {
                if(strcmp(VAR[i],s)==0)
                {
                       VALUE[i]=val;
                       flag = 0;
                        break; 
                }

        }
        if(flag==-1){
        strcpy(VAR[tot_dec],s);
        VALUE[tot_dec]=val;
        tot_dec++;}
    }
    int getval(char *s)
    {
        int pos=-1;
        for(int i=0;i<tot_dec;i++)
        {
                if(strcmp(VAR[i],s)==0)
                {
                        pos = i;
                        break; 
                }

        }
        return pos;
    }
%}

%token INTEGER VARIABLE begin end torr int_type plus minus into divi float_type eq char_type string_type inc dec eol power ge le eqeq gt ngt lt nlt neq mod prnt ssqrt prime ffor iif eelse eelif wwhile ffunc sep FLOAT STRING CHARACTER slcmnt

%right plus minus
%right divi into
%right le ge ngt nlt gt lt neq eqeq eq

%%

program:
	program statement '\n'
       
         | /* NULL */

        ;


statement:

        expression                      {  if($1 != "not"){printf("%d\n", $1);} }
        
        | int_type syn eol                { printf("INTEGER Declared\n");}

        | VARIABLE '=' expression       {  if(aldec($1)==1){setval($1,$3);}
                                         else{
                                                printf("Not Declared\n");
                                         }
                                         }
       
        ;


syn:
    syn sep VARIABLE                     {if(aldec($3)==1){printf("%s Declared Before\n",$3);}
                                         else{setval($3,0);}
                                         }
   | VARIABLE                           {if(aldec($1)==1){printf("%s Declared Before\n",$1);}
                                         else{setval($1,0);}
                                         }
        ;

expression:
       
        INTEGER                         

        | VARIABLE                      {
                                        
                                         if(aldec($1)==0)
                                         {
                                                printf("Not Declared\n");
                                                $$="not";
                                         }
                                         else
                                         {
                                                $$ = VALUE[getval($1)];
                                        }
                                        }
        | expression plus expression     { $$ = $1 + $3; }

        | expression minus expression     { $$ = $1 - $3; }

        | expression into expression     { $$ = $1 * $3; }
        | minus expression               { $$ = -$2;}
        | expression power expression    { $$ = pow($1,$3);}
        | expression mod expression      { $$ = $1% $3;}
        | expression gt expression       { $$ = $1 > $3;}
        | expression lt expression       { $$ = $1 < $3;}
        | expression eqeq expression     { $$ = $1 == $3;}
        | expression neq expression      { $$ = $1 != $3;}
        | expression ge expression      { $$ = $1 >= $3;}
        | expression le expression      { $$ = $1 <= $3;}
        | expression ngt expression      { $$ = $1 < $3;}
        | expression nlt expression      { $$ = $1 > $3;}
        | expression divi expression     { $$ = $1 / $3; }
        | VARIABLE inc                { if(aldec($1)==1){setval($1,VALUE[getval($1)]+1);
                                        $$ = "not";}
                                        else{
                                                printf("Not Declared\n");
                                                $$ = "not";
                                         }
                                        }
        | VARIABLE dec                { if(aldec($1)==1){setval($1,VALUE[getval($1)]-1);
                                        $$ = "not";}
                                        else{
                                                printf("Not Declared\n");
                                                $$ = "not";
                                         }
                                        }
        |INTEGER inc                  {$$ = $1 + 1;}
        |INTEGER dec                  {$$ = $1 - 1;}
        ;


%%



void yyerror(char *s) {

    fprintf(stderr, "%s\n", s);

}


int main(void) {

yyin=freopen("input.txt","r",stdin);
yyout = freopen("output.txt","w",stdout);
yyparse();
return 0;
}
