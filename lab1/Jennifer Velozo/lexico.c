#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/*
    PARA IMPRIMIR TILDES á: 160 é: 130 í: 161 ó: 162 ú: 163 Á: 181 É: 144 Í: 214 Ó: 224 Ú: 23 ñ: 164 Ñ: 165
*/


//Struct de tipo nodoGenerico que almacena una secuencia, su largo y un puntero al siguiente nodo de tipo nodoGenerico
struct nodoGenerico{
    char *secuencia;
    int largo;
    struct nodoGenerico *siguiente;
};
//Se define un struct de tipo nodoGenerico, llamado nodo
typedef struct nodoGenerico nodo;

//Función que inserta un nodo en la cabeza de una lista enlazada
//ENTRADA: un puntero a la lista enlazada de tipo nodo, y el nuevo nodo a insertar
//SALIDA: la lista enlazada con el nuevo nodo agregado en su cabeza
nodo *insertar(nodo *primero, nodo *nuevoNodo){
    nuevoNodo->siguiente= primero;  //nuevoNodo va a apuntar a primero
    primero= nuevoNodo; //y primero será igual a nuevoNodo
    return primero;
}

//Función que libera la memoria utilizada por una lista enlazada de tipo nodo
//ENTRADA: la dirección de memoria del puntero a la lista enlazada de tipo nodo
//SALIDA: se libera la memoria
void liberar (nodo ** primero){
    nodo * auxiliar;
    while (*primero != NULL){
        auxiliar = *primero;
        *primero=(*primero)->siguiente;
        free(auxiliar);
    }
}

//Función que muestra el contenido de un nodo
//ENTRADA: el nodo
//SALIDA: muestra por pantalla
void mostrarNodo(nodo *primero){
    nodo *auxiliar=primero;
    printf("\nMOSTRANDO NODO: \n");
    while(auxiliar!=NULL){
        printf("\n----------------");
        printf("\nSecuencia: %s", auxiliar->secuencia);
        printf("\nLargo: %d\n", auxiliar->largo);
        printf("----------------\n");
        auxiliar=auxiliar->siguiente;
    }
}

//Función que invierte una lista enlazada simple
//ENTRADA: la lista enlazada
//SALIDA: la lista enlazada invertida
nodo *invertirNodo(nodo *primero){
    nodo * invertido = NULL;
    nodo *auxiliar=primero;
    while(auxiliar!=NULL){
        nodo * nuevo = (nodo *)malloc(sizeof(nodo));
        nuevo->secuencia = auxiliar->secuencia;
        nuevo->largo = auxiliar->largo;
        invertido = insertar(invertido,nuevo);
        //printf("\nInsertando nodoooooooooooooooooooooooooo");
        //mostrarNodo(invertido);
        auxiliar=auxiliar->siguiente;
    }
    return invertido;
}

