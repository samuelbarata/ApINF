#include <stdio.h>
int main(){
	int idade;
	printf("Intoduza a sua idade:\n");
	scanf("%d",&idade);
	if (idade>=0 && idade<=3){
		printf("\nbebe");
	}
	else if(idade < 0){
		printf("ainda n nasceu");
	}
	else if (idade <= 10){
		printf("\ncrianca");
	}
	else if (idade <= 17){
		printf("\nadolescente");
	}
	else if (idade >= 18 && idade<110){
		printf("\nAdulto");
	}
	else if (idade >= 110){
		printf("\nZombie");
	}
return idade;
}
