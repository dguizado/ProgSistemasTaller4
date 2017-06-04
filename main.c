#include"cifrado.h"
#include"codificacion.h"
#include<stdio.h>
#include<string.h>

 int main(){
  char letra;
  char mensaje[30];
  char texto[30];
  char contrasena[30];
  int llave;

  printf("Ingrese el tipo de cifrado: ");
  scanf("%c",letra);

	if(letra="C"){
	    printf("Cifrado Ciclico");
	    printf("Ingrese mensaje a cifrar: ");
	    scanf("%s", mensaje);
	    printf("Ingrese llave numerica: ");
            scanf("%i",llave);
	    cifradoCiclico(mensaje,llave);
	    claveMorse(mensaje);
	    }

	else if (letra="A"){
            printf("Cifrado Auto-Llave");
	    printf("Ingrese texto: ");
            scanf("%s", texto);
            printf("Ingrese contrasena: ");
	    scanf("%s", contrasena);
            cifradoAutollave(texto,contrasena);
	    }

	else if (letra="P"){
            printf("Cifrado Contrasena");
  	    printf("Ingrese texto: ");
	    scanf("%s", texto);
	    printf("Ingrese contrasena: ");
	    scanf("%s", contrasena);
            cifradoContrasena(texto, contrasena);
	    }

	else
	    printf("Letra ingresada es incorrecta");

 }
