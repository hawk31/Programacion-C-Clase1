/* Creando una variable local de nombre "valor". Comprobar si dicha variable
 * es mayor que 5, si es así imprimir un mensaje usando printf confirmando
 * que es mayor. En caso contrario, escribir un mensaje
 */

/* Bibliotecas a incluir */

#include <stdio.h>


void main () {
	/* Declaración de variables */

	int valor = 7;

	/* Código usando condicional if */

	if (valor > 5) {
		printf("El valor no es mayor que 5.\n Tu valor es %i \n",valor);
	}

	else{
		printf("Pues bueno, parece que no la has liado.\n");
	}
}
