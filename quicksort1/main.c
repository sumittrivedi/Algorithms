#include <stdio.h>
#include <stdlib.h>
void quicksort(int a[],int first,int last)
{
int i,j,pivot,temp;
    if(first<last)
    {

    pivot=first;
    i=first;
    j=last;
        while(a[i]<=a[pivot] && i<last)
        i++;
        while(a[j]>a[pivot])
        j--;
        if(i<j)
        {temp=a[i];
        a[i]=a[j];
        a[j]=temp;}
    }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
    quicksort(a,first,j-1);
    quicksort(a,j+1,last);
}
/*void swap(int *p,int i, int j)
{
    int temp=*(p+i);
    *(p+i)=*(p+j);
    *(p+j)=temp;
}*/
int main()
{
    int a[10],i,n;
    printf("Enter  no of elements :\n");
    scanf("%d",&n);
    printf("\nEnter elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}

