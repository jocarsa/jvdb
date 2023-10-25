#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(){
    const char *carpeta = "C:\\jvdb";
    int resultado = mkdir(carpeta,0777);
    if(resultado == 0){
        printf("correcto");
    }else{
        printf("fallo");
    }
    return 0;
}