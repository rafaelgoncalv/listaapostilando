#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

 Determine se um determinado ano lido e bissexto. Sendo que um ano e bissexto se
for divisível por 400 ou se for divisível por 4 e nao for divisível por 100.

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	int ano;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o ano:");
	scanf("%d", &ano);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if((ano % 400 == 0) && (ano % 4 == 0) && (ano % 100 == 0)){
		
		printf("%d é bissexto",ano);
		
	}else{
		
		printf("%d não é bissexto",ano);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("PAUSE"); //Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
