#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

Leia a idade e o tempo de servic¸o de um trabalhador e escreva se ele pode ou nao se
aposentar. As condiçõeses para aposentadoria são:
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	int idade, tempot, idademin;
	
	/* Fim */

	/* Entrada de dados */
	
	printf("Digite a idade:");
	scanf("%d", &idade);
	printf("Digite o tempo de trabalho:");
	scanf("%d", &tempot);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 
	
	//Calculando a idade mínima que o trabalhador precisa ter para ter aquele tempo de contribuição
	
	idademin = idade - tempot;

	/* Saida de dados */
	
	if(idademin >= 18){
		
		if((idade >= 65 || tempot >= 30) || (idade >= 60 && tempot >= 25)){
			
			printf("\nPode se aposentar");
			
		}else{
			
			printf("\nNão pode se aposentar");
			
		}
		
	}else{
		
		printf("\nA idade mínima para trabalhar por lei e 18 anos");
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	//system("PAUSE"); //Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
