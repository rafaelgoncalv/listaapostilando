#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
     Ler um conjunto de n�meros reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos t�m
10 elementos cada. Imprimir todos os conjuntos.
 
*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	int i;
	float vetor[TAM], resultado[TAM];
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	//Preenchendo o vetor de tamanho TAM
	for(i = 0;i < TAM;i++){
		
		printf("Digite um valor:");
		scanf("%f",&vetor[i]);
		
		resultado[i] = vetor[i] * vetor[i];
	}
	
	printf("\n");

	// Solicita que o usu�rio que entre com algum dado qualquer
	

	/* Saida de dados */
	
	//Imprimindo os elementos do vetor
	printf("Vetor:\n");
	for(i = 0;i < TAM;i++){
		
		printf("%f ",vetor[i]);
	}
	
	printf("\n");
	
	//Imprimindo elementos do vetor resultado
	printf("\nResultado:\n");
	for(i = 0;i < TAM;i++){
		
		printf("%.3f ",resultado[i]);
	}
	

	// Exibe mensagem na tela
   
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
