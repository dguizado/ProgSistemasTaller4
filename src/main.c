/* 
 * File:   main.c
 * Author: Miguel Bustamante 
 *
 * Created on 4 de junio de 2017, 12:35 p.m.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cifrado.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    int n;
    char **frase[50];
    
    if (argc!=4){
        
        printf("Ingrese el numero de n: \n");
        scanf("%i",&n);
        getchar();
        printf("Ingrese la frase que desea cifrar: \n");
        fgets(frase, 50, stdin);  
        
        
    }
    else {
        
        n=atoi(argv[1]);
        //frase =argv[2];        
        //char **opcion[10]=argv[3];
        
        if  (strcmp(argv[3],"-c")==0){
            printf("Cifrado Ciclico\n");
            cifradoCiclico(argv[2],n);
            printf("Codificacion Morse:\n");
            claveMorse(argv[2]);
        }
        else if (strcmp(argv[3],"-a")==0){
            char*clave[50];
             printf("Ingrese Clave: \n");
            fgets(clave, 50, stdin);
            printf("Cifrado Autollave\n");
            cifradoAutollave(argv[2],clave);
            printf("\nCodificacion Morse:\n");
            claveMorse(argv[2]);
        }
        else if (strcmp(argv[3],"-p")==0) {
            char*clave[50];
             printf("Ingrese Clave: \n");
            fgets(clave, 50, stdin);
            printf("Cifrado Contraseña\n");
            cifradoContrasena(argv[2],clave);
            printf("Codificacion Morse:\n");
            claveMorse(argv[2]);
        }
        else{
           printf("Argumento Incorrecto"); 
            
        }
    }
    
    
    return (EXIT_SUCCESS);
}

