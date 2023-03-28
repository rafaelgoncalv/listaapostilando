#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM 6

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Fa�a um programa que leia um vetor de 15 posic�es e o compacte, ou seja, elimine as
posi��ees com valor zero. Para isso, todos os elementos � frente do valor zero, devem ser
movidos uma posi��o para tr�s no vetor.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	int vetor[TAM], i, j, k;
	
	/* Fim */

	/* Entrada de dados */
	
	printf("Preencha o vetor:\n\n");
	
	for(i = 0; i < TAM; i++){
		
		printf("Vetor[%d]:", i);
		scanf("%d",&vetor[i]);
		
	}

	// Solicita que o usu�rio que entre com algum dado qualquer
	
	/*
		Realizando uma varredura para encontrar a posi��o que tem valor igual a 0 e se assim acontecer deslocar o pr�ximo da pr�xima posi��o diferente de 0 para essa posi��o repetindo
		este processo quantas vezes for necess�rio at� que todo o vetor tenha sido percorrido
	*/
	
	//0,0,2,0,3,5
	j = 0;
	for(k = 0; k < TAM; k++){
		
		if(vetor[k] == 0){
		
			continue;
		
		}
			
		vetor[j] = vetor[k];//vetor[j] � o vetor p�s copia e o vetor[i] � o vetor p�s leitura
		//printf("\n%d", vetor[j]);
		j++;
			
	}

	/* Fim */ 

	/* Saida de dados */
	
	printf("\n\nO vetor sem os zeros:\n");
	
	for(i = 0; i < j; i++){
		
		printf("\nVetor[%d] = %d", i, vetor[i]);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	 
	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim
