/* Creando una variable local de nombre "len". Crear una variable local de
 * tipo cadena de caracteres que se llame "cadena". Aumentar el valor de "len"
 * mientras que no se encuentre el caracter '\0' en la posicion cadena[i].
 */

/* Bibliotecas a incluir */
#include <stdio.h>

void main () {
	/* Declaración de variables */
	int len = 0;
	char cadena[5] = "Hola";
	int cond = 0;
	int i = 0;

	/* Código usando while*/

	while (cond == 0) {
		if(cadena[i] != '\0'){
			len++;
			i++;			
		}
		else{
			cond = 1;
			printf("Longitud %d \n", len);
			break;

		}
	}
}
