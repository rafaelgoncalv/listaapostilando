#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM 6


// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a m�dia dos valores.
*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	int vetor[TAM], i, maior, menor, soma, qtdn;
	float media;
	//Inicializando a vari�vel
	qtdn = 0;
	soma = 0;
	/* Fim */

	/* Entrada de dados */
	
	//Preenchendo o vetor de i posi��es
	for(i = 0; i < TAM; i++){
		
		printf("Digite o valor %d:", i + 1);
		scanf("%d",&vetor[i]);
		
		qtdn++;
	}
	// Solicita que o usu�rio que entre com algum dado qualquer
	
	//Percorrendo o vetor para encontrar o maior e o menor valor
	maior = vetor[0];
	menor = vetor[0];
	
	for(i = 0; i < TAM; i++){
		
		soma = soma + vetor[i];
		
		if(vetor[i]  > maior){
			
			maior = vetor[i];
		}
		
		if(vetor[i] < menor){
			
			menor = vetor[i];
			
		}
	}

	/* Fim */ 
	
	/* C�lculos matem�ticos*/
	
	media = soma/(float)qtdn;
	/* Saida de dados */

	printf("\nO maior valor = %d", maior);
	printf("\nO menor valor = %d", menor);
	printf("\nA m�dia = %.2f", media);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
