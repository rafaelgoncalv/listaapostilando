#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras
#define TAM 5


// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a m�dia dos valores.
*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	int vetor[TAM], i, maior, menor, posmaior, posmenor;
	float media;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	//Preenchendo o vetor de i posi��es
	for(i = 0; i < TAM; i++){
		
		printf("Digite o valor %d:", i + 1);
		scanf("%d",&vetor[i]);
	
	}
	// Solicita que o usu�rio que entre com algum dado qualquer
	
	//Percorrendo o vetor para encontrar o maior e o menor valor
	maior = vetor[0];
	posmaior = 0;

	for(i = 1; i < TAM - 1; i++){
		
		if(vetor[i]  > maior){
			
			maior = vetor[i];
			posmaior = i;
		}
		
	}
	
	menor = vetor[0];
	posmenor = 0;
	
	for(i = 1; i < TAM - 1; i++){
		
		if(vetor[i] < menor){
			
			menor = vetor[i];
			posmenor = i;
			
		}
	}

	/* Fim */ 
	
	/* Saida de dados */

	printf("\nA posi��o do maior valor = %d", posmaior);
	printf("\nA posi��o do menor valor = %d", posmenor);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
