#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "utils.h"

static int test1(void);
static int test2(void);
static int test3(void);



static int test1(void){
	char cadena[9] = "HolaPapi";
	char letra = 'a';
	char cadena2[9] = "HolaMami";

	int cuenta = cuenta_numero_letras(cadena, letra);
	assert(cuenta == 2);

	int comp = compara_cadena(cadena, cadena2);
	assert(comp == 0);

	int tipo = tipo_de_letra(letra);
	assert(tipo == 1);
}

static int test2(void){
	char cadena[9] = "HolaPapi";
	char letra = 'a';
	int n = 8;
	int m = 14;

	int pri = primera_letra(cadena, letra);
	assert(pri == 3);

	int suma = suma_numeros(n, m);
	assert(suma == 22);
}

static int test3(void){
	int n = 14;
	int m = 4;
	int resta;
	int mult;

	resta = resta_numeros(n, m);
	assert(resta == 10);

	mult = multiplica_numeros(n, m);
	assert(mult == 56);

}

void main(){

test1();
test2();
test3();

char cadena[50] = "holapapi";
char letraacambiar = 'p';
char letrasustituyente = 'm';
char resul[50];
strcpy(resul, cambia_letras(cadena, letraacambiar, letrasustituyente));
printf("%s\n", resul);
assert(strcmp(resul,"holamami")==0);

}