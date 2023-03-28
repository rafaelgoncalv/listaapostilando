#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o prec¸o antigo,
calcule e escreva o prec¸o novo, e escreva uma mensagem em func¸ao do prec¸o novo (de ˜
acordo com a segunda tabela).
PREÇO ANTIGO		 PERCENTUAL DE AUMENTO
ate R$ 50 ´	 				5%
entre R$ 50 e R$ 100 		10%
acima de R$ 100 			15%


*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	float precoantigo, precoatual;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o preço antigo:");
	scanf("%f", &precoantigo);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Saida de dados */
	if(precoantigo < 50){
		
		precoatual = precoantigo + 0.05 * precoantigo;
		
		printf("O preço atual é %.2f", precoatual);
		
	}else{
		
		if(precoantigo >= 50 && precoantigo <= 100){
			
			precoatual = precoantigo + 0.1 * precoantigo;
			
			printf("O preço atual é %.2f", precoatual);

		}else{
			
			precoatual = precoantigo + 0.15 * precoantigo;
			
			printf("O preço atual é %.2f", precoatual);
			
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
