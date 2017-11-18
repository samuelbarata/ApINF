#include <stdio.h>
void switch1(){
	int day;
	do{
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
	}while(day!=0);
}
