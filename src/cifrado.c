#include <stdio.h>
#include <string.h>


char* cifradoCiclico(char* mensaje, int llave){

int i;
for(i=0; i<strlen(mensaje); i++){
        if(mensaje[i]>=65 && mensaje[i]<90) {
            if (mensaje[i]+llave>90){
                printf("-%c",mensaje[i]+llave-26 );
                
            }
            else{
                printf("-%c",mensaje[i]+llave);
            }
                     

        }
        if(mensaje[i]>=97 && mensaje[i]<122){
            if(mensaje[i]+llave>122){
                printf("-%c",mensaje[i]+llave-26 );
            }
            else{
                printf("-%c",mensaje[i]+llave);
            }
        
        }
        else{
        printf("-%c",mensaje[i]);
        }
    }
return mensaje;
}

char* cifradoAutollave(char* mensaje, char* clave){
    
    int i;
    int cont=0;
    for(i=0; i<strlen(mensaje); i++){
        
        if(mensaje[i]>=97 && mensaje[i]<122) {
            if (cont>strlen(clave)-1){
                cont=0;
                if(mensaje[i]+clave[cont]-97>122){
                    printf("%c",mensaje[i]+clave[cont]-97-26);
                    cont++;
                }
                else{
                    printf("%c",mensaje[i]+clave[cont]-97);
                    cont++;
                }
            
            
            }
            else{
                if(mensaje[i]+clave[cont]-97>122){
                    printf("%c",mensaje[i]+clave[cont]-97-26);
                    cont++;
                }
                else{
                    printf("%c",mensaje[i]+clave[cont]-97);
                    cont++;
                }
            
            }
            
            
        }
        else {
        printf("%c",mensaje[i]);
        }
    }
    return mensaje;
}

char* cifradoContrasena(char* mensaje, char* clave){
    int i;
    for(i=0; i<strlen(mensaje); i++){
        
        if(mensaje[i]>=97 && mensaje[i]<122) {
            
            if(mensaje[i]>strlen(clave)+97){
                printf("%c",mensaje[i]+strlen(clave)+1);
            }
            else{
                printf("%c",clave[mensaje[i]-97]);
            }
    
    
    }
        
    
    else{
            printf("%c",mensaje[i]);
    }
    }
    return mensaje;
   
}
