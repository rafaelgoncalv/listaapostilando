#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a 
prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso
contrario imprima: Empréstimo concedido.

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	float salario, prestacao;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor do salário:");
	scanf("%f", &salario);
	printf("O valor da prestação do empréstimo:");
	scanf("%f", &prestacao);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(prestacao > 0.2 * salario){
		
		printf("Emprestimo não concedido");
	}else{
		
		printf("Empréstimo concedido");
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da execução
		    do programa não fechar instantaneamente */
	


   } // Fim 
