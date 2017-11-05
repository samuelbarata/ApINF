#include <stdio.h>
main(){
	int i,k;
	scanf("%d",&k);
	if(k==0){
		k=35;
	}
	else{
		printf("introduza um numero:\n");
		scanf("%d",&k);
		for(int x; x<=100; x++){
			printf("\n");
		}
	}
	printf("introduza um valor de 0 a 100\n");
	do{
	scanf("%d", &i);
	if (i!=k){
		printf("Try again\n");
	}
	}while(i!=k);
	printf("PARABENS!!!!!!!");
}
