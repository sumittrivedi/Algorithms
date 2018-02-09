#include <stdio.h>
#include <stdlib.h>
void merge(int left[],int right[],int a[],int l,int r)
{
    int i=0,j=0,k=0;
    while(i<l && j<r)
    if(left[i]<=right[j])
        a[k++]=left[i++];
    else
        a[k++]=right[j++];
    while(i<l)
        a[k++]=left[i++];
    while(j<r)
        a[k++]=right[j++];
}
int mergesort(int a[],int size)
{
      int i,mid;
    if(size<2)
        return size;
    else
        mid=size/2;
        int l[mid],r[size-mid];
        for(i=0;i<mid;i++)
        l[i]=a[i];
        for(i=mid;i<size;i++)
        r[i-mid]=a[i];
        mergesort(l,mid);
        mergesort(r,size-mid);
        merge(l,r,a,mid,size-mid);
}
int main()
{
    int i,n,a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    mergesort(a,n);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}
