#include<stdio.h>
main(){
	char name[] = "Samuel";
	char my_String[] = {'S', 'a', 'm', 'u', 'e', 'l', '\0'};
	for(int i=0; i<6; i++){
		printf("%c", name[i]);
	}
	
	char str[]="Bom dia turma";
	printf("\n%s\n", str);
	
	char str2[]={'B','o','m',' ','d','i','a', ' ', 'T','u','r','m','a','\0'};
	printf("\n%s\n", str2);
}
