#include <stdio.h>
main(){
	int day=8;
	while(day!=0){
		printf("Escolhe um numero de 0 a 7: ");
		scanf(" %d", &day);
		switch(day){
			case 1:
				printf("Domingo\n\n");
			break;
			case 2:
				printf("Segunda-Feira\n\n");
			break;
			case 3:
				printf("Terca-Feira\n\n");
			break;
			case 4:
				printf("Quarta-Feira\n\n");
			break;
			case 5:
				printf("Quinta-Feira\n\n");
			break;
			case 6:
				printf("Sexta-Feira\n\n");
			break;
			case 7:
				printf("Sabado\n\n");
			break;
			default:
				printf("That is  not a day");
			break;
		}
	}
}
