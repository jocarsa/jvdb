#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    FILE *archivo;
    char *nombrearchivo = argv[1];
    archivo = fopen(strcat(nombrearchivo,".txt"),"a");
    char *texto = argv[2];
    fputs(strcat(texto,"\n"),archivo);
    fclose(archivo);
    return 0;
}