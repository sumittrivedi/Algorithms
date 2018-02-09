#include <stdio.h>
#include <stdlib.h>


int i,j,n;
void swap(int *a,int *b)
{
        int temp=*a;
        *a=*b;
        *b=temp;

}


void bubble_sort(int *b)
{
   for(i=0;i<n;i++)
   {
       for(j=0;j<n-i-1;j++)
       {
           if(b[j]>b[j+1])
            swap(&b[j],&b[j+1]);
       }
   }
   printf("sorted array using bubble sort\n");
        for(i=0;i<n;i++)
       printf("%d\n",*(b++));
}


int main()
{
    int *p,a[100];
    p=a;
    printf("Enter the total numbers you want to sort\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",p++);
    p=a;
    bubble_sort(p);
    return 0;
}
