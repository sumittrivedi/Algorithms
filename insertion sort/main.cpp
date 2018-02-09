#include <iostream>

using namespace std;

class A
{
public:
    void insert_sort(int*);
};
void A :: insert_sort(int a[])
{
   // int i;
    for(int i=1;i<5;i++)
    {
        int j=i;
        while(a[i]<a[i-1] && i>0)
        {
            int temp;
            temp=a[i-1];
            a[i-1]=a[i];
            a[i]=temp;
            i--;
    }
    i=j;}
    for(int i=0;i<5;i++)
    {
      cout<<a[i]<<"\n";
    }
}

int main()
{
    int a[5];
    for(int i=0;i<5;i++)
        cin>>a[i];
    A obj;
    obj.insert_sort(a);
    return 0;
}
