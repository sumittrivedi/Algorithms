#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
int kmp(char substr[],char str[])
{
  int n,i,j,m;
  n=strlen(str);
  m=strlen(substr);
  int *d;
  d=(int*)malloc(m*sizeof(int));
  d[0]=0;
  for(i=0,j=0;i<m;i++)
    {
        while(j>0 && substr[j] != substr[i])
        {
            j=d[j-1];
        }
        if(substr[j]==substr[i])
        {
        j++;
        d[i]=j;
        }
    }
    for(i=0,j=0;i<n;i++)
    {
        while(j<0 && substr[j] != substr[i])
            {
                j=d[j-1];
            }
            if(substr[j]==str[i])
                j++;
            if(j==m)
              {
                  free(d);
                return i-j+1;
             }
    }
    free(d);
    return -1;
}

int main()
{
    char str[10],substr[10];
    gets(str);
    gets(substr);
    int pos;
    pos=kmp(substr,str);
    if(pos != -1)
        printf("position start at %d\n",pos+1);
    else
        printf("match not found");
    return 0;
}