//Función para generar los terminales como string
//ENTRADA: los terminales
//SALIDA: los terminales como string 
char **generarTerminales(){
    char **terminalesFinales = (char **)malloc(sizeof(char *)*34);
    for (int i = 0; i<34; i++){
        terminalesFinales[i] = (char *)malloc(sizeof(char)*20);
    }
    //Se definen los terminales
    char *terminal1 = "musicales";
    char *terminal2 = "melodías";
    char *terminal3= "existen";
    char *terminal4 = "diferentes";
    char *terminal5 = "eres";
    char *terminal6 = "sonidos";
    char *terminal7 = "notas";
    char *terminal8 = "figuras";
    char *terminal9 = "géneros";
    char *terminal10 = "escuchar";
    char *terminal11 = "tocar";
    char *terminal12 = "cantar";
    char *terminal13 = "gusta";
    char *terminal14 = "agrada";
    char *terminal15 = "relaja";
    char *terminal16 = "guitarra";
    char *terminal17 = "violín";
    char *terminal18 = "música";
    char *terminal19 = "vocalista";
    char *terminal20 = "compositor";
    char *terminal21 = "cantautor";
    char *terminal22 = "tú";
    char *terminal23 = "interpretar";
    char *terminal24 = "componer";
    char *terminal25 = "bajo";
    char *terminal26 = "piano";
    char *terminal27 = "baterista";
    char *terminal28 = "canciones";
    char *terminal29 = "compones";
    char *terminal30 = "la";
    char *terminal31 = "flauta";
    char *terminal32 = "el";
    char *terminal33 = "saxofón";
    char *terminal34 = "me";

    strcpy(terminalesFinales[0],terminal1);
    strcpy(terminalesFinales[1],terminal2);
    strcpy(terminalesFinales[2],terminal3);
    strcpy(terminalesFinales[3],terminal4);
    strcpy(terminalesFinales[4],terminal5);
    strcpy(terminalesFinales[5],terminal6);
    strcpy(terminalesFinales[6],terminal7);
    strcpy(terminalesFinales[7],terminal8);
    strcpy(terminalesFinales[8],terminal9);
    strcpy(terminalesFinales[9],terminal10);
    strcpy(terminalesFinales[10],terminal11);
    strcpy(terminalesFinales[11],terminal12);
    strcpy(terminalesFinales[12],terminal13);
    strcpy(terminalesFinales[13],terminal14);
    strcpy(terminalesFinales[14],terminal15);
    strcpy(terminalesFinales[15],terminal16);
    strcpy(terminalesFinales[16],terminal17);
    strcpy(terminalesFinales[17],terminal18);
    strcpy(terminalesFinales[18],terminal19);
    strcpy(terminalesFinales[19],terminal20);
    strcpy(terminalesFinales[20],terminal21);
    strcpy(terminalesFinales[21],terminal22);
    strcpy(terminalesFinales[22],terminal23);
    strcpy(terminalesFinales[23],terminal24);
    strcpy(terminalesFinales[24],terminal25);
    strcpy(terminalesFinales[25],terminal26);
    strcpy(terminalesFinales[26],terminal27);
    strcpy(terminalesFinales[27],terminal28);
    strcpy(terminalesFinales[28],terminal29);
    strcpy(terminalesFinales[29],terminal30);
    strcpy(terminalesFinales[30],terminal31);
    strcpy(terminalesFinales[31],terminal32);
    strcpy(terminalesFinales[32],terminal33);
    strcpy(terminalesFinales[33],terminal34);

    return terminalesFinales;
}

//Función que convierte un caracter a tipo string
//ENTRADA: el caracter
//SALIDA: el caracter pero como string
char *convertirCharAString(char caracter)
{
    char *string = (char *)malloc(sizeof(char)*2);
    string[0] = caracter;   // se copia el caracter en el string
    string[1] = '\0';       // se termina el string
    return string;
}


//Función que convierte los caracteres de una palabra a mayúscula
//ENTRADA: una string que representa la palabra
//SALIDA: un string que representa la palabra en mayúsculas
char *aMayus(char *palabra){
    int largo = strlen(palabra);
    char *palabraMayus = (char*)malloc(sizeof(char)*largo);
    strcpy(palabraMayus,"");
    char *letra = (char*)malloc(sizeof(char)*3);;
    letra[2] = '\0'; //último caracter de un string
    for (int i = 0; i<largo; i++){

        //Caso á
        if ((int)palabra[i] == -61 && (int)palabra[i+1] == -95){
            i++;
            char aux[3] = "Á";
            letra[0] = aux[0];
            letra[1] = aux[1];
            strcat(palabraMayus,letra);
        }
        //Caso é
        else if ((int)palabra[i] == -61 && (int)palabra[i+1] == -87){
            i++;
            char aux[3] = "É";
            letra[0] = aux[0];
            letra[1] = aux[1];
            strcat(palabraMayus,letra);
        }

        //Caso í
        else if ((int)palabra[i] == -61 && (int)palabra[i+1] == -83){ 
            i++;
            char aux[3] = "Í";
            letra[0] = aux[0];
            letra[1] = aux[1];
            strcat(palabraMayus,letra);
        }

        //Caso ó
        else if ((int)palabra[i] == -61 && (int)palabra[i+1] == -77){
            i++;
            char aux[3] = "Ó";
            letra[0] = aux[0];
            letra[1] = aux[1];
            strcat(palabraMayus,letra);
        }

        //Caso ú
        else if ((int)palabra[i] == -61 && (int)palabra[i+1] == -70){
            i++;
            char aux[3] = "Ú";
            letra[0] = aux[0];
            letra[1] = aux[1];
            strcat(palabraMayus,letra);
        }
        //Caso ñ
        else if ((int)palabra[i] == -61 && (int)palabra[i+1] == -79){
            i++;
            char aux[3] = "Ñ";
            letra[0] = aux[0];
            letra[1] = aux[1];
            strcat(palabraMayus,letra);
        }
        //Caso en que no hayan tildes
        else{
            char letra = palabra[i];
            letra = toupper(letra);
            strcat(palabraMayus,convertirCharAString(letra));
        }
    }
    return palabraMayus;
}

