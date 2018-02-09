#include <stdio.h>
#include <stdlib.h>
int n;
void bubble_sort(float a[])
{
    int i,j;
    for(i=0;i<n;i++)
         for(j=i+1;j<n;j++)
             if(a[i]<a[j])
                {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;n--;
                }
}
void knapsack()
{

}
int main()
{
    int i,w;
    float a[10],b[10],c[10];
    printf("Enter number of items :-\n");
    scanf("%d",&n);
    printf("Enter weight of items :-\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter respective profits of items :-\n");
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    printf("Profit to weight ratios of items :-\n");
    for(i=0;i<n;i++)
    c[i]=a[i]/b[i],printf("%d\t",&c[i]);
    bubble_sort(c);
    for(i=0;i<n;i++)
    printf("%f\t",&c[i]);
    printf("\nEnter total quantity to sell :-\n");
    scanf("%d",&w);
  /*  while(w>0)
     {
         if(w>c[i++])
            printf("%d  from ")
*/
    return 0;
}
