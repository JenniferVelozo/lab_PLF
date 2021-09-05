%{
#include "y.tab.h"
%}

%option noyywrap


%%
cerda {return CERDA;}
cerdas {return CERDAS;}
rana {return RANA;}
ranas {return RANAS;}
jugando {return JUGANDO;}
saltando {return SALTANDO;}
durmiendo {return DURMIENDO;}
corriendo {return CORRIENDO;}
comiendo {return COMIENDO;}
grande {return GRANDE;}
grandes {return GRANDES;}
horrible {return HORRIBLE;}
horribles {return HORRIBLES;}
amigable {return AMIGABLE;}
amigables {return AMIGABLES;}
sonriente {return SONRIENTE;}
el {return EL;}
los {return LOS;}
la {return LA;}
las {return LAS;}
con {return CON;}
tres {return TRES;}
patas {return PATAS;}
agua {return AGUA;}
sobre {return SOBRE;}
lodo {return LODO;}
en {return EN;}
piso {return PISO;}
hacia {return HACIA;}
meta {return META;}
y {return Y;}
e {return E;}
fuerte {return FUERTE;}
inteligente {return INTELIGENTE;}
de {return DE;}
amazona {return AMAZONA;}
fuertes {return FUERTES;}
inteligentes {return INTELIGENTES;}
conejo {return CONEJO;}
tuerto {return TUERTO;}
rata {return RATA;}
cola {return COLA;}
blanca {return BLANCA;}
humano {return HUMANO;}
oculto {return OCULTO;}
bosque {return BOSQUE;}
del {return DEL;}
cerro {return CERRO;}
leones {return LEONES;}
orgullosos {return ORGULLOSOS;}
perros {return PERROS;}
salvajes {return SALVAJES;}
esta {return ESTA;}
es {return ES;}
alegres {return ALEGRES;}
son {return SON;}
ciervo  {return CIERVO;}
lasa"\244"a {return LASANA;}
ni"\244"os {return NINOS;}
h"\240"bil {return HABIL;}
h"\240"biles {return HABILES;}
antip"\240"tico {return ANTIPATICO;}
est"\240"n {return ESTAN;}
. {;}
%%
