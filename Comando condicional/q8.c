#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Faça um programa que leia 2 notas de um aluno, verifique se as notas sao válidas e
exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um 
valor entre 0.0 e 10.0, onde caso a nota nao possua um valor válido, este fato deve ser ´
informado ao usuário e o programa termina.
 

*/

int main(){ // Função obrigatória

	/* Declaração de constantes ou variáveis */
	
	float nota1, nota2, media;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a nota n1:");
	scanf("%f", &nota1);
	printf("Digite a nota n2:");
	scanf("%f", &nota2);
	

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
		
		media = (nota1 + nota2)/2;
		
		printf("A média é %f", media);
		
	}else{
		
		printf("As notas digitadas são inválidas");
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da execução
		    do programa não fechar instantaneamente */
	


   } // Fim 
