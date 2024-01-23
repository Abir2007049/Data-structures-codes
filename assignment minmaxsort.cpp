#include<bits/stdc++.h>
using namespace std;
void min_max_sort(int a[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int min1=i;
        int max1=i;
        int h=n-i-1;
        int mmx=a[i];
        for(int k=i;k<=h;k++)
        {
            if(a[k]<a[min1])
            {
                mn=k;
            }
            else if(a[k]>a[max1])
            {

                max1=k;
                mmx=a[k];
            }
        }

        swap(a[i],a[min1]);
        if(i==max1)
        {
            swap(a[h],a[min1]);

        }
        else
        {
            swap(a[h],a[mx]);
        }

    }
}
int main()
{
int n;cin>>n;int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
min_max_sort(a,n);
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
}
