%{
#include "y.tab.h"
%}

%option noyywrap

%%
musicales   {return MUSICALES;}
me           {return ME;}
existen     {return EXISTEN;}
diferentes {return DIFERENTES;}
eres        {return ERES;}
sonidos     {return SONIDOS;}
notas       {return NOTAS;}
figuras     {return FIGURAS;}
escuchar   {return ESCUCHAR;}
tocar       {return TOCAR;}
cantar     {return CANTAR;}
gusta       {return GUSTA;}
agrada     {return AGRADA;}
relaja     {return RELAJA;}
guitarra   {return GUITARRA;}
vocalista   {return VOCALISTA;}
compositor  {return COMPOSITOR;}
cantautor   {return CANTAUTOR;}
interpretar {return INTERPRETAR;}
componer   {return COMPONER;}
bajo        {return BAJO;}
piano       {return PIANO;}
baterista   {return BATERISTA;}
canciones   {return CANCIONES;}
compones    {return COMPONES;}
la          {return LA;}
flauta     {return FLAUTA;}
el          {return EL;}
g\202neros     {return GENEROS;}
viol"\241"n      {return VIOLIN;}
m\243sica      {return MUSICA;}
t\243          {return TU;}
saxof\242n     {return SAXOFON;}
melod\241as   {return MELODIAS;}
\40 {;}
.           {return RESTO;}
\n          {return EOF;}

%%


