#include<stdio.h>
#include<string.h>
 
int main()
{
    char pf[5][5],key[26],pt[100],ct[100];
    char alpha[]={'a','b','c','d','e','f','g','h','i','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i=0,klen=0,temp=0,j=0,k=0,tempi,tempj;
    printf("Enter key : ");
    gets(key);
    //printf("\nEnter plain text : ");
    //gets(pt);
    klen=strlen(key);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(k<klen)
            {
                pf[i][j]=key[k];
                k++;
            }
            else
            {
                tempi=i;
                tempj=j;
            }
        }
    }
    
    for(i=tempi;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            for(k=0;k<26;k++)
            {
                if(key[k]!=alpha[k])
                {
                    pf[i][j]=alpha[temp];
                }
            }
        }
    }
    
    printf("\nKey table : ");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%c  ",pf[i][j]);    
        }
        printf("\n");
    }
    getch();   
}
