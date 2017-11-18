//
//  ex2.c
//  ApInf
//
//  Created by Samuel Barata on 30/10/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

void jdp2() {
	int num,k;
	printf("Introduza um numero: ");
	scanf("%d", &num);
	for(int j=1; j<=num; j++){
		for(float i=1; i<=j; i++){
			k=i/2;
			if(i/2 == k){ //Se i/2 == numero inteiro ...
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n");
	}
}
