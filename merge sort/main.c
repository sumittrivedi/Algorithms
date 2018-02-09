#include <stdio.h>
 #include <stdlib.h>
int a[100];
void partition(int a[],int low, int high)
{
int mid;
 if(low<high){
 mid = (low+high)/2;
 partition(a,low,mid);
 partition(a,mid+1,high);
 merge_sort(a,low,mid,high);
 }


 }

 void merge_sort(int a[],int low,int mid,int high)
 {

 int temp[50];
 int k;
 int l = low;
 int i =low;
 int m = mid +1;
 while((l<=mid) && (m<=high)){

 if(a[l]<=a[m]){

 temp[i] = a[l];
 l++;
 }
 else{

temp[i] = a[m];
 m++;
}

i++;
}

if(l>mid){
for(k=m;k<=high;k++){

temp[i]=a[k];
i++;
 }

 } else{

 for(k=l;k<=mid;k++){
 temp[i]=a[k];
 i++;

 }
 }

 for(k=low;k<=high;k++){

 a[k]=temp[k];

 }


 }
 int main()
 {
 int i,n;
 printf("Enter total numbers you want to sort\n");
 scanf("%d",&n);
 printf("Enter numbers\n");
 for(i=0;i<n;i++){

 scanf("%d",&a[i]);

}
 partition(a,0,n-1);

 //OUTPUT
 printf("Sorted array using merge sort\n");
 for(i=0;i<n;i++){

 printf("%d\n",a[i]);
 }
 return 0;
}
