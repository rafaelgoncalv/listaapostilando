#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 100

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que não são múltiplos de 7 ou que terminam com 7.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	int vetor[TAM], i, num, resto, qtdn;
	qtdn = 0;
	
	/* Fim */

	/* Entrada de dados */

	// Solicita que o usuário que entre com algum dado qualquer
	
	//Preenchendo o vetor com os 100 primeiros naturais que não são múltiplos de 7 ou que terminam com 7
	
	num = 0;
	i = 0;
	while(qtdn < TAM){
		
		//Pegando o último algarismo de cada número de i até n
		
		resto = num % 10;//O resto da divisão nesta situação é equivalente ao último algarismo
		
		if(num % 7 != 0 || resto == 7){
			
			vetor[i] = num;
			i++;
			qtdn++;//Quantidade valores do vetor de i posições
			
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
   
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
