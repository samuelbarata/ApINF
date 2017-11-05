#include <stdio.h>
main (){
	float in=0;
	do {
		printf("introduza um numero:\n");
		scanf(" %f", &in);
		if (in>0){
			printf("%f > 0\n\n", in);
		}
		else if(in<0){
			printf("%f < 0\n\n", in);
		}
		else {
			printf("Bye :)", in);
			return (0);
		}
	} while(in!=0);
}
