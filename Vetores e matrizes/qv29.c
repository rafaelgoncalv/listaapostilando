#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 6

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Faça um programa que receba 6 numeros inteiros e mostre:
    
	• Os numeros pares digitados;
	• A soma dos numeros pares digitados;
	• Os números ímpares digitados;
	• A quantidade de números ímpares digitados;
	
*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
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

	//Percorrendo o vetor, imprindo os números pares e a quantidade existente deles no vetor
	
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
	
	//Percorrendo o vetor, imprindo os números ímpares e a quantidade existente deles no vetor
	
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
	   
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim
