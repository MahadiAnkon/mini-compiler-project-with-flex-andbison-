%{
    #include <stdio.h> 
    #include<math.h>
    #include<stdlib.h>
    #include<string.h>

        extern FILE *yyin;
        extern FILE *yyout;
	int yylex();
	int yyparse();
    void yyerror(char *s);

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
    {   
        int flag =-1;
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




    int isprime(int n)
    {
        int i, flag = 0;
        if (n == 0 || n == 1)
        flag = 1;
        for (i = 2; i <= n / 2; ++i) 
        {
                if (n % i == 0) 
                {
                        flag = 1;
                        break;
                }
        }
        if (flag == 0)
        {
                return 1;
        }
        else
        {
                return 0;
        }

    }
%}

%token INTEGER VARIABLE begin end torr int_type plus minus into divi float_type eq char_type string_type inc dec eol power ge le eqeq gt ngt lt nlt neq mod prnt ssqrt prime ffor iiff eelse eelif wwhile ffunc sep FLOAT STRING CHARACTER slcmnt mlcmnt fbs fbf sbs sbf headr extension

%right power

%left plus minus

%right divi into

%right le

%right ge ngt nlt gt lt neq eqeq eq

%%

program:
         program statement '\n\n'
         | begin program end  {printf("program Successfully Ended");}


        
         | /* NULL */

        ;


statement:
        
          statement eol statement
        |    statement statement
        | expression                     
        
        | int_type syn eol                { if($2 == "not"){printf("INTEGER Declared\n\n");}}


        | VARIABLE '=' expression       {  if(aldec($1)==1){setval($1,$3);}
                                         else{
                                                printf("Not Declared\n\n");
                                         }
                                         }



        | prnt expression                {if($2 != "not"){printf("%d\n\n", $2);}}
        | prnt STRING                  {printf("%s\n\n", $2);}

        
        | iiff fbs expression fbf sbs statement sbf        {if($3)
                                                                {
                                                                printf("If condition true\n\n");
                                                                } 
                                                            else{
                                                                printf("If condition false\n\n");
                                                                }
                                                                } 



        | iiff fbs expression fbf sbs statement sbf elfb eelse sbs statement sbf       {if($3)
                                                                {
                                                                printf("If condition true\n\n");
                                                                } 
                                                            else{
                                                                printf("If condition false\n\n");
                                                                }
                                                                } 


        | ffor fbs fstatement eol VARIABLE le INTEGER eol VARIABLE inc INTEGER fbf sbs statement sbf          {if($3 != "not")
                                                                                        {for(int a =$3;a<=$7;a= a+ $11)
                                                                                        { printf("For loop incremented by %d\n\n",$11);
                                                                                        }
                                                                                        }
                                                                                         printf("For loop finished\n\n");
                                                                                        } 



        | ffor fbs fstatement eol VARIABLE ge INTEGER eol VARIABLE dec INTEGER fbf sbs statement sbf          {if($3 != "not")
                                                                                        {for(int a =$3;a>=$7;a= a - $11)
                                                                                        { printf("For loop decremented by %d\n\n",$11);
                                                                                        }
                                                                                        }
                                                                                         printf("For loop finished\n\n");
                                                                                        }   




        | wwhile fbs VARIABLE ge INTEGER fbf sbs VARIABLE dec INTEGER eol statement sbf          {int a = VALUE[getval($3)];for(int i=a;i>=$5;i=i-$12){printf("While loop decremented by %d\n\n",$12);}printf("While loop finished\n\n");}


        | wwhile fbs VARIABLE le INTEGER fbf sbs VARIABLE inc INTEGER eol statement sbf          {int a = VALUE[getval($3)];for(int i=a;i<=$5;i=i+$12){printf("While loop incremented by %d\n\n",$12);}printf("While loop finished\n\n");}


        
        | begin statement end                    {printf("program started");}



        | ffunc VARIABLE fbs param fbf sbs statement sbf int_type    {printf("%s Function Declared\n\n",$2);}



        | headr fbs VARIABLE wxt fbf                                  {
                                                        printf("Header File Detected\n\n");}


        |
        ;

wxt:
        extension
        |






param:
        param int_type VARIABLE               { if(aldec($2)!=1){}
                                                          else{
                                                                printf("%s already Declared\n\n",$2);
                                                                $$ = "not";
                                                          } }
        |
        ;







elfb:
        elfb eelif fbs expression fbf sbs statement sbf 
        | eelif fbs expression fbf sbs statement sbf 
        |        
        ;







fstatement:
         
         int_type VARIABLE '=' expression               { if(aldec($2)!=1){setval($2,$4);$$=$4;}
                                                          else{
                                                                printf("%s already Declared\n\n",$2);
                                                                $$ = "not";
                                                          } }






        | VARIABLE '=' expression       {  if(aldec($1)==1){setval($1,$3);$$=$3;}
                                         else{
                                                printf("Not Declared\n\n");
                                                $$ = "not";
                                         }
                                         }
        ;





syn:
    syn sep VARIABLE                     {
                                        if(aldec($3)==1){printf("%s Declared Before\n\n",$3);}
                                         else{setval($3,0);$$ = "not";}
                                         }



   | VARIABLE                           {
                                        if(aldec($1)==1){printf("%s Declared Before\n\n",$1);}

                                         else{setval($1,0);$$ = "not";}
                                         }
        ;

expression:
       
        INTEGER                         
        | VARIABLE                      {
                                        
                                         if(aldec($1)==0)
                                         {
                                                printf("Not Declared\n\n");
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


        | ssqrt expression      { $$ = sqrt($2);}

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


        | prime expression               { $$ = isprime($2); }


        | VARIABLE inc                { if(aldec($1)==1){setval($1,VALUE[getval($1)]+1);
                                        $$ = "not";}
                                        else{
                                                printf("Not Declared\n\n");
                                                $$ = "not";
                                         }
                                        }



        | VARIABLE dec                { if(aldec($1)==1){setval($1,VALUE[getval($1)]-1);
                                        $$ = "not";}
                                        else{
                                                printf("Not Declared\n\n");
                                                $$ = "not";
                                         }
                                        }



        | INTEGER inc                  {$$ = $1 + 1;}



        | INTEGER dec                  {$$ = $1 - 1;}



        | slcmnt                        {printf("Single line comment : %s\n\n",$1);}



        | mlcmnt                        {printf("Multiple line Comment Starts : %s :Multiple line Comment Ends\n\n",$1);}
        ;


%%



void yyerror(char *s) {

    fprintf(stderr, "%s\n\n", s);

}


int main(void) {

yyin=freopen("input.txt","r",stdin);

yyout = freopen("output.txt","w",stdout);

yyparse();

return 0;
}
