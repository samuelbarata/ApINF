//
//  menu_JdP.c
//  ApInf
//
//  Created by Samuel Barata on 18/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

void op_JdP(){
	printf("+---+-------------+\n| 1 | Exercicio 1 |\n| 2 | Exercicio 2 |\n| 3 | Exercicio 3 |\n| 4 | Exercicio 4 |\n| 5 | Exercicio 4 |\n| 6 | Enunciado   |\n|   |             |\n| 0 | Sair        |\n+---+-------------+\n");
}

void dir_JdP(unsigned short int op){
	switch (op){
		case 1:jdp1();break;
		case 2:jdp2();break;
		case 3:jdp3();break;
		case 4:jdp4_1();break;
		case 5:jdp4_2();break;
		case 6:puts("/ApINF/JdP/jornadas_programacao.docx");break;
		default:puts("Nao e uma opcao");break;
	}
}

void menu_JdP(){
	unsigned short int op;
	do{
		op_JdP();
		scanf("%hd",&op);
		if (op != 0){dir_JdP(op);}
	}while(op!=0);
}
