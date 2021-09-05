%{
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
void yyerror(char *s);
%}

%token CERDA
%token CERDAS
%token RANA
%token RANAS
%token JUGANDO
%token SALTANDO
%token DURMIENDO
%token CORRIENDO
%token COMIENDO
%token GRANDE
%token GRANDES
%token HORRIBLE
%token HORRIBLES
%token AMIGABLE
%token AMIGABLES
%token SONRIENTE
%token EL
%token LOS
%token LA
%token LAS
%token CON
%token TRES
%token PATAS
%token AGUA
%token SOBRE
%token LODO
%token EN
%token PISO
%token HACIA
%token META
%token Y
%token E
%token FUERTE
%token INTELIGENTE
%token DE
%token AMAZONA
%token FUERTES
%token INTELIGENTES
%token CONEJO
%token TUERTO
%token RATA
%token COLA
%token BLANCA
%token HUMANO
%token OCULTO
%token BOSQUE
%token DEL
%token CERRO
%token LEONES
%token ORGULLOSOS
%token PERROS
%token SALVAJES
%token ESTA
%token ES
%token ALEGRES
%token SON
%token CIERVO
%token LASANA
%token NINOS
%token HABIL
%token HABILES
%token ANTIPATICO
%token ESTAN

%%
s: LA a| LAS e| EL i| LOS j ;
a: RANA SONRIENTE b| CERDA CON TRES PATAS b| RATA DE COLA BLANCA b ;
b: ESTA c| ES d ;
c: JUGANDO CON AGUA| SALTANDO SOBRE LODO| DURMIENDO EN EL PISO| CORRIENDO HACIA LA META| COMIENDO LASANA ;
d: GRANDE Y FUERTE| HABIL E INTELIGENTE| HORRIBLE| AMIGABLE ;
e: CERDAS ALEGRES f| RANAS DE LA AMAZONA f ;
f: ESTAN c| SON h ;
h: GRANDES Y FUERTES| HABILES E INTELIGENTES| HORRIBLES| AMIGABLES ;
i: CONEJO TUERTO b| HUMANO ANTIPATICO b| CIERVO OCULTO EN EL BOSQUE b ;
j: NINOS DEL CERRO f| LEONES ORGULLOSOS f| PERROS SALVAJES f ;
%%

void yyerror(char *s)
{
printf("An%clisis sint%cctico incorrecto.\n", 160, 160);
exit(1);
}

void main()
{
printf("Ingrese texto a analizar: ");
yyparse();
printf("An%clisis sint%cctico correcto.\n", 160, 160);
}
