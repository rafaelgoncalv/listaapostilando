#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

 Escreva um programa que leia um nÚmero inteiro maior do que zero e devolva, na tela, a ´
soma de todos os seus algarismos. Por exemplo, ao numero 251 corresponder ao valor
8 (2 + 5 + 1). Se o nÚmero lido nÃo for maior do que zero, o programa terminar a com a
mensagem número inválido.
 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	int num, alg1, rest1, alg2, rest2, soma;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite um número positivo qualquer:");
	scanf("%d", &num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(num >= 0){
		
		//251
		//Separando os algarismos até 10 casas
		alg1 = num / 100; // 2
		rest1 = num % 100; //51
		alg2 = rest1 / 10; //5
		rest2 = rest1 % 10; //2
		
		//Realizando a operação perdida
		
		soma = alg1 +alg2 + rest2;
		
		//Imprimindo a mensagem
		
		//Você pode realizar a impressão da seguinte forma
		if(num >= 0 && num <= 9){
			
			printf("\n%d => 0 + %d = %d", num, rest2, soma);
			
		}else{
			
			if(num >= 10 && num <= 99){
				
				printf("\n%d => %d + %d = %d", num, alg2, rest2, soma);
				
			}else{
				if(num >= 100 && num <= 999)
				
					printf("\n%d => %d + %d + %d = %d", num, alg1, alg2, rest2, soma);
					
			}
		}
		
		//ou ao invés da maneira anterior você pode proceder como no comentário abaixo mais próximo. Não esqueça de descartar o que você fez anteriomente é claro
		
		
		/*
			Ou você podia imprimir apenas a seguinte mensagem
			
			printf("\nA soma dos algarismo de %d = %d", num, soma);
			
		*/
		
	}else{
		
		printf("O número digitado é inválido!!");
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da execução
		    do programa não fechar instantaneamente */
	


   } // Fim 
