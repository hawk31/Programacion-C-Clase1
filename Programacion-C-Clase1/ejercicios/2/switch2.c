/* Creando una variable local de nombre "valor". Comprobar si dicha variable
 * es 0, si es así imprimir un mensaje diciendo que se ha recibido un 0 o un 1.
 * En los demas casos imprimir un mensaje diciendo que no es un valor esperado.
 */

/* Bibliotecas a incluir */
#include <stdio.h>

void main(){

	/* Declaración de variables */

	int valor = 0;


	/* Código usando condicional switch */

	switch (valor) {
	case 0:
		printf("Cero o uno recibido \n");
		break;
	case 1:
		printf("Cero o uno recibido \n");
		break;
	default:
		printf("Otro valor recibido \n");
		break;
	}
}
