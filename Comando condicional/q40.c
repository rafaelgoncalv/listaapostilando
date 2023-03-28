#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão
do distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo
de fábrica, de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao ´
consumidor.

CUSTO DE FABRICA ´                 % DO DISTRIBUIDOR        % DOS IMPOSTOS
ate R$12.000,00 ´                         5                     isento
entre R$12.000,00 e 25.000,00             10                    15
acima de R$25.000,00                      15                    20
 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	float custof;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"PT-BR");
	printf("Digite o custo de fábrica:");
	scanf("%f", &custof);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Saida de dados */
	
	if(custof <= 12000.00){
		
		printf("O custo do consumidor é %.2f", custof + 0.05 * custof);
		
	}else{
		if(custof > 12.000 && custof <= 25000.00){
			
			printf("O custo do consumidor é %.2f", custof + 0.10 * custof + 0.15 * custof);
			
		}else{
			
			printf("O custo do consumidor é %.2f", custof + 0.15 * custof + 0.20 * custof);
			
		}
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
