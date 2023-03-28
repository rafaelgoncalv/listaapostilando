#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Faça um programa para verificar se um determinado numero inteiro e divisivel por 3 ou
5, mas nao simultaneamente pelos dois.	

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	int num;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite um número inteiro positivo qualquer:");
	scanf("%d", &num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(num % 3 == 0 && num % 5 == 0){
		
	}else{
		if(num % 3 == 0){
			
			printf("%d é dívisivel por 3", num);
			
		}else{
			if(num % 5 == 0){
				
				printf("%d é dívisivel por 5", num);
				
			}
		}
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	//system("PAUSE"); //Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
