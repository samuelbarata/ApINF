#include <stdio.h>
int media (int a, int b, int c){
	a = (a+b+c)/3;
	return a;
}
int anoB (unsigned int d){/*...2012 2016...*/
	if(d%4 == 0){
		return 1;
	}
	else{
		return 0;
	}
}


int ano (unsigned int d){
	int ano = 2017;
	return (ano-d);
}
int menu(int op){
	int a,b,c;
	unsigned int d;
	switch(op){
		case 1:printf("Introduza 3 numeros separador pela tecla enter:\n");scanf("%d%d%d",&a,&b,&c);printf("A media de %d+%d+%d e: %d\n",a,b,c,media(a,b,c));break;
		case 2:printf("Introduza a sua data de nascimento seguido pela tecla enter:\n");scanf("%d",&d);
			if(anoB(d)==1){
				printf("Nasceu num ano bissexto\n");
			}
			else{
				printf("Nao Nasceu num ano bissexto\n");	
			}break;
		case 3:printf("Introduza a sua data de nascimento seguido pela tecla enter:\n");scanf("%d",&d);printf("Voce tem %d anos\n",ano(d));break;
		default: printf("Nao e uma opcao!\n\n");
	}
}

int main(){
	system("color a");
	int op;
	do{
		printf("\n1 -\tFazer media de tres numeros\n2 -\tSaber se nasceu num ano bissexto\n3 -\tSaber quantos anos tem\n4 -\tSair\n\n");
		scanf("%d",&op);
		if (op == 4){return 0;}
		menu(op);
	}while(op!=4);
	return 0;
}
