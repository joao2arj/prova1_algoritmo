#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	char q;
	
	//questão 1
	printf(" Disciplina: Algoritmo e programacao\n Professor: Joyce Siqueira\n Aluno: Joao Pedro Araujo S. Fonseca\n Matricula: UC22000347\n Curso: Analise e Desenvolvimento de sistemas\n Repositorio (Git): https://github.com/joao2arj/prova_algoritmo\n Software utilizado: DevC++\n\n");
	
	//questão 2
	printf("##################################################");
	printf("\n\n Digite a questao que deve ser executada:\n\n \t|A|\t |B|\t |C|\t\n\n");
	printf("Questao: ");
	scanf("%c", &q);
	//system("cls");
	
	switch(q){
		case 'A':
			break;
		
		case 'B':
			break;
		
		case 'C':
			break;
			
		default:
			printf("AVISO: OPCAO INVALIDA!");
			
	}
	
	return 0;
}
