#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM1 10
#define TAM2 20

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Fac�a um programa que leia dois vetores de 10 posic�oes e calcule outro vetor contendo, �
nas posi��eses pares os valores do primeiro e nas posi��es �mpares os valores do se-
gundo.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	int A[TAM1], B[TAM1], C[TAM2], i, j;
	/* Fim */

	/* Entrada de dados */
	printf("O vetor A:\n\n");
	for(i = 0; i < TAM1; i++){
		
		printf("A[%d]:", i);
		scanf("%d",&A[i]);
	}
	
	printf("\n");
	
	printf("O vetor B:\n\n");
	for(i = 0; i < TAM1; i++){
		
		printf("B[%d]:", i);
		scanf("%d",&B[i]);
	}

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* C�lculos matem�ticos */
	//0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19
	
	//Colocando os valores do vetor A nas posi��es pares do outro vetor
	i = 0;
	for(j = 0; j < TAM2; j++){
		
		if(j % 2 == 0){
			
			C[j] = A[i];
			
			i++;
		}
	}
	
	//Colocando os valores do vetor B nas posi��es �mpares do outro vetor
	
	i = 0;
	for(j = 0; j < TAM2; j++){
		
		if(j % 2 == 1){
			
			C[j] = B[i];
			
			i++;
		}
	}

	/* Saida de dados */
	printf("\n");
	printf("O vetor C:\n");
	for(j = 0; j < TAM2; j++){
		
		printf("\nC[%d]: %d", j, C[j]);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

