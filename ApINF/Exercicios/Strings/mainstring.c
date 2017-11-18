//
//  mainstring.c
//  ApInf
//
//  Created by Samuel Barata on 16/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//	Exercises from http://codeforwin.org/2015/11/string-programming-exercises-and-solutions-in-c.html

#include <stdio.h>

void op_str(){
	puts("1 a 4\tExercicios\n0\tSair");
}

void dir_str(unsigned short int op){
	switch (op){
		case 1: sex01();break;
		case 2: sex02();break;
		case 3: sex03();break;
		case 4: sex04();break;
		default:puts("Nao e uma opcao");break;
	}
}

void menu_str(){
	unsigned short int op;
	do{
		op_str();
		scanf("%hd",&op);
		if (op != 0){dir_str(op);}
	}while(op!=0);
}
