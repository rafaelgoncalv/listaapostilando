#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Fa�a um programa que receba do usu�rio um vetor com 10 posi��es. Em seguida dever�
ser impresso o maior e o menor elemento do vetor.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	int vetor[TAM], i, maior, menor;
	
	/* Fim */

	/* Entrada de dados */
	
	for(i = 0;i < TAM; i++){
		
		printf("Digite o valor %d:",i + 1);
		scanf("%d",&vetor[i]);
		
	}

	// Solicita que o usu�rio que entre com algum dado qualquer
		
	//Encontrando o maior valor
	
	maior = vetor[0];
	
	for(i = 1;i <TAM;i++){
	
	// i come�a com 0 porque o valor da posi��o 0 j� foi armazenada inicialmente na vari�vel maior, assim a compara��o pode come�ar com o valor da posi��o seguinte.
			
		if(vetor[i] > maior){
				
			maior = vetor[i];
				
		}	
	}
		
	//Encontrando o menor valor
	menor = vetor[0];
		
	for(i = 1;i < TAM;i++){
			
		if(vetor[i] < menor){
				
			menor = vetor[i];
				
		}	
	}
	
	//Imprimindo o vetor ap�s seu preenchimento
	
	printf("\n");
	for(i = 0;i < TAM;i++){
	
		printf("%d ",vetor[i]);
		
	}

	/* Fim */ 

	/* Saida de dados */
	
	printf("\nO maior valor: %d", maior);
	printf("\nO menor valor: %d", menor);
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
