//
//  001.04.c
//  ApInf
//
//  Created by Samuel Barata on 09/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

void e001_04() {
	int seven, nineteen;
	unsigned long sum=0;
	for(float i=1; i<1000000; i++){
		seven = i/7;
		nineteen = i/19;
		if(seven == i/7 && nineteen == i/19){
				printf("%f\n", i);
				sum += i;
		}
	}
	printf("\nA soma destes valores e: %lu\n", sum);
}
