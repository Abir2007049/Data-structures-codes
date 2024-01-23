#include<bits/stdc++.h>
using namespace std;

 void Swap (int* x, int* y) {

if (x != y) {

*x ^= *y;

*y ^= *x;

*x ^= *y;

}

}
  bubble_sort(int a[],int n)
 {
     for(int i=0;i<n-1;i++)
     {

         for(int j=0;j<n-i-1;j++)
         {
             if(a[j]>a[j+1])
             {

                 Swap(&a[j],&a[j+1]);
             }

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

     bubble_sort(a,n);
     for(int i=0;i<n;i++)
     {

         cout<<a[i]<<" ";
     }
     cout<<endl;


}

