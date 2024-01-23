#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int info;
    node *link;
};
node * creation(node*head,node *temp,int data)
{
    node *ptr;
    ptr=new node();
    ptr->info=data;
    //*head=NUll;
    if(head==NULL)
    {
        head=ptr;
        temp=ptr;
        return head;
    }
    else
    {
temp->link=ptr;
        temp=ptr;

    }
    return temp;
}
//void print(node*head,node*temp){
//while(temp->link!= NULL){
//  cout<<temp->info=ptr;
//}
int main()
{
    node *head=new node;
    head=NULL;
    node *temp=new node;
   // temp=NULL;
    int n,data,a,b;
    cin>>n;
    for(a=0; a<n; a++)
    {
        cin>>data;
        if(a==0)
            {head=creation(head,temp,data);
            temp =head;}
        else temp=creation(head,temp,data);
    }
    node *ptr=new node;
    ptr=head;
    while(ptr != NULL)
    {
        cout<< ptr->info;
        ptr=ptr->link;
    }
    return 0;
}
