#include <stdio.h>
#include <string.h>

int main(){
	char cadena1[99];
	printf("Introduzca una frase (max 100 carácteres): ");
	fgets(cadena1, 99, stdin);
	int longitud = strlen(cadena1);
	printf("La cadena introducida es igual: ");
	for (int i = 0; i < longitud; i++){
		if ((int)(cadena1[i]) != '\n'){
			printf("%c", cadena1[i]);
		}
	}
	printf("\n");
	longitud--;
	printf("La cadena tiene %d caracteres.\n", longitud);
	int comparador = strcmp(cadena1, "compara\n");
	if (comparador == 0){
		printf("La cadena es igual a compara.\n");
	}
	else{if (comparador > 0){
			printf("La cadena es mayor que compara.\n");
		}
		else{
			printf("La cadena es menor que compara.\n");
		}
	}
	strcat(cadena1, "añadida");
	longitud = strlen(cadena1);
	printf("La cadena con los cambios es: ");
	for (int i = 0; i < longitud; i++){
		if ((int)(cadena1[i]) != '\n'){
			printf("%c", cadena1[i]);
		}
	}
	printf("\n");
	return 0;
}