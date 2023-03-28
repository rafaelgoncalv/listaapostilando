#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
correspondente a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	int mes;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o número correspondente ao mês:");
	scanf("%d", &mes);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	switch(mes){
		
		case 1:
			
			printf("Janeiro");
			
		break;
		
		case 2:
			
			printf("Fevereiro");
			
		break;
		
		case 3:
			
			printf("Março");
		
		break;
			
		case 4:
			
			printf("Abril");
			
		break;
			
		case 5:
			
			printf("Maio");
		
		break;
			
		case 6:
			
			printf("Junho");
		
		break;
			
		case 7:
			
			printf("Julho");
			
		break;
			
		case 8: 
			
			printf("Agosto");
			
		break;
			
		case 9:
			
			printf("Setembro");
		
		break;
			
		case 10:
			
			printf("Outubro");
			
		break;
			
		case 11:
			
			printf("Novembro");
			
		break;
			
		case 12:
			
			printf("Dezembro");
			
		break;
			
		default: 
			
			printf("O mês digitado é inválido!!!");
		
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
