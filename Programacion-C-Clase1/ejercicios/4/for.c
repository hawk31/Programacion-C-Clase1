/* Realizar el ejercicio que hemos realizado con while pero usando
 * el bucle for
 */


/* Bibliotecas a incluir */
#include <stdio.h>
#include <string.h>


void main()
{
	/* Declaración de variables */

	int len = 0;
	char cadena[5] = "Hola";
	int i;

	/* Código usando condicional for */

	for (i = 0; i < (strlen(cadena) + 1); i++) {
		if(cadena[i] != '\0'){
			len ++;
		}
		else{
			printf("Longitud %d \n", len);
			break;
		}
	}

}
