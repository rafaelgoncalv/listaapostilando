#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras
#define TAM 50

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Fa�a um vetor de tamanho 50 preenchido com o seguinte valor: (i+ 5 * i)%(i+ 1), sendo
i a posi��o do elemento no vetor. Em seguida imprima o vetor na tela.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	int vetor[TAM], i;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	for(i = 0; i < TAM; i++){
		
		vetor[i] = (i + 5 * i)%(i + 1);
		
 	}

	// Solicita que o usu�rio que entre com algum dado qualquer
	
	/* Fim */ 

	/* Saida de dados */
	
	for(i = 0; i < TAM; i++){
		
		printf("\n%d", vetor[i]);
		
 	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
