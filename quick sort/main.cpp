#include <iostream>
#include <fstream>

using namespace std;

class A
{
public:
    void quicksort(int*,int ,int);
    void swap1(int*,int ,int);
};
void A ::swap1(int* a,int l,int r)
{
    int temp=*(a+l);
         *(a+l)=*(a+r);
         *(a+r)=temp;
}
void A :: quicksort(int* a,int l,int r)
{
    int temp1;
	int pivot,lower=l+1,higher=r;
	pivot=*(a);
while(lower<=higher)
{
    while(*(a+lower)<pivot)
    lower++;
    while(*(a+higher)>pivot)
    higher--;
if(lower<=higher)
    swap1(a,lower,higher);
else
  {
    swap1(a,l,lower-1);
    quicksort(a,l,higher);
    quicksort(a,higher+1,r);

   }
lower++;
higher--;
}

}
int main()
{
    A obj;
    int i=0;
    int a[10];
    ifstream ptr;
    ptr.open("in.txt");
    while(!ptr.eof())
    ptr >> a[i++];
    obj.quicksort(a,0,9);
     for(int i=0;i<10;i++)
     cout<<"\n"<<a[i];
    return 0;
}
