#include <stdio.h>
main(){
	char day=1;
	while(day!=0){
		printf("Insira o seu estado civil:\nC - Casado\tD - Divorciado\tS - Solteiro\tV - Viuvo\n");
		scanf(" %c", &day);
		switch(day){
			case 'C':printf("Casado\n\n");break;
			case 'D':printf("Divorciado\n\n");break;
			case 'S':printf("Solteiro\n\n");break;
			case 'V':printf("Viuvo\n\n");break;
			case '0': return 0;
			default:printf("Estado civil incorreto\n\n");break;
		}
	}
}
