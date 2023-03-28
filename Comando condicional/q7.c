#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

 Fac¸a um programa que receba dois números e mostre o maior. Se por acaso, os dois
números forem iguais, imprima a mensagem números iguais.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	int n1, n2;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o 1º valor:");
	scanf("%d", &n1);
	printf("Digite o 2º valor:");
	scanf("%d", &n2);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(n1 > n2){
		
		printf("n1 = %d é o maior número", n1);
		
	}else{
		if(n2 > n1){
			
			printf("n2 = %d é o maior número", n2);
				
		}else{
			
			printf("Não existe o maior número, pois ambos são iguais");
			
		}
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
   
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 


	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da execução
		    do programa não fechar instantaneamente */
	


   } // Fim 
