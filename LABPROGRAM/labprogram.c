#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	char str[50];
	FILE *fp;
	printf("enter the input\n");
	fgets(str,80,stdin);
	fp=fopen("INPUT.txt","w");
	fprintf(fp,"%s",str);
	fclose(fp);
	fp=fopen("INPUT.txt","r");
	printf("the text is\n");
	fputs(str,stdout);
}
	

	
	
