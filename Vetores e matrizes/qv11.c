#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
     Fa�a um programa que preencha um vetor com 10 numeros reais, calcule e mostre a �
quantidade de n�meros negativos e a soma dos n�meros positivos desse vetor.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	int i, qtdn;
	float vetor[TAM], somap;
	//Inicializando a vari�vel
	qtdn = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	for(i = 0; i < TAM; i++){
		
		printf("Digite o valor %d:", i + 1);
		scanf("%f",&vetor[i]);
		
	}
	// Solicita que o usu�rio que entre com algum dado qualquer
	
	for(i = 0; i < TAM; i++){
		
		if(vetor[i] < 0){
			
			qtdn++;
		}
		
		if(vetor[i] > 0){
			
			somap = somap + vetor[i];
			
		}
	}

	/* Fim */ 

	/* C�lculos matem�ticos */

	/* Saida de dados */
	printf("\nA quantidade de n�meros negativos = %d", qtdn);
	printf("\nA soma = %.2f", somap);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
