//
//  main.c
//  ex2
//
//  Created by Samuel Barata on 30/10/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
	int num,k;
	printf("Introduza um numero: ");
	scanf("%d", &num);
	for(int j=1; j<=num; j++){
		for(float i=1; i<=j; i++){
			k=i/2;
			//printf("%f %d ",f,k);
			if(i/2 == k){ //Se i/2 == numero inteiro ...
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n");
	}
	return 0;
}
