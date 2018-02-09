#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i,j,a[5],*p;
    p=a;
    for(i=0;i<5;i++)
        scanf("%d",p++);
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
            printf("%d\n",*(p--));
    return 0;
}
