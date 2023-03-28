#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os
múltiplos de um número inteiro x num vetor e mostre-os na tela.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	int vetor[TAM], i, x, qtdm;
	//Inicializando a variável
	qtdm = 0;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	for(i = 0; i < TAM; i++){
		
		printf("Digite vetor[%d]:", i);
		scanf("%d",&vetor[i]);
		
	}
	
	printf("Digite o valor de x:");
	scanf("%d",&x);

	// Solicita que o usuário que entre com algum dado qualquer
	
	printf("\nO vetor:");

	for(i = 0; i < TAM; i++){
		
		printf("%d ", vetor[i]);
		
	}
	
	printf("\n");
	
	//Percorrendo o vetor e contando a quantidade de múltiplos de x
	for(i = 0; i < TAM; i++){
		
		if(vetor[i] % x == 0){
			
			qtdm++;
		}
	}
	
	/* Fim */ 

	/* Saida de dados */
	
	printf("\nA quantidade de múltiplos de %d: %d\n", x, qtdm);
	
	printf("Os múltiplos de %d são:", x);
	for(i = 0; i < TAM; i++){
		
		if(vetor[i] % x == 0){
			
			printf("%d ", vetor[i]);
		}	
	}
	
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
