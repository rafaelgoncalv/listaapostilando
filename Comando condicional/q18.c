#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

 
 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	int a, b, opcao;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor de a:");
	scanf("%d",	&a);
	printf("Digite o valor de b:");
	scanf("%d",	&b);
	printf("Digite o tipo de operação desejada:");
	printf("\n========================");
	printf("\n1 - Soma");
	printf("\n2 - Subtração");
	printf("\n3 - Multiplicação");
	printf("\n4 - Divisão");
	printf("\n5 - Resto da divisão");
	printf("\n========================\n");
	scanf("%d",	&opcao);
	

	// Solicita que o usuário que entre com algum dado qualquer

	/* Saida de dados */
	
	switch(opcao){
		
		case 1: 
			
			printf("%d + %d = %d", a, b, a+b);
		
		break;

		case 2: 
			
			printf("%d - %d = %d", a, b, a-b);
		
		break;
		
		case 3: 
			
			printf("%d * %d = %d", a, b, a*b);
		
		break;

		case 4:
			
			printf("%d / %d = %d", a, b, a/b);
		
		break;

		case 5: 
			
			printf("%d / %d = %d", a, b, a%b);
		
		break;
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("PAUSE"); //Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
