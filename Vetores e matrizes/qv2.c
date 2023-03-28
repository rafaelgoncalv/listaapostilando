#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define TAM 6

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
 
*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	int vetor[TAM], i;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	//Preenchendo o vetor de tamanho TAM
	for(i = 0;i < TAM;i++){
		
		printf("Digite um valor:");
		scanf("%d",&vetor[i]);
	}
	
	printf("\n");

	// Solicita que o usuário que entre com algum dado qualquer
	

	/* Saida de dados */
	
	//Imprimindo os elementos do vetor
	for(i = 0;i < TAM;i++){
		
		printf("%d ",vetor[i]);
	}

	// Exibe mensagem na tela
   
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
