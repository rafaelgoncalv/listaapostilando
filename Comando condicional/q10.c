#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura): `
• Homens: (72.7 * h) - 58
• Mulheres: (62, 1 * h) - 44, 7
 

*/

int main(){ // Função obrigatória

	/* Declaração de constantes ou variáveis */
	
	float h, pesoideal;
	char sexo;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a altura:");
	scanf("%f", &h);
	printf("Digite o sexo [F/M]:");
	scanf(" %c", &sexo);
	//sexo = getche();

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(sexo == 'F' || sexo == 'f'){
		
		pesoideal = 62.1 * h - 44.7;
		printf("\nO peso ideal é igual %.2fKg\n",pesoideal);
		
	}else{
		if(sexo == 'M' || sexo == 'm'){
			
			pesoideal = 72.7 * h - 58;
			printf("\nO peso ideal é igual %.2fKg\n",pesoideal);
				
		}else{
			
			printf("\nO sexo digitado é inválido\n");//Apesar da questão não ter perdido isto eu fiz essa condição adicional para mostrar uma mensagem de erro ao usuario
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
