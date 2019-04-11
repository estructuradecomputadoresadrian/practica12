#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void quitaEspacios(char *cadenaq);

int main(){
	int longitud;
	printf("¿Qué longitud tendra la cadena?\n");
	scanf("%d", &longitud);
	char* cadena =(char*)malloc(sizeof(char)*longitud);
	printf("Introduzca una cadena\n");
	fgets(cadena, 100, stdin);
	fgets(cadena, longitud, stdin);
	printf("La cadena sin espacios es: '");
	quitaespacios(cadena);
	printf("'.\n");
	//Libero el puntero
	free(cadena);
	return 0;
}

void quitaEspacios(char *cadenaq){
	for (int i = 0; i < strlen(cadenaq); i++){
		if (*(cadenaq+i)!=' ' && *(cadenaq+i)!='\n'){
			printf("%c", *(cadenaq+i));
		}
	}
}
