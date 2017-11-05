#include <stdio.h>
main(){
	int max,min,av;
	printf("introduza o stock maximo e minimo:\n");
	scanf(" %d %d", &max, &min);
	av=((max+min)/2);
	printf("O stock medio e %d", av);
}
