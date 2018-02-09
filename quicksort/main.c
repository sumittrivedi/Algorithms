#include <stdio.h>
#include <stdlib.h>
void swap(int x[],int i,int j)
{
     int temp=x[i];
     x[i]=x[j];
     x[j]=temp;
}
void quicksort(int x[],int first,int last)
{
    if(first<last)
    {
        int i,temp,j,pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
                while(x[i]<=x[pivot] && i<last)
                    i++;
                while(x[j]>x[pivot])
                    j--;
               if(i<j)
               swap(x,i,j);
        }
swap(x,pivot,j);
quicksort(x,first,j-1);
quicksort(x,j+1,last);
}
}
int main()
{
    int size,i,*x;
     printf("Enter size\n");
    scanf("%d",&size);
    x=(int*)malloc(size*sizeof(int));
    printf("Enter elements\n");
    for(i=0;i<size;i++)
       scanf("%d",&x[i]);
    quicksort(x,0,size-1);
    printf("\ndisplay after quick sort\n");
    for(i=0;i<size;i++)
        printf("%d\n",x[i]);
    return 0;
}
