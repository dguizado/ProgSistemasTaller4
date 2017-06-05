#include<string.h>
#include <stdio.h>
char* claveMorse(char* mensaje){
  int i;
    for(i=0; i<strlen(mensaje); i++){
        if(mensaje[i]==65 || mensaje[i]==97){
           printf(".-");
	}

	else if(mensaje[i]==66 || mensaje[i]==98){
	   printf("-...");
	}

	else if(mensaje[i]==67 || mensaje[i]==99){
	   printf("-.-.");
	}

	else if(mensaje[i]==68 || mensaje[i]==100){
	   printf("-..");
	}

	else if(mensaje[i]==69 || mensaje[i]==101){
	   printf(".");
	}

	else if(mensaje[i]==70 || mensaje[i]==102){
	   printf("..-.");
	}

	else if(mensaje[i]==71 || mensaje[i]==103){
	   printf("--.");
	}

	else if(mensaje[i]==72 || mensaje[i]==104){
	   printf("....");
	}

	else if(mensaje[i]==73 || mensaje[i]==105){
	   printf("..");
	}

	else if(mensaje[i]==74 || mensaje[i]==106){
	   printf(".---");
	}

	else if(mensaje[i]==75 || mensaje[i]==107){
	   printf("-.-");
	}

	else if(mensaje[i]==76 || mensaje[i]==108){
	   printf(".-..");
	}

	else if(mensaje[i]==77 || mensaje[i]==109){
	   printf("--");
	}

	else if(mensaje[i]==78 || mensaje[i]==110){
	   printf("-.");
	}

	else if(mensaje[i]==79 || mensaje[i]==111){
	   printf("---");
	}

	else if(mensaje[i]==80 || mensaje[i]==112){
	   printf(".--.");
	}
	
	else if(mensaje[i]==81 || mensaje[i]==113){
	   printf("--.-");
	}

	else if(mensaje[i]==82 || mensaje[i]==114){
	   printf(".-.");
	}

	else if(mensaje[i]==83 || mensaje[i]==115){
	   printf("...");
	}

	else if(mensaje[i]==84 || mensaje[i]==116){
	   printf("-");
	}

	else if(mensaje[i]==85 || mensaje[i]==117){
	   printf("..-");
	}

	else if(mensaje[i]==86 || mensaje[i]==118){
	   printf("...-");
	}

	else if(mensaje[i]==87 || mensaje[i]==119){
	   printf(".--");
	}

	else if(mensaje[i]==88 || mensaje[i]==120){
 	   printf("-..-");
	}
	
	else if(mensaje[i]==89 || mensaje[i]==121){
	   printf("-.--");
	}

	else if(mensaje[i]==90 || mensaje[i]==122){
	   printf("--..");
	}

	else
	   printf("Caracter invalido");
    }

}
