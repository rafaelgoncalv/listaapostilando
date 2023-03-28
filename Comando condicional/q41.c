#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de
acordo com a tabela abaixo:
IMC 			Classificação
< 18,5 			Abaixo do Peso
18,6 - 24,9 	Saudável
25,0 - 29,9 	Peso em excesso
30,0 - 34,9 	Obesidade Grau I
35,0 - 39,9 	Obesidade Grau II(severa)
>= 40,0 		Obesidade Grau III(morbida)
 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	float peso, altura, imc;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o peso em Kg:");
	scanf("%f", &peso);
	printf("Digite a altura em metro:");
	scanf("%f", &altura);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */
	
	imc = peso / (altura * altura);

	/* Saida de dados */
	
	if(imc <= 18.5){
		
		printf("O imc é igual é %.2f\n", imc);
		printf("Abaixo do peso");
		
	}else{
		
		if(imc >= 18.6 && imc <= 24.9){
			
			printf("O imc é igual é %.2f\n", imc);
			printf("Saudável");
			
		}else{
			if(imc >= 25.0 && imc <= 29.9){

				printf("O imc é igual é %.2f\n", imc);
				printf("Peso em excesso");
				
			}else{
				if(imc >= 30.0 && imc <= 34.9){
					
						printf("O imc é igual é %.2f\n", imc);
						printf("Obesidade grau 1");
						
				}else{
					if(imc >= 35.0 && imc <= 39.9){
						
							printf("O imc é igual é %.2f\n", imc);
							printf("Obesidade grau 2 (severa)");
							
					}else{
							printf("O imc é igual é %.2f\n", imc);
							printf("Obesidade grau 3 (mórbida)");
					}
				}
			}
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
