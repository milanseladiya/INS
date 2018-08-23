#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int k,i;
	char pt[30],ct[30],ch;
	printf("Enter key value : ");
	scanf("%d",&k);
	printf("Enter plain text : ");
	scanf("%s",pt);
	for(i=0;i<=strlen(pt);i++)
	{
		ch=pt[i];
		if(ch>='a'&&ch<='z')
		{
			ch=ch+k;	
			
			if(ch>'z')
			{
				ch=ch-'z'+'a'-1;
			}
			ct[i]=ch;
		}
		if(ch>='A'&&ch<='Z')
		{
			ch=ch+k;
			if(ch>'Z')
			{
				ch=ch-'Z'+'A'-1;
			}	
			ct[i]=ch;
		}
	}
	printf("\nEncrypted message is : %s",ct);
	
	for(i=0;i<=strlen(ct);i++)
	{
		ch=ct[i];
		if(ch>='a'&&ch<='z')
		{
			ch=ch-k;	
			
			if(ch>'z')
			{
				ch=ch+'z'-'a'+1;
			}
			ct[i]=ch;
		}
		if(ch>='A'&&ch<='Z')
		{
			ch=ch-k;
			if(ch>'Z')
			{
				ch=ch+'Z'-'A'+1;
			}	
			ct[i]=ch;
		}
	}
	printf("\n\nDecrypted message is : %s",pt);
	
	getch();
}
