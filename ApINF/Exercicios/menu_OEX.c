//
//  menu_OEX.c
//  ApInf
//
//  Created by Samuel Barata on 18/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

void op_OEX(){
	printf("+---+----------------------+\n| 1 | Strings              |\n| 6 | Enunciado exercicios |\n| 2 | Exercicio 1          |\n| 3 | Exercicio 2          |\n| 4 | Exercicio 4          |\n| 5 | Exercicio 5          |\n|   |                      |\n| 0 | Sair                 |\n+---+----------------------+\n");
}

void dir_OEX(unsigned short int op){
	switch (op){
		case 1:menu_str();break;
		case 2:e001_01();break;
		case 3:e001_02();break;
		case 4:e001_04();break;
		case 5:e001_05();break;
		case 6:puts("/ApINF/Exercicios/001.txt");break;
		default:puts("Nao e uma opcao");break;
	}
}

void menu_OEX(){
	unsigned short int op;
	do{
		op_OEX();
		scanf("%hd",&op);
		if (op != 0){dir_OEX(op);}
	}while(op!=0);
}
