#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
     Faça um programa que preencha um vetor com 10 numeros reais, calcule e mostre a ´
quantidade de números negativos e a soma dos números positivos desse vetor.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	int i, qtdn;
	float vetor[TAM], somap;
	//Inicializando a variável
	qtdn = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	for(i = 0; i < TAM; i++){
		
		printf("Digite o valor %d:", i + 1);
		scanf("%f",&vetor[i]);
		
	}
	// Solicita que o usuário que entre com algum dado qualquer
	
	for(i = 0; i < TAM; i++){
		
		if(vetor[i] < 0){
			
			qtdn++;
		}
		
		if(vetor[i] > 0){
			
			somap = somap + vetor[i];
			
		}
	}

	/* Fim */ 

	/* Cálculos matemáticos */

	/* Saida de dados */
	printf("\nA quantidade de números negativos = %d", qtdn);
	printf("\nA soma = %.2f", somap);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
