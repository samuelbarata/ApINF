#include <stdio.h>
main(){
	float tax,in,conv;
	tax=1.40;
	printf("Introduza um valor em $:\n");
	scanf(" %f", &in);
	conv=(in/tax);
	printf(" %f$ corresponde a %f euros",in , conv);
}
