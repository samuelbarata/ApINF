#include <stdio.h>
main (){
	float in1=0, in2=0;
	do {
		printf("introduza dois numero:\n");
		scanf(" %f %f", &in1, &in2);
		if (in1>in2){
			printf("%f > %f\n\n", in1, in2);
		}
		else if(in1<in2){
			printf("%f < %f\n\n", in1, in2);
		}
		else {
			printf("Bye :)");
			return (0);
		}
	} while(in1!=0);
}
