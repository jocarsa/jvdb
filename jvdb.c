#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    FILE *archivo;
    char *operacion = argv[1];
    char *basededatos = argv[2];
    char *nombrearchivo = argv[3];
    char ruta[100];
    strcpy(ruta,basededatos);
    strcat(ruta,"-");
    strcat(ruta,nombrearchivo);
    strcat(ruta,".txt");
    
    if(strcmp(operacion,"select") == 0){
        archivo = fopen(ruta,"r");
        printf("te doy datos:\n");
        char linea[1024];
        while(fgets(linea,sizeof(linea),archivo) != NULL){
            printf("Linea: %s",linea);
        }
        
    }else if(strcmp(operacion,"insert") == 0){
        archivo = fopen(ruta,"a");
        char *texto = argv[4];
        fputs(strcat(texto,"\n"),archivo);
        fclose(archivo);
    }else{
        printf("operación no válida");
    }
    
    
    return 0;
}