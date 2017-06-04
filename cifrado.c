#include"cifrado.h"
#include<stdio.h>
#include<string.h>


char* cifradoCiclico(char* mensaje, int llave){
   int i;
   for(i=0; i<strlen(mensaje); i++){
	if((mensaje[i]>=65 && mensaje[i]<90) || (mensaje[i]>=97 && mensaje[i]<122))
	  printf("-%c", mensaje[i]+key);
   } 
}


char* cifradoAutollave(char* mensaje, char* llave){

}

char* cifradoContrasena(char* mensaje, char* llave){

}
