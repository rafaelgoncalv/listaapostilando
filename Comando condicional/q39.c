#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras.

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

 Uma empresa decide dar um aumento aos seus funcionário de acordo com uma tabela
que considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários
com menor salário terão um aumento proporcionalmente maior do que os funcionários
com um salário maior, e conforme o tempo de serviço na empresa, cada funcionário irá
receber um bônus adicional de salário. Faça um programa que leia:
• o valor do salário atual do funcionário; ´
• o tempo de serviço desse funcionário na empresa (número de anos de trabalho na
empresa).
Use as tabelas abaixo para calcular o salario reajustado deste funcion ´ ario e imprima o ´
valor do salario final reajustado, ou uma mensagem caso o funcion ´ ario n ´ ao tenha direito ˜
a nenhum aumento.
 

*/

int main(){ // Função obrigatória

	/* Declaração de constantes ou variáveis */
	float salario;
	int tempoc;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o salário do funcionário:");
	scanf("%f", &salario);
	printf("Digite o tempo de serviço:");
	scanf("%d", &tempoc);

	// Solicita que o usuário que entre com algum dado qualquer
	
	//Reajuste com base no salario atual
	
	if(salario <= 500){
	
		salario += salario * 0.25;
				
	}else{
		if(salario <= 1000){
			
			salario += salario * 0.20;
			
		}else{
			
			if(salario <= 1500){
				
				salario += salario * 0.15;
				
			}else{
				
				if(salario <= 2000){
					
					salario += salario * 0.10;
					
				}else{
					
					printf("\nSalario não reajustado");
					
				}
			}
		}
	}
	
	//Reajuste com base no tempo de contribuição
	
	if(tempoc > 10){
		
		salario += 500;
		
	}else{
		if(tempoc >= 7){
			
			salario += 300;
			
		}else{
			if(tempoc >= 4){
				
				salario += 200;
				
			}else{
				if(tempoc >= 1){
					
					salario += 100;
					
				}else{
					
					printf("\nSem bônus");
					
				}
			}
		}
	}
	
	/* Fim */ 

	/* Saida de dados */
	
	printf("\nO salário final: %.2f", salario);
	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("clear||cls"); //Limpar a tela Windows e no LINUX   
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

