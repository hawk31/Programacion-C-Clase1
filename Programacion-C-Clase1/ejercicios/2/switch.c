/* Creando una variable local de nombre "valor". Comprobar si dicha variable
 * es 0, si es así imprimir un mensaje diciendo que se ha recibido un 0.
 * Si es un uno, mensaje confirmando que se ha recibido un uno. En los demas
 * casos imprimir un mensaje diciendo que no es un valor esperado.
 */

/* Bibliotecas a incluir */

#include <stdio.h>


void main(){

	/* Declaración de variables */
	int valor = 5;

	/* Código usando condicional switch */

	switch (valor) {
	case 0:
		printf("Cero recibido \n");
		break;
	case 1: 
		printf("Uno recibido \n");
		break;

	default:
		printf("No es un valor esperado \n");
		break;
	}
}
