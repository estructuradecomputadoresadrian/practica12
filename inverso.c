#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertir(char *cadena1i, char *cadena2i);
void imprimirSinSalto(char *cadena);

int main(){
	char* cadena1 = (char*)malloc(sizeof(char)*100);
	char* cadena2 = (char*)malloc(sizeof(char)*100);
	printf("Introduzca una cadena: ");
	fgets(cadena1, 100, stdin);
	invertir(cadena1, cadena2);
	printf("Esa cadena invertida es: '");
	imprimirSinSalto(cadena2);
	printf("'.\n");
	//Libero ambos punteros
	free(cadena1);
	free(cadena2);
	return 0;
}

void invertir(char *cadena1i, char *cadena2i){
	int contador = strlen(cadena1i);
	for (int i = 0; i < strlen(cadena1i) ; i++){
			*(cadena2i+(contador-1)) = *(cadena1i+i);
			contador--;
	}
}

void imprimirSinSalto(char *cadena){
	int longitud = strlen(cadena);
	for (int i = 0; i < longitud; i++){
		if ((int)(*(cadena+i)) != '\n'){
			printf("%c", *(cadena+i));
		}
	}
}