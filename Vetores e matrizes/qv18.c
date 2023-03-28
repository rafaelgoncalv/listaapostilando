#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Fa�a um programa que leia um vetor de 10 n�meros. Leia um n�mero x. Conte os
m�ltiplos de um n�mero inteiro x num vetor e mostre-os na tela.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	int vetor[TAM], i, x, qtdm;
	//Inicializando a vari�vel
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

	// Solicita que o usu�rio que entre com algum dado qualquer
	
	printf("\nO vetor:");

	for(i = 0; i < TAM; i++){
		
		printf("%d ", vetor[i]);
		
	}
	
	printf("\n");
	
	//Percorrendo o vetor e contando a quantidade de m�ltiplos de x
	for(i = 0; i < TAM; i++){
		
		if(vetor[i] % x == 0){
			
			qtdm++;
		}
	}
	
	/* Fim */ 

	/* Saida de dados */
	
	printf("\nA quantidade de m�ltiplos de %d: %d\n", x, qtdm);
	
	printf("Os m�ltiplos de %d s�o:", x);
	for(i = 0; i < TAM; i++){
		
		if(vetor[i] % x == 0){
			
			printf("%d ", vetor[i]);
		}	
	}
	
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
