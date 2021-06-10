%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
%}

%option noyywrap

/*Reglas de traducción, listado de expresiones regulares*/
%%
musicales   {fprintf(yyout, "MUSICALES\n");}
me          {fprintf(yyout, "ME\n");}
existen     {fprintf(yyout, "EXISTEN\n");}
diferentes  {fprintf(yyout, "DIFERENTES\n");}
eres        {fprintf(yyout, "ERES\n");}
sonidos     {fprintf(yyout, "SONIDOS\n");}
notas       {fprintf(yyout, "NOTAS\n");}
figuras     {fprintf(yyout, "FIGURAS\n");}
escuchar    {fprintf(yyout, "ESCUCHAR\n");}
tocar       {fprintf(yyout, "TOCAR\n");}
cantar      {fprintf(yyout, "CANTAR\n");}
gusta       {fprintf(yyout, "GUSTA\n");}
agrada      {fprintf(yyout, "AGRADA\n");}
relaja      {fprintf(yyout, "RELAJA\n");}
guitarra    {fprintf(yyout, "GUITARRA\n");}
vocalista   {fprintf(yyout, "VOCALISTA\n");}
compositor  {fprintf(yyout, "COMPOSITOR\n");}
cantautor   {fprintf(yyout, "CANTAUTOR\n");}
interpretar {fprintf(yyout, "INTERPRETAR\n");}
componer    {fprintf(yyout, "COMPONER\n");}
bajo        {fprintf(yyout, "BAJO\n");}
piano       {fprintf(yyout, "PIANO\n");}
baterista   {fprintf(yyout, "BATERISTA\n");}
canciones   {fprintf(yyout, "CANCIONES\n");}
compones    {fprintf(yyout, "COMPONES\n");}
la          {fprintf(yyout, "LA\n");}
flauta      {fprintf(yyout, "FLAUTA\n");}
el          {fprintf(yyout, "EL\n");}
géneros     {fprintf(yyout, "GÉNEROS\n");}
violín      {fprintf(yyout, "VIOLÍN\n");}
música      {fprintf(yyout, "MÚSICA\n");}
tú          {fprintf(yyout, "TÚ\n");}
saxofón     {fprintf(yyout, "SAXOFÓN\n");}
melodías    {fprintf(yyout, "MELODÍAS\n");}
.           {} /*No se escribe nada si encuentra cualquier caracter*/
"\n"        {} /*No se escribe nada si encuentra un salto de línea*/
%%

void main(int argc, char const *argv[]) {

	char entrada[20];
   	char salida[20];
	
   	if (argc == 1){
		printf("Error: Faltan par%cmetros.\nUso: lexico.exe archivo_entrada archivo_salida\n", 160);
	}
	
	if (argc == 2){
		printf("Error: Falta par%cmetro.\nUso: lexico.exe archivo_entrada archivo_salida\n", 160);
	}
       
	if (argc == 3){
		strcpy(entrada, argv[1]);
		strcpy(salida, argv[2]);
        yyin = fopen(entrada, "r");
        yyout = fopen(salida, "r");

        if (yyin == NULL){
            printf("Error: El archivo de entrada no existe.\n");
		}

        else if (yyout != NULL){
            printf("Error: El archivo de salida ya existe.\n");
		}

        else {      
            yyout = fopen(salida, "w");
            yylex();
            fclose(yyout);
        }
	}
    if (argc > 3) {
        printf("Error: Demasiados par%cmetros.\nUso: lexico.exe archivo_entrada archivo_salida\n", 160);
    }
}