//Función para saber si una secuencia corresponde a un terminal
//ENTRADA: un string que representa la secuencia, y los terminales
//SALIDA: 1 si la secuencia es un terminal, 0 si no lo es
int esTerminal(char *secuencia, char **terminales){
    for(int i = 0; i < 34; i++){
        if(strcmp(terminales[i],secuencia) == 0){
            return 1;
        }
    }
    return 0;
}

//Función que busca con qué terminal coincide una secuencia
//ENTRADA: la secuencia y los terminales
//SALIDA: el terminal que coincide con la secuencia
char *buscar(char *secuencia, char **terminales){
    for(int i = 0; i < 34; i++){
        if(strcmp(terminales[i],secuencia) == 0){
            return terminales[i];
        }
    }
}

//Función para saber si un terminal tiene tilde o no
//ENTRADA: una palabra
//SALIDA: 1 si la palabra tiene tilde, 0 si no tiene
int tieneTilde(char *palabra){
    int largo = strlen(palabra);
    for (int i = 0; i<largo; i++){
        //Caso á
        if ((int)palabra[i] == -61 && (int)palabra[i+1] == -95){   
            return 1;
        }
        //Caso é
        else if ((int)palabra[i] == -61 && (int)palabra[i+1] == -87){
            return 1;
        }

        //Caso í
        else if ((int)palabra[i] == -61 && (int)palabra[i+1] == -83){
            return 1;
        }

        //Caso ó
        else if ((int)palabra[i] == -61 && (int)palabra[i+1] == -77){
            return 1;
        }

        //Caso ú
        else if ((int)palabra[i] == -61 && (int)palabra[i+1] == -70){
            return 1;
        }
        //Caso ñ
        else if ((int)palabra[i] == -61 && (int)palabra[i+1] == -79){
            return 1;
        }
    }
    return 0;

}
//Función para analizar la palabra leída 
//ENTRADA: los terminales y la palabra a analizar
//SALIDA: un nodo con los terminales presentes en la palabra
nodo  *analizadorLexico(char **terminales, char *palabra){
    int largo = strlen(palabra);
    nodo *listaSecuencias=NULL;
    //printf("\nPalabra -> %s\n", palabra);
    for(int i = 0; i<strlen(palabra);i++){
        char *secuencia = (char*)malloc(sizeof(char)*100);
        strcpy(secuencia,convertirCharAString(palabra[i]));

        //printf("\nSecuencia -> %s", secuencia);


        //Si la secuencia es un terminal, entonces se agrega a nodo
        if(esTerminal(secuencia,terminales)==1){
            nodo * nuevo = (nodo *)malloc(sizeof(nodo));
            char *aux = buscar(secuencia, terminales);
            nuevo->secuencia=aux;
            //printf("\nvalor de aux %s", aux);
            if(tieneTilde(aux) == 1){
                nuevo->largo=(strlen(secuencia)-1);
            }
            else{
                nuevo->largo=strlen(secuencia);
            }
              
            listaSecuencias=insertar(listaSecuencias,nuevo);
        }

        for(int j = i+1; j<strlen(palabra); j++){
            strcat(secuencia,convertirCharAString(palabra[j]));
            //printf("\nSecuencia -> %s", secuencia);
            if (esTerminal(secuencia,terminales) == 1){
                i=j;
                //printf("           -------------> si");
                if(listaSecuencias != NULL && strspn(listaSecuencias->secuencia,secuencia) >0){
                    //printf("\nsecuencia anterior: %s\n", listaSecuencias->secuencia);
                    char *aux = buscar(secuencia, terminales);
                    listaSecuencias ->secuencia = aux;
                    listaSecuencias ->largo = strlen(aux);
                }
                else{
                    nodo * nuevo = (nodo *)malloc(sizeof(nodo));
                    char *aux = buscar(secuencia, terminales);
                    nuevo->secuencia=aux;
                    //printf("\nvalor de aux %s", aux);
                    if(tieneTilde(aux) == 1){
                        nuevo->largo=(strlen(secuencia)-1);
                    }
                    else{
                        nuevo->largo=strlen(secuencia);
                    }
                    listaSecuencias=insertar(listaSecuencias,nuevo);
                }
                
            }
        }
    }
    return listaSecuencias;
}

