#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	int A[TAM], B[TAM], C[TAM], i, j;
	/* Fim */

	/* Entrada de dados */
	printf("O vetor A:\n\n");
	for(i = 0; i < TAM; i++){
		
		printf("A[%d]:", i);
		scanf("%d",&A[i]);
	}
	
	printf("\n");
	
	printf("O vetor B:\n\n");
	for(i = 0; i < TAM; i++){
		
		printf("B[%d]:", i);
		scanf("%d",&B[i]);
	}

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */
	j = 0;
	for(i = 0; i < TAM; i++){
		
		C[j] = A[i] - B[i];
		
		j++;
		
	}

	/* Saida de dados */
	printf("\n");
	printf("O vetor C:\n");
	for(i = 0; i < TAM; i++){
		
		printf("\nC[%d]: %d", i, C[i]);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

