#include <stdio.h>
void madia3(){
	int max,min,med,av;
	printf("introduza 3 num:\n");
	scanf(" %d %d %d", &max, &min, &med);
	av=(max+min+med)/3;
	printf("media: %d", av);
}
