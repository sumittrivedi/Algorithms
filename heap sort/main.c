#include <stdio.h>
int a[100];
void reheapifydown(int heap[],int start,int finish)
{
    int max,index,temp,lchild,rchild;
    lchild=2*start;
    rchild=lchild +1;
    if(lchild<=finish)
    {
        max=heap[lchild];
        index=lchild;
        if(rchild<=finish)
        {
            if(heap[rchild]>max)
            {
                max=heap[rchild];
                index=rchild;
            }
        }
    if(heap[start]<heap[index])
    {
        /*swap(&heap[start],&heap[index]);*/
         temp=heap[start];
         heap[start]=heap[index];
         heap[index]=temp;
         reheapifydown(heap,index,finish);
    }
    }
}
void heapify(int heap[], int n)
{
    int i,index=n/2;
    for(i=index;i>0;i--)
        reheapifydown(heap,i,n);
}
void heapsort(int heap[], int n)
{
   int i,temp;
    heapify(heap,n);
     for(i=n;i>0;i--)
     {
         /*swap(&a[1],&a[i]);*/
         temp=a[1];
         a[1]=a[i];
         a[i]=temp;
        reheapifydown(heap,1,i-1);
     }
}
/*void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}*/
int main()
{
    int n,i;
    printf("Enter number of elements :\n");
    scanf("%d",&n);
     printf("Enter %d elements :\n",n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    heapsort(a,n);
    printf("Elements after heap sort :\n");
    for(i=1;i<=n;i++)
    printf("%d\n",a[i]);
    return 0;
}
