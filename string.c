#include<stdio.h>
main(){
/*	char name[] = "Samuel";
	char my_String[] = {'S', 'a', 'm', 'u', 'e', 'l', '\0'};
	for(int i=0; i<6; i++){
		printf("%c", name[i]);
	}
	
	char str[]="Bom dia turma";
	printf("\n%s\n", str);
	
	char str2[]={'B','o','m',' ','d','i','a', ' ', 'T','u','r','m','a','\0'};
	printf("\n%s\n", str2);
	
	printf("\n%c\n", str2[2]);
*/	
/*	
	char oi[] = "Bom dia turma";
	printf("%s\n%c%c\n",oi ,oi[1], oi[5]);
*/	





	do{
		char nome[] = "";
		puts("Introduza um nome:");
		//puts("");//tem um \n encorpurado #paragrafo
		gets(nome);
		if(nome[0] == '\0'){ 
			return 0;
		}
		printf("O nome e: %s\n\n",nome);
	}while(1!=0);
}