//Función para leer al archivo
//ENTRADA: el nombre del archivo de entrada y del archivo de salida, y la lista de terminales
//SALIDA: no tiene
void leerArchivo(char *archivoEntrada, char* archivoSalida, char **terminales){
    FILE *archivo = fopen(archivoEntrada,"r");
    FILE *salida = fopen(archivoSalida,"w");
    char palabra[100];
    while (fscanf(archivo, "%s",&palabra) != EOF){
        //printf("%s", palabra);
        nodo *listaSecuencias=analizadorLexico(terminales,palabra);
        //mostrarNodo(listaSecuencias);

        nodo *listaSecuencias2 = invertirNodo(listaSecuencias);
        //mostrarNodo(listaSecuencias2);
        if(listaSecuencias2 != NULL){
            
            nodo *auxiliar=listaSecuencias2;
            while(auxiliar!=NULL){
                fprintf(salida,"%s\n", aMayus(auxiliar->secuencia));
                auxiliar=auxiliar->siguiente;
            }
            
        }
        
        liberar(&listaSecuencias);
    }
    //Término de lectura de archivo
    //printf("\ntermina de leer");
    

    fclose(salida);
}

//Función para recibir los parámetros de entrada por consola
//ENTRADA: la cantidad de argumentos, los argumentos, el nombre del archivo de entrada y el nombre del archivo de salida
//SALIDA: 0 si se ingresaron de manera incorrecta los parámetros, o 1 si se ingresaron correctamente
int recibirArgumentos(int argc, char *argv[], char **archivoEntrada, char **archivoSalida){
    if (argc < 2){
        printf("Error: Faltan par%cmetros.", 160);
        printf("\nUso: lexico.exe archivo_entrada archivo_salida \n");
        return 0;
    }

    if (argc == 2){
        printf("Error: Falta par%cmetro.", 160);
        printf("\nUso: lexico.exe archivo_entrada archivo_salida\n");
        return 0;
    }

    if (argc > 3){
        printf("Error: Demasiados par%cmetros.", 160);
        printf("\nUso: lexico.exe archivo_entrada archivo_salida\n");
        return 0;
    }
    FILE * archE = fopen(*archivoEntrada,"r");
    if(archE == NULL){
    	printf("Error: El archivo de entrada no existe.\n");
        fclose(archE);
    	return 0;
    }

    FILE * archS = fopen(*archivoSalida,"r");
    if(archS != NULL){
    	printf("Error: El archivo de salida ya existe.\n");
        fclose(archS);
    	return 0;
    }

    return 1;
}

int main (int argc, char *argv[]){
    char *archivoEntrada, *archivoSalida;
    archivoEntrada = argv[1];
    archivoSalida = argv[2];
    char **terminales = generarTerminales();  
    int validar = recibirArgumentos(argc, argv, &archivoEntrada,&archivoSalida);
    if(validar == 0){
        exit(1);
    }
    leerArchivo(archivoEntrada, archivoSalida, terminales);

}