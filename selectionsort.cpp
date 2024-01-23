#include<bits/stdc++.h>
using namespace std;

 void Swap (int* x, int* y) {

if (x != y) {

*x ^= *y;

*y ^= *x;

*x ^= *y;

}

}

 selection_sort(int a[],int n)
 {
     for(int i=0;i<n-1;i++)
     {

         for(int j=i+1;j<n;j++)
         {
             if(a[j]<a[i])
             {

                 Swap(&a[i],&a[j]);
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

     selection_sort(a,n);
     for(int i=0;i<n;i++)
     {

         cout<<a[i]<<" ";
     }
     cout<<endl;


}
