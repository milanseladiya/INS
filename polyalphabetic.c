#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,ptlen,keylen,temp=0,m1,m2;
    char ch='a';
    char pt[100],ct[100],key[20],m[26][26],key1[100];
    printf("Enter plain text : ");
    gets(pt);
    ptlen=strlen(pt);
    
    printf("Enter key : ");
    gets(key);
    keylen=strlen(key);
    
    for(i=0;i<ptlen;i++)
    {
     if(temp>keylen-1)
     { 
       temp=0;                 
     }
     key1[i]=key[temp];
     temp++;
    }
    
    printf("\nplain text : ");
    puts(pt);
    
    printf("key : ");
    puts(key1);
    
    for(i=0;i<26;i++)
    {
     ch='a'+i;
     for(j=0;j<26;j++)
     {
      if(ch>'z')
      {
       ch=ch-'z'+'a'-1;
      }
      m[i][j]=ch;
      ch++;               
     }                 
    }
    
    for(i=0;i<26;i++)
    {
     for(j=0;j<26;j++)
     {
      printf("%c  ",m[i][j]);                
     }            
     printf("\n");     
    }
    
    for(i=0;i<ptlen;i++)
    {
	    for(j=0;j<26;j++)
	    {
	    	if(m[j][0]==pt[i])
	    	{
				m1=j;
			}
			if(m[0][j]==key[i])
	    	{
	    		m2=j;
			}
		}
		ct[i]=m[m1][m2];
	}
	
	printf("\nCipher text : ");
	puts(ct);
	
	for(i=0;i<ptlen;i++)
    {
	    for(j=0;j<26;j++)
	    {
	    	if(m[j][0]==ct[i])
	    	{
				m1=j;
			}
			if(m[0][j]==key[i])
	    	{
	    		m2=j;
			}
		}
		ct[i]=m[m1][m2];
	}
    getch();    
}
