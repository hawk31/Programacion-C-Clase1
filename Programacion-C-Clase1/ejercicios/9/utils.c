#include <stdio.h>
#include "utils.h"
#include <string.h>


int cuenta_numero_letras(char cadena[], char letra){
	int lon = strlen(cadena);
	int i;
	int cont = 0;

	for(i=0;i<lon;i++){
		if(cadena[i]==letra){
			cont++;
		}
	}

	return cont;
}

int compara_cadena(char *cadena1, char *cadena2){
	int cond = 1;
	int i;
	int lon = strlen(cadena1);

	for(i=0; i<lon ;i++){
		if(cadena1[i] != cadena2[i]){
			cond = 0;
		}
	}
	return cond;
}

int tipo_de_letra(char letra){
	switch(letra){
	case 'a':
		return 1;
		break;
	case 'c':
		return 2;
		break;
	case 'e':
		return 3;
		break;
	default:
		return 0;
		break;
	}
}

int primera_letra(char cadena[], char letra){
	int i;
	int lon = strlen(cadena);
	for(i=0;i<lon;i++){
		if(cadena[i]==letra){
			return i;
		}
	}
}

const char * cambia_letras(char cadena[], char letraoriginal, char letracambiar){
	int i;
	int lon = strlen(cadena);
	
	for(i=0;i<lon;i++){
		if(cadena[i] == letraoriginal){
			cadena[i] = letracambiar;
		}
	}
	return cadena;
}

int suma_numeros(int n, int m){
	int suma = n + m;
	return suma;	
}

int resta_numeros(int n, int m){
	int resta = n - m;
	return resta;	
}

int multiplica_numeros(int n, int m){
	int mult = n * m;
	return mult;	
}