#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima �
o vetor, o maior elemento e a posic�ao que ele se encontra.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	int vetor[TAM], i, maior, menor, posmaior, posmenor;
	
	/* Fim */

	/* Entrada de dados */
	
	for(i = 0;i < TAM; i++){
		
		printf("Digite o valor %d:",i + 1);
		scanf("%d",&vetor[i]);
		
	}

	// Solicita que o usu�rio que entre com algum dado qualquer
			
	//Encontrando o maior, menor no vetor e suas respectivas posi��es
	maior = vetor[0];
	posmaior = 0;
	menor = vetor[0];
	posmenor = 0;
	
	for(i = 1;i < TAM;i++){
			
		if(vetor[i] > maior){
				
			maior = vetor[i];
			posmaior = i;
				
		}
		
		if(vetor[i] < menor){
				
			menor = vetor[i];
			posmenor = i;
				
		}	
	}
	
	//Imprimindo o vetor ap�s o seu preenchimento
	
	printf("\n");
	for(i = 0;i < TAM;i++){
	
		printf("%d ",vetor[i]);
		
	}

	/* Fim */ 

	/* Saida de dados */
	
	printf("\nO maior => vetor[%d] = %d", posmaior, maior);
	printf("\nO menor => vetor[%d] = %d", posmenor, menor);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
