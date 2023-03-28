#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

 Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e 
a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno
e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos.

 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	float nota1, nota2, nota3, mediap;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a nota 1:");
	scanf("%f", &nota1);
	printf("Digite a nota 2:");
	scanf("%f", &nota2);
	printf("Digite a nota 3:");
	scanf("%f", &nota3);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */
	
	mediap = (nota1 * 1 + nota2 * 1 + nota3 * 2) / 4;

	/* Saida de dados */
	
	if(mediap >= 60){
		
		printf("\nA média ponderada é %.2f", mediap);
		printf("\nAprovado");
		
	}else{
		
		printf("\nA média ponderada é %.2f", mediap);
		printf("\nReprovado");
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da execução
		    do programa não fechar instantaneamente */
	


   } // Fim 

