#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int match(char x[],char y[])
{
    int i,j,k,l,l1,l2;
    l1=strlen(x);
    l2=strlen(y);
    for(i=0;i<=l1-l2;i++)
    {
        j=i;k=0;
        for(l=0;l<l2;l++)
        if(x[j]==y[k])
           {
               k++,j++;
            if(k==l2)
                return i;
           }
    }
    return -1;
}
int main()
{
    char a[10],b[10];
    int position;
    gets(a);
    gets(b);
    position=match(a,b);
    if(position!=-1)
        printf("\nPattern found at %d position",position+1);
    else
         printf("\nNot found");
    return 0;
}
