#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Leia um vetor de 10 posi��es e atribua valor 0 para todos os elementos que possu�rem
valores negativos.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	int vetor[TAM], i;
	
	/* Fim */

	/* Entrada de dados */
	
	for(i = 0; i < TAM; i++){
		
		printf("Digite vetor[%d]:", i);
		scanf("%d",&vetor[i]);
		
	}

	// Solicita que o usu�rio que entre com algum dado qualquer
	
	printf("\nO vetor original:");

	for(i = 0; i < TAM; i++){
		
		printf("%d ", vetor[i]);
		
	}
	
	printf("\n");
	
	//Percorrendo o vetor e onde encontrar no vetor na posi��o i valor negativo eu substituo por 0
	
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
	
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
