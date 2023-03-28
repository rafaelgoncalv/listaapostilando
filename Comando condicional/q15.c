#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero. Isto e, domingo se ´ 1, segunda-feira se 2, e
assim por diante.	
 
 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	int dia;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o dia da semana:");
	scanf("%d", &dia);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	switch(dia){
		
		case 1:
			
			printf("Domingo");
			
		break;
		
		case 2:
			
			printf("Segunda-feira");
			
		break;
		
		case 3:
			
			printf("Terça-feira");
			
		break;
			
		case 4:
			
			printf("Quarta-feira");
			
		break;
		
		case 5:
			
			printf("Quinta-feira");
		
		break;
		
		case 6:
			
			printf("Sexta-feira");
			
		break;
		
		case 7:
			
			printf("Sábado");
				
		break;
		
		default:
			
			printf("O dia digitado é inválido");
		
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

