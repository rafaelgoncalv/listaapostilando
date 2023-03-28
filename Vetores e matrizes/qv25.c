#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM 100

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Fa�a um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que n�o s�o m�ltiplos de 7 ou que terminam com 7.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	int vetor[TAM], i, num, resto, qtdn;
	qtdn = 0;
	
	/* Fim */

	/* Entrada de dados */

	// Solicita que o usu�rio que entre com algum dado qualquer
	
	//Preenchendo o vetor com os 100 primeiros naturais que n�o s�o m�ltiplos de 7 ou que terminam com 7
	
	num = 0;
	i = 0;
	while(qtdn < TAM){
		
		//Pegando o �ltimo algarismo de cada n�mero de i at� n
		
		resto = num % 10;//O resto da divis�o nesta situa��o � equivalente ao �ltimo algarismo
		
		if(num % 7 != 0 || resto == 7){
			
			vetor[i] = num;
			i++;
			qtdn++;//Quantidade valores do vetor de i posi��es
			
		}
		
		num++;
	}

	/* Fim */ 

	/* Saida de dados */
	
	printf("O vetor:\n");
	for(i = 0; i < TAM; i++){
		
		printf("\nVetor[%d] = %d", i, vetor[i]);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
   
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
