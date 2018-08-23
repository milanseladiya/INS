#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char pt[10],ct[10];
	char key[25];
																													//char key[]="xkymodqntzawvebrcigpjlfhsu";
	int i,count;
	char ch;
	printf("Enter plain text : ");
	gets(pt);
	printf("\nEnter the key value : ");
	for(i=0;i<26;i++,ch++){
		//printf("%c : ",ch);
		scanf("%c",&key[i]);
	}

	for(i=0;i<strlen(pt);i++)
	{
		ch=pt[i];
		count=ch%97;
		ct[i]=key[count];
	}
	
	printf("\nEnter cipher text : ");
	for(i=0;i<strlen(pt);i++)
	{
		printf("%c",ct[i]);
	}
	getch();
}
