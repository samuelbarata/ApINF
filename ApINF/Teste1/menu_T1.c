//
//  menu_T1.c
//  ApInf
//
//  Created by Samuel Barata on 18/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

void op_T1(){
	printf("1 a 6\tExercicios\n7\t\tEnunciado\n0\tSair\n");
}

void dir_T1(unsigned short int op){
	switch (op){
		case 1:tex1();break;
		case 2:tex2();break;
		case 3:tex3();break;
		case 4:tex4();break;
		case 5:tex5();break;
		case 6:tex6();break;
		case 7:fopen("teste1.doc","r");break;
		default:puts("Nao e uma opcao");break;
	}
}

void menu_T1(){
	unsigned short int op;
	do{
		op_T1();
		scanf("%hd",&op);
		if (op != 0){dir_T1(op);}
	}while(op!=0);
}
