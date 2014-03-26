/*
 * MainCodeCount.c
 *
 *  Fun��o: Contador de linhas e coment�rio.
 *
 *  Created on: 25/03/2014
 *      Author: RA: 679143009 - Anderson Marques de Oliveira Carvalho
 */
#include <stdio.h>
#include <stdlib.h>
#include <libcodecount.h>


int main(int argc, char *argv[]) {

	int help, comment, silent;

	help = 0;
	comment = 0;
	silent = 0;


	if (argc < 2 || argc > 3){
		help = 1;
	} else if (argc > 1 && argv[1] != NULL)
	{
		help = help || (strstr(argv[1],"-h") != NULL);
		help = help || (strstr(argv[1],"-help") != NULL);
	}

	if (help)
	{
		printf("Contador de C�digo - Ferramentas do Programador\n");
		printf("Vers�o 1.1 - 2014\n\n");
		printf("Conta a quantidade de linhas, espa�os e comentarios de um arquivo de codigo fonte C.\n\n");
		printf("CodeCount [-h] [-help] [-s] [-silent] [-c] [-comment]\n");
		printf("\n-h (-help)   \t\t explica��es do uso do programa CodeCount.");
		printf("\n-c (-comment)\t\t conta o n�mero de linhas de coment�rio.");
		printf("\n-s (-silent) \t\t n�o apresenta resultados na tela de comando");
	}
/*
	for(i = 1 ; i < argc ; i++){
		//Avalia se foi passada op��o silent
		silent = silent || ( strstr(argv[i],"-silent") != NULL );
		silent = silent || ( strstr(argv[i],"-s") != NULL );
		//Avalia se foi passada op��o help
		silent = silent || ( strstr(argv[i],"-silent") != NULL );
		silent = silent || ( strstr(argv[i],"-s") != NULL );
	}

	printf("Contador de C�digo - Ferramentas do Programador\n");
	printf("Vers�o 1.1 - 2014\n\n");

	int HELP_OPTION = 0;
	int COMMENT_OPTION = 0;
	int SILENT_OPTION = 0;





	printf("Quantidade de parametros: %i\n",argc);

	printf("Nome do arquivo: %s\n\n",argv[1]);
*/
	return EXIT_SUCCESS;
}



