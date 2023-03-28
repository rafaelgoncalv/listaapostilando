#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 6


// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a média dos valores.
*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	int vetor[TAM], i, maior, menor, soma, qtdn;
	float media;
	//Inicializando a variável
	qtdn = 0;
	soma = 0;
	/* Fim */

	/* Entrada de dados */
	
	//Preenchendo o vetor de i posições
	for(i = 0; i < TAM; i++){
		
		printf("Digite o valor %d:", i + 1);
		scanf("%d",&vetor[i]);
		
		qtdn++;
	}
	// Solicita que o usuário que entre com algum dado qualquer
	
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
	
	/* Cálculos matemáticos*/
	
	media = soma/(float)qtdn;
	/* Saida de dados */

	printf("\nO maior valor = %d", maior);
	printf("\nO menor valor = %d", menor);
	printf("\nA média = %.2f", media);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
