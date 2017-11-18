//
//  menu_ex_aulas.c
//  ApInf
//
//  Created by Samuel Barata on 18/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>
void op_ex(){
	printf("\n+----+----------------+\n|  1 | calcu          |\n|  2 | dowhile        |\n|  3 | exemplo1       |\n|  4 | if_exemplo     |\n|  5 | impostosswitch |\n|  6 | IRS            |\n|  7 | ler2           |\n|  8 | maior          |\n|  9 | mundo          |\n| 10 | NUM45          |\n| 11 | posneg         |\n| 12 | string         |\n| 13 | switch1        |\n| 14 | switch2        |\n| 15 | tabuadas       |\n| 16 | voide          |\n| 17 | whil           |\n| 18 | returne        |\n| 19 | secreto        |\n| 20 | soma2          |\n| 21 | soma3          |\n| 22 | array          |\n| 23 | char_ex        |\n| 24 | dolares        |\n| 25 | fore           |\n| 26 | idade          |\n| 27 | ler            |\n| 28 | ler1           |\n| 29 | maiormenor     |\n| 30 | mediafor       |\n| 31 | arvore         |\n| 32 | exemplo2       |\n| 33 | madia3         |\n| 34 | stock          |\n| 35 | tabulacoes     |\n|    |                |\n|  0 | Sair           |\n+----+----------------+\n");
}

void dir_ex(unsigned short int op){
	switch (op){
		case 1:calcu();break;
		case 2:dowhile();break;
		case 3:exemplo1();break;
		case 4:if_exemplo();break;
		case 5:impostosswitch();break;
		case 6:IRS();break;
		case 7:ler2();break;
		case 8:maior();break;
		case 9:mundo();break;
		case 10:NUM45();break;
		case 11:posneg();break;
		case 12:string();break;
		case 13:switch1();break;
		case 14:switch2();break;
		case 15:tabuadas();break;
		case 16:voide();break;
		case 17:whil();break;
		case 18:returne();break;
		case 19:secreto();break;
		case 20:soma2();break;
		case 21:soma3();break;
		case 22:array();break;
		case 23:char_ex();break;
		case 24:dolares();break;
		case 25:fore();break;
		case 26:idade();break;
		case 27:ler();break;
		case 28:ler1();break;
		case 29:maiormenor();break;
		case 30:mediafor();break;
		case 31:arvore();break;
		case 32:exemplo2();break;
		case 33:madia3();break;
		case 34:stock();break;
		case 35:tabulacoes();break;
		default:puts("Nao e uma opcao");break;
	}
}

void menu_ex_aulas(){
	unsigned short int op;
	do{
		op_ex();
		scanf("%hd",&op);
		if (op != 0){dir_ex(op);}
	}while(op!=0);
}
