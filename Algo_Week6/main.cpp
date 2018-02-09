#include <iostream>
using namespace std;
int *start,*over,n;
class A
{
public :
    void arrange(int *,int *);
    void display();

};
void A :: arrange(int a[],int b[])
{
    int temp1,temp2;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
         if(b[i] > b[j])
         {

             temp1=a[i];
             temp2=b[i];
             a[i]=a[j];
             b[i]=b[j];
             a[j]=temp1;
             b[j]=temp2;
         }
        }
    }
}
void A :: display()
{
    int k=1;
    for (int i=1;i<n;i++)
    {
        if(start[i]>=over[i-1])
        k++;
        else

            over[i]=over[i-1];
    }
    cout<<k;
}

int main()
{
    cin>>n;
    start= new int[n];
    over= new int[n];
    for (int i=0;i<n;i++)
       {
         cin>>start[i]>>over[i];
        over[i]+=start[i];
       }
    A obj;
    obj.arrange(start,over);
    obj.display();
    return 0;
}
