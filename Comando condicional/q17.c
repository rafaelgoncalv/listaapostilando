#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Faça um programa que calcule e mostre a area de um trapézio. Sabe-se que: ´
	
	A = (basemaior + basemenor) * altura/2

	Lembre-se a base maior e a base menor devem ser numeros maiores que zero. 
 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	float basemaior, basemenor, altura, area;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor da base maior:");
	scanf("%f",	&basemaior);
	printf("Digite o valor da base menor:");
	scanf("%f", &basemenor);
	printf("Digite o valor da altura:");
	scanf("%f", &altura);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(basemaior > 0 && basemenor > 0){
		
		area = ((basemaior + basemenor)*altura) / 2;
		
		printf("A área do trapézio é %f", area);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	//system("PAUSE"); //Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
