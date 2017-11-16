//
//  main.c
//  Strings
//
//  Created by Samuel Barata on 16/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//	Exercises from http://codeforwin.org/2015/11/string-programming-exercises-and-solutions-in-c.html

#include <stdio.h>

int main(int argc, const char * argv[]) {
	puts("Escolha um ex (1 a 4):");
	int op;
	scanf("%d",&op);
	switch(op){
		case 1: ex01();break;
		case 2:	ex02();break;
		case 3:	ex03();break;
		case 4: ex04();break;
		default: return 0; break;
	}
	return 0;
}
