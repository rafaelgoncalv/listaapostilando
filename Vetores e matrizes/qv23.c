#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define TAM 5

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto ´
escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o ˆ
produto escalar, sendo que o produto escalar e dado por: ´ x1 * y1 + x2 * y2 + ... + xn * yn.


*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	float A[TAM], B[TAM], soma;
	soma = 0;
	int i;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	printf("O vetor A:\n\n");
	for(i = 0; i < TAM; i++){
		
		printf("A[%d]:", i);
		scanf("%f",&A[i]);
	}
	
	printf("\n");
	
	printf("O vetor B:\n\n");
	for(i = 0; i < TAM; i++){
		
		printf("B[%d]:", i);
		scanf("%f",&B[i]);
	}

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos*/
	
	//Calculando o produto escalar
	
	for(i = 0; i < TAM; i++){
		
		soma = soma + A[i] * B[i];

	}

	/* Saida de dados */
	printf("\n");
	printf("O produto escalar é igual: %.3f\n", soma);

	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

