//
//  ex2.c
//  ApInf
//
//  Created by Samuel Barata on 17/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>
void linha1(){
	for (int i=0; i<10; i++){
		printf("*");
	}
	for (int i=0; i<12; i++){
		printf("-");
	}
	printf("\n");
}

void linha2(){
	for (int i=0; i<22; i++){
		printf("-");
	}
	printf("\n");
}

void tex2(){
	for (int i=0; i<5; i++){
		linha1();
	}
	for (int i=0; i<4; i++){
		linha2();
	}
}
