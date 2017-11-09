//
//  main.c
//  001.02
//
//  Created by Samuel Barata on 09/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
	int sum=0;
	for(int i = 1; i<=100; i=i+2){
		printf("%d\n", i);
		sum += i;
	}
	printf("\nA soma dos numeros e: %d\n", sum);
	return 0;
}
