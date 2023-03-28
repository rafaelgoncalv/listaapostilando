#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Fa�a um programa que receba do usu�rio dois vetores, A e B, com 10 n�meros inteiros
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
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

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* C�lculos matem�ticos */
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
	   
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

