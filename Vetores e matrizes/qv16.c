#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define TAM 5

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Faça um programa que leia um vetor de 5 posições para números reais e, depois, um
código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem
direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2 ´
escreva uma mensagem informando que o código e inválido.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	int vetor[TAM], i, j, codigo, aux;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	for(i = 0; i < TAM; i++){
		
		printf("Digite o vetor[%d]:", i);
		scanf("%d",&vetor[i]);
		
	}
	
	printf("Digite o código:");
	scanf("%d",&codigo);
	
	// Solicita que o usuário que entre com algum dado qualquer
	
	while(codigo != 0){
		
		switch(codigo){
			
			case 1: //Imprimir na ordem direta 
				for(i = 0; i < TAM; i++){
			
				printf("%d ", vetor[i]);
			
				}
			break;
			
			case 2:
				//Invertendo os números de posição
				if((TAM - 1) % 2 == 1){//Testando se o resto da divisão é igual 1 ou a 0. Se for igual 1 este if será executado caso contrário cairá na condição estabelecida no else
						
						for(i = 0, j = TAM - 1;i < j; i++, j--){
							
							aux = vetor[i]; //Guarda uma cópia do valor armazenado no vetor na posição i
							
							vetor[i] = vetor[j]; // Troca o valor armazenado no vetor na posição i pelo o que está armazenado na posiçãao j
				
							vetor[j] = aux; //No lugar do valor do vetor na posição j vamos armazenar o valor que copiamos do vetor na posição i inicialmente na variável auxiliar
							
							//Esses passos irão se repetir enquanto a condição que definimos no laço esteja sendo satisfeita
						}
					}else{
						
						for(i = 0, j = TAM - 1;i < j + 1; i++, j--){
							
							aux = vetor[i]; //Guarda uma cópia do valor armazenado no vetor na posição i
							
							vetor[i] = vetor[j]; // Troca o valor armazenado no vetor na posição i pelo o que está armazenado na posiçãao j
				
							vetor[j] = aux; //No lugar do valor do vetor na posição j vamos armazenar o valor que copiamos do vetor na posição i inicialmente na variável auxiliar
							
							//Esses passos irão se repetir enquanto a condição que definimos no laço esteja sendo satisfeita
						}
					}
					
					//Imprimindo na ordem inversa

					for(i = 0; i < TAM; i++){
				
					printf("%d ", vetor[i]);
				
					}
			
			break;
			
			default:
				printf("O código digitado é inválido!!");
			break;
		}
		
		printf("\nDigite o código:");
		scanf("%d",&codigo);
	}

	/* Fim */ 

	/* Cálculos matemáticos */

	/* Saida de dados */
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
