%{
#include <stdio.h>
#include <stdlib.h>

extern int yylex();
void yyerror(char *s);
%}

%token MUSICALES   
%token ME          
%token EXISTEN     
%token DIFERENTES  
%token ERES        
%token SONIDOS     
%token NOTAS       
%token FIGURAS     
%token ESCUCHAR    
%token TOCAR       
%token CANTAR      
%token GUSTA       
%token AGRADA      
%token RELAJA      
%token GUITARRA    
%token VOCALISTA   
%token COMPOSITOR  
%token CANTAUTOR   
%token INTERPRETAR 
%token COMPONER    
%token BAJO        
%token PIANO       
%token BATERISTA   
%token CANCIONES   
%token COMPONES    
%token LA          
%token FLAUTA      
%token EL          
%token GENEROS     
%token VIOLIN      
%token MUSICA      
%token TU          
%token SAXOFON     
%token MELODIAS   

%%
s: a MUSICALES | ME b | EXISTEN DIFERENTES a MUSICALES | g ERES f | g COMPONES e ;
a: SONIDOS | NOTAS | FIGURAS | GENEROS ; 
b: c ESCUCHAR e | c TOCAR d | c CANTAR | c INTERPRETAR e | c COMPONER e ; 
c: GUSTA | AGRADA | RELAJA ;
d: GUITARRA | h VIOLIN | h BAJO | h PIANO | LA FLAUTA | h SAXOFON ; 
e: MUSICA | CANCIONES | MELODIAS ;
f: h VOCALISTA | COMPOSITOR | h CANTAUTOR | BATERISTA ;
g: TU ;
h: EL ;
%%

void yyerror(char *s)
{
printf("\nAn%clisis sint%cctico incorrecto.\n", 160, 160);
exit(1);
}

void main()
{
printf("\nIngrese el texto a analizar: ");
yyparse();
printf("\nAn%clisis sint%cctico correcto.\n", 160, 160);
}
