//
//  ex6.c
//  ApInf
//
//  Created by Samuel Barata on 17/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>
void l1(unsigned short int a){
	for (int i=0;i<a;i++){
		printf("-");
	}
	printf("\n");
}
void l2(unsigned short int a){
	printf("|");
	for (int i=0;i<(a-2);i++){
		printf(" ");
	}
	printf("|");
	printf("\n");
}


void tex6(){
	unsigned short int q;
	puts("Qual o comprimento do quadrado que deseja: ");
	scanf("%hd",&q);
	l1(q);
	for(int i=0;i<(q/2);i++){
		l2(q);
	}
	l1(q);
}
