#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
		int  Num;
		float NAluno,NAc,Media;
		printf("Media Aritimetica\n");
		printf("Digite quantos alunos tem na sala: ");
		scanf("%d", &Num);
		for (int i = 1; i <= Num; i++){
			printf("\nDigite a nota do aluno: ");
			scanf("%f", &NAluno);

			NAc = NAc + NAluno;
		}
		Media = NAc / Num;
		printf("\nA média das notas é : %.2f  ",Media);
	return 0;
}

