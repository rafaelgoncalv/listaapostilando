#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras
#define TAM 10


// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Fa�a um programa que leia um vetor de 10 posi��ees e verifique se existem valores iguais
e os escreva na tela.

	N�o resolvido

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	int vetor[TAM], i, j, k, qtdv;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	//Preenchendo o vetor de i posi��es
	for(i = 0; i < TAM; i++){
		
		printf("Digite o valor %d:", i + 1);
		scanf("%d",&vetor[i]);
	
	}
	// Solicita que o usu�rio que entre com algum dado qualquer
	
	//Ordenando o vetor para em seguida contar os valores repetidos e mostr�-lo na tela para o usu�rio
	
	for(i = 0; i < TAM; i++){
		
		for(j = i + 1)
	}
	
	//Encontrar valores repetidos no vetor
	
	//2,2,2,3,3,4,4,5,5,5
	
	for(i = 0; i < TAM - 1; i++){

		qtdv = 0;
		for(j = 0; j < TAM && i != j; j++){
			
			if(vetor[i] == vetor[j]){
				
				qtdv++;//quantidade de vezes que o valor do vetor na posi��o i repetiu dentro do vetor
				
			}	
		}	
		
		if(qtdv>=1){
			
			printf("\n%d repetiu %d vez(es)", vetor[i], qtdv);
			
		}	
	}

	/* Fim */ 
	
	/* Saida de dados */
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
