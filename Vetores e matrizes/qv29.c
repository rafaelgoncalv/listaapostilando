#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM 6

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Fa�a um programa que receba 6 numeros inteiros e mostre:
    
	� Os numeros pares digitados;
	� A soma dos numeros pares digitados;
	� Os n�meros �mpares digitados;
	� A quantidade de n�meros �mpares digitados;
	
*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	int vetor[TAM], i, qtdp, qtdi;
	qtdp = 0;
	qtdi = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	printf("Preencha o vetor:\n\n");
	for(i = 0; i < TAM; i++){
		
		printf("Vetor[%d]:", i);
		scanf("%d",&vetor[i]);
	}

	//Percorrendo o vetor, imprindo os n�meros pares e a quantidade existente deles no vetor
	
	printf("\nOs valores pares:\n\n");
	for(i = 0; i < TAM; i++){
		
		if(vetor[i] % 2 == 0){
			
			/* Saida de dados */
			printf("%d", vetor[i]);
			// Exibe mensagem na tela
			qtdp++;
			
			
		}
	}
	
	/* Saida de dados */
	printf("\nA quantidade de pares: %d", qtdp);
	// Exibe mensagem na tela
	
	//Percorrendo o vetor, imprindo os n�meros �mpares e a quantidade existente deles no vetor
	
	printf("\nOs valores impares:\n\n");
	for(i = 0; i < TAM; i++){
		
		if(vetor[i] % 2 == 0){
			
			/* Saida de dados */
			printf("%d", vetor[i]);
			// Exibe mensagem na tela
			qtdp++;
			
			
		}
	}
	
	/* Saida de dados */
	printf("\nA quantidade de impares: %d", qtdi);
	// Exibe mensagem na tela
	   
	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim
