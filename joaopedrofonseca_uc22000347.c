#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	char q, nome[50];
	int a, b, ano, n=50;
	float val_hipotenusa, sen;
	
	//questão 1
	printf(" Disciplina: Algoritmo e programacao\n Professor: Joyce Siqueira\n Aluno: Joao Pedro Araujo S. Fonseca\n Matricula: UC22000347\n Curso: Analise e Desenvolvimento de sistemas\n Repositorio (Git): https://github.com/joao2arj/prova_algoritmo\n Software utilizado: DevC++\n\n");
	
	//questão 2
	printf("##################################################");
	
	printf("\n\n Digite a questao que deve ser executada:\n\n \t|A|\t |B|\t |C|\t\n\n");
	printf("Questao: ");
	scanf("%c", &q);
	system("cls");
	
	switch(q){
		case 'A':
			
			printf("# Questao A: Valor da hipotenusa. #\n\n");
			
			printf("Para calcular o valor da hipotenusa, digite o valor do cateto oposto:\n");
			scanf("%d", &a);
			system("cls");
			
			printf("Agora, o valor do cateto adjacente:\n");
			scanf("%d", &b);
			system("cls");
			
			val_hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
			sen = (a / val_hipotenusa);
			
			printf(" REPOSTA:\n\n Hipotenusa: %.3lf\n Seno: %.3lf", val_hipotenusa, sen);
			
			break;
		
		case 'B':
			
			printf("# Questao B: Verificador de ano bissexto. #\n\n");
			
			printf("Digite o nome de usuario:\n");
			scanf("%s", &nome); //utilizar fgets
			system("cls");
			
			printf("Digite o seu ano de nascimento:\n");
			scanf("%d", &ano);
			
			if(ano > 1900 && ano < 2022){
				
				if(ano % 4 == 0 && ano % 100 != 0 || ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0){
					
					printf("%s, %d e um bissexto.", nome, ano);
					
				}
			
				else{
					
					printf("%s, %d nao e um bissexto.", nome, ano);
					
				}	
			}
				
			else{
				
			printf("Digite um ano de nascimento valido!\n");
			
			}
			
			fflush(stdin);		
			break;
		
		case 'C':
			printf("OPCAO INVALIDA!\n\n");
			
			break;
			
		default:
			printf("AVISO: OPCAO INVALIDA!\n");
			
	}
	
	return 0;
}
