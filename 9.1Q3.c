#include<stdio.h>
void main (){

int a,u,i;

	printf ("ENTER  ANY SIZE :=> ");
	scanf("%d",&u);
	char name[u];
	
		printf ("\nENTER ANY STRING :=> ");
	scanf("%s",&name);
	
	for(i=0;i<=u;i++){
		if (name[i]>=65 && name[i] <=90)
		name[i]=name[i]+32;
	}else if(name[i]>=65 && name [i <=90]) {
	
		name[i]=name[i]-32;
	}

	printf("\nLOWERCASE STRING :=>%s",name); 
	}
