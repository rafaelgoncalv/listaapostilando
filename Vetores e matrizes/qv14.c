#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define TAM 10


// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Faça um programa que leia um vetor de 10 posiçõees e verifique se existem valores iguais
e os escreva na tela.

	Não resolvido

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	int vetor[TAM], i, j, k, qtdv;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	//Preenchendo o vetor de i posições
	for(i = 0; i < TAM; i++){
		
		printf("Digite o valor %d:", i + 1);
		scanf("%d",&vetor[i]);
	
	}
	// Solicita que o usuário que entre com algum dado qualquer
	
	//Ordenando o vetor para em seguida contar os valores repetidos e mostrá-lo na tela para o usuário
	
	for(i = 0; i < TAM; i++){
		
		for(j = i + 1)
	}
	
	//Encontrar valores repetidos no vetor
	
	//2,2,2,3,3,4,4,5,5,5
	
	for(i = 0; i < TAM - 1; i++){

		qtdv = 0;
		for(j = 0; j < TAM && i != j; j++){
			
			if(vetor[i] == vetor[j]){
				
				qtdv++;//quantidade de vezes que o valor do vetor na posição i repetiu dentro do vetor
				
			}	
		}	
		
		if(qtdv>=1){
			
			printf("\n%d repetiu %d vez(es)", vetor[i], qtdv);
			
		}	
	}

	/* Fim */ 
	
	/* Saida de dados */
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
