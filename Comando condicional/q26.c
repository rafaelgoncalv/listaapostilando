#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

Leia a distancia em ˆ Km e a quantidade de litros de gasolina consumidos por um carro
em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
a tabela abaixo:
CONSUMO (Km/l) MENSAGEM
menor que 8 Venda o carro!
entre 8 e 14 Economico! ˆ
maior que 12 Super economico!
 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	float distancia, litros, consumo;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a distância:");
	scanf("%f", &distancia);
	printf("Digite a quantidade de litros de gasolina:");
	scanf("%f", &litros);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */
	
	consumo = distancia / litros;

	/* Saida de dados */
	
	if(consumo < 8){
		
		printf("Venda o carro");
		
	}else{
		if(consumo >= 8 && consumo <= 14){
			
			printf("Econômico");
			
		}else{
			if(consumo > 12){
				
				printf("Super econômico");
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

