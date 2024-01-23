#include<bits/stdc++.h>
using namespace std;

 /*void Swap(int & a,int & b)
{
     if(&a!=&b)
     {
      a=a+b;
      b=a-b;
      a=a-b;
     }

}*/
void Swap (int* x, int* y) {

if (x != y) { //ensure that memory locations are different

*x ^= *y;

*y ^= *x;

*x ^= *y;

}

}
// we can also implement insertion sort without using Swap function .that is we
//can just right shift  array elements as long as they are bigger the key!!!

 insertion_sort(int a[],int n)
 {
     for(int i=1;i<n;i++)
     {
         int key=a[i];
         int j=i-1;
         while(a[j]>key && j>-1)
         {
            Swap(&a[j+1],&a[j]);
            j--;
         }


     }
     return 0;


 }

int main()
{

    cout<<"SIZE OF INPUT:"<<endl;
    int n;cin>>n;
    int a[n];
    cout<<"ENTER THE ELEMENTS:"<<endl;
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }

    insertion_sort(a,n);
     for(int i=0;i<n;i++)
     {

         cout<<a[i]<<" ";
     }
     cout<<endl;


}

