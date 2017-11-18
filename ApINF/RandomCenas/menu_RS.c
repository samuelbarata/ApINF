//
//  menu_RS.c
//  ApInf
//
//  Created by Samuel Barata on 18/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

void op_RS(){
	printf("1\tNome\n2\tPseudocodigo Exemplo\n0\tSair\n");
}

void dir_RS(unsigned short int op){
	switch (op){
		case 1:name();break;
		case 2:fopen("Pseudocodigo_exemplo.html","r");break;
		case 3:bf();break;
		default:puts("Nao e uma opcao");break;
	}
}

void menu_RS(){
	unsigned short int op;
	do{
		op_RS();
		scanf("%hd",&op);
		if (op != 0){dir_RS(op);}
	}while(op!=0);
}
