#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras
#define TAM 5

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto �
escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o �
produto escalar, sendo que o produto escalar e dado por: � x1 * y1 + x2 * y2 + ... + xn * yn.


*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	float A[TAM], B[TAM], soma;
	soma = 0;
	int i;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	printf("O vetor A:\n\n");
	for(i = 0; i < TAM; i++){
		
		printf("A[%d]:", i);
		scanf("%f",&A[i]);
	}
	
	printf("\n");
	
	printf("O vetor B:\n\n");
	for(i = 0; i < TAM; i++){
		
		printf("B[%d]:", i);
		scanf("%f",&B[i]);
	}

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* C�lculos matem�ticos*/
	
	//Calculando o produto escalar
	
	for(i = 0; i < TAM; i++){
		
		soma = soma + A[i] * B[i];

	}

	/* Saida de dados */
	printf("\n");
	printf("O produto escalar � igual: %.3f\n", soma);

	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

