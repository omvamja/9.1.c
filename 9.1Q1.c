// Q,[1]
#include<stdio.h>
void main (){

int a,u,i;

	printf ("\nenter a size:=> ");
	scanf("%d",&u);
	char name[u];
	
		printf ("\nenter any string :=>  ");
	scanf("%s",&name);
	
	for(i=0;i<=u;i++){
		if (name[i]>=97 && name[i] <=122)
		name[i]=name[i]-32;
	} 
	printf("\nlowercase string :=>%s",name); 
	}
