#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define TAM 8

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois va-
lores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
deverá escrever a soma dos valores encontrados nas respectivas posicões X e Y .
 
*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	int vetor[TAM], i, X, Y, soma;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	//Preenchendo o vetor de tamanho TAM
	for(i = 0;i < TAM;i++){
		
		printf("Digite um valor:");
		scanf("%d",&vetor[i]);
	}
	
	printf("Digite o valor de X:");
	scanf("%d",&X);
	printf("Digite o valor de Y:");
	scanf("%d",&Y);
	
	soma = vetor[X] + vetor[Y];
	
	printf("\n");

	// Solicita que o usuário que entre com algum dado qualquer
	

	/* Saida de dados */
	
	//Imprimindo os elementos do vetor
	for(i = 0;i < TAM;i++){
		
		printf("%d ",vetor[i]);
	}
	
	printf("\nA soma: %d", soma);

	// Exibe mensagem na tela
   
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
