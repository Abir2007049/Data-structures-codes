#include<bits/stdc++.h>
using namespace std;
int searchh(int s[],int b,int n)
{
    int index;
    int beg=0;
    int mid;
    int fin=n;
    while(beg<=fin)
    {
        mid=(beg+fin)/2;
        if(b==s[mid])
        {
            index=mid;
            break;
        }
        else if(b>s[mid])
        {
            beg=mid+1;
        }
        else if(b<s[mid])
        {
            fin=mid-1;
        }

    }
    return index;
}
int main()
{
    int a,b,c,n;
    cin>>n;
    int s[n];
    for(a=0; a<n; a++)
    {
        cin>>s[a];

    }
    sort(s,s+n);
    cin>>b;
    cout<<searchh(s,b,n)<<endl;
    return 0;

}
