#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem
valores negativos.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	int vetor[TAM], i;
	
	/* Fim */

	/* Entrada de dados */
	
	for(i = 0; i < TAM; i++){
		
		printf("Digite vetor[%d]:", i);
		scanf("%d",&vetor[i]);
		
	}

	// Solicita que o usuário que entre com algum dado qualquer
	
	printf("\nO vetor original:");

	for(i = 0; i < TAM; i++){
		
		printf("%d ", vetor[i]);
		
	}
	
	printf("\n");
	
	//Percorrendo o vetor e onde encontrar no vetor na posição i valor negativo eu substituo por 0
	
	for(i = 0; i < TAM; i++){
		
		if(vetor[i] < 0){
			
			vetor[i] = 0;
		}
	}
	
	/* Fim */ 

	/* Saida de dados */
	
	printf("\nO novo vetor:");

	for(i = 0; i < TAM; i++){
		
		printf("%d ", vetor[i]);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
