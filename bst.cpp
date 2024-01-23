#include <iostream>
using namespace std;
class node
{
public:
    node *l_link;
    node *r_link;
    int data;
};
 node *root = NULL;

 void insertion(int item)
 {
     node *ptr=new node();
     ptr->data=item;
     ptr->l_link=ptr->r_link=NULL;
     node *r;
     node *temp=root;
     if(root==NULL)
     {
         root=ptr;
     }
     else
     {

        // temp=root;
         while(temp!=NULL)
         {
             r=temp;
             if(item<temp->data)
             {
                 temp=temp->l_link;

             }
             else
             {
                 temp=temp->r_link;
             }



         }
         if(item<r->data)
         {
             r->l_link=ptr;
         }
         else
            r->r_link=ptr;

     }


 }
 void inorder(node * temp)
 {

     if(temp!=NULL)     {

         inorder(temp->l_link);

         cout<<temp->data<<" ";
         inorder(temp->r_link);


     }

 }
 node * search_item(int item)
 {
     node*temp=root;
     while(temp!=NULL)
     {
         if(item==temp->data)
         {
             return temp;
         }
         else if(item<temp->data)
         {
             temp=temp->l_link;
         }
         else
         {
             temp=temp->r_link;
         }

     }
     return NULL;

 }
 node * inorder_suc(node * r)
 {
     node *curr=r;
     while(curr && curr->l_link!=NULL)
     {
         curr=curr->l_link;
     }
     return curr;


 }
 node* Delete(node* r,int key)
 {
     if(key<r->data)
     {
         r->l_link=Delete(r->l_link,key);
     }
     else if(key>r->data)
     {
         r->r_link=Delete(r->r_link,key);
     }
     else
     {
         if(r->l_link==NULL)
         {
             node *temp=r->r_link;
             free(r);
             return temp;
         }
         else if(r->r_link==NULL)
         {
              node *temp=r->l_link;
             free(r);
             return temp;

         }
         node* temp=inorder_suc(r->r_link);
         r->data=temp->data;
         r->r_link=Delete(r->r_link,temp->data);
     }
     return r;

 }


int main()
{   int n, item;
    cout<<"Enter the number of elements :\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        insertion(item);
    }

    node* temp=root;

    inorder(temp);
    cout<<endl;
    cout<<"Enter search item:\n";
    cin>>item;
    temp=NULL;
    temp=search_item(item);
    if(temp==NULL)
        cout<<"Not found\n";
    else
        cout<<"found\n";
        cout<<"Enter the item to be deleted\n";
        cin>>item;
        temp=root;
        Delete(temp,item);
        temp=root;
        inorder(temp);
    return 0;
}



