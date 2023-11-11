#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    FILE *archivo;
    char *operacion = argv[1];
    char *basededatos = argv[2];
    char *coleccion = argv[3];
    /*
        Uso:
        jvdb.exe [operacion] [basededatos] [coleccion] [documento] [contenido]
    */
    if(strcmp(operacion,"select") == 0){
        char *documento = argv[4];
        char ruta[100];
        strcpy(ruta,"db/");
        strcat(ruta,basededatos);
        strcat(ruta,"/");
        strcat(ruta,coleccion);
        strcat(ruta,"/");
        strcat(ruta,documento);
        strcat(ruta,".json");
        archivo = fopen(ruta,"r");
        printf("te doy datos:\n");
        char linea[1024];
        while(fgets(linea,sizeof(linea),archivo) != NULL){
            printf("Linea: %s",linea);
        }
        
    }else if(strcmp(operacion,"insert") == 0){
        char *documento = argv[4];
        char ruta[100];
        strcpy(ruta,"db/");
        strcat(ruta,basededatos);
        strcat(ruta,"/");
        strcat(ruta,coleccion);
        strcat(ruta,"/");
        strcat(ruta,documento);
        strcat(ruta,".json");
        archivo = fopen(ruta,"w");
        char *texto = argv[5];
        fputs(strcat(texto,"\n"),archivo);
        fclose(archivo);
    }else if(strcmp(operacion,"create_collection") == 0){
        char rutacoleccion[100];
        strcpy(rutacoleccion,"db/");
        strcat(rutacoleccion,basededatos);
        strcat(rutacoleccion,"/");
        strcat(rutacoleccion,coleccion);
        printf(rutacoleccion);
        if(mkdir(rutacoleccion,0777) == 0){
            printf("ok");
        }else{
            printf("ko");
        }
    }else{
        printf("operación no válida");
    }
    
    
    
    return 0;
}