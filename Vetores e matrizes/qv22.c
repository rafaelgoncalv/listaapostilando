#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM1 10
#define TAM2 20

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Fac¸a um programa que leia dois vetores de 10 posic¸oes e calcule outro vetor contendo, ˜
nas posiçõeses pares os valores do primeiro e nas posições ímpares os valores do se-
gundo.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
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

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */
	//0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19
	
	//Colocando os valores do vetor A nas posições pares do outro vetor
	i = 0;
	for(j = 0; j < TAM2; j++){
		
		if(j % 2 == 0){
			
			C[j] = A[i];
			
			i++;
		}
	}
	
	//Colocando os valores do vetor B nas posições ímpares do outro vetor
	
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
	   
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

