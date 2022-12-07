#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	int Codigo,Nas,E,I,TT;

	printf("\nAPOSENTADORIA");
	printf("\nDigite seu código: ");
	scanf("%d", &Codigo);

	printf("\nDigite o seu ano de nascimento: ");
	scanf("%d",&Nas);

	printf("\nDigite o ano que você entrou na empresa: ");
	scanf("%d", &E);

	I = (2022 - Nas);
	TT = (2022 - E);
	printf("\nSua idade: %d Anos", I);
	printf("\nTempo na empresa: %d Anos", TT);

	printf("\nSituação: ");
	if((I >= 65) || (TT >= 30)){
		printf("Requerer Aposentadoria");
	}else if((I >= 60 ) && (TT >= 25)){
		printf("Requerer Aposentadoria");
	}else{
		printf("Não Requerer Aposentadoria");
	}

	return 0;
}
