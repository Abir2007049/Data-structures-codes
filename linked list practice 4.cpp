#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int info;
    node *link;
};
node *head=NULL;
node *temp=NULL;

void creation(int item)
{
    node *ptr=new node();
     ptr->info=item;
    ptr->link=NULL;

    if(head==NULL)
    {
        head=ptr;
        temp=ptr;
        //temp->link=ptr;
    }
    else
    {

        temp->link=ptr;
        temp=ptr;
    }


}

void print()
{
    node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }

}
void finsertion(int item)
{
    node *ptr=new node();
    ptr->info=item;
    ptr->link=head;
    head=ptr;

}
void linsertion(int item)
{
    node* ptr=new node();
    ptr->info=item;
    ptr->link=NULL;
    temp=head;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=ptr;
    temp=ptr;
   // temp->link=NULL;
}
void reversal()
{
    node *ptr=NULL;
    node *ptr2=new node();
    while(head!=NULL)
    {
        ptr2=head->link;
        head->link=ptr;
        ptr=head;
        head=ptr2;

    }
   head=ptr;
}
insert_before(int item)
{
    node *srt=head;
     node* temp;
         int search_item;
    cout<<"Enter the value of search item"<<endl;
    cin>>search_item;
    while(srt!=NULL)
    {
        if(search_item==srt->info)
        {
            if(srt==head)
            {
                finsertion(item);
                break;

            }
            else
            {
                node* ptr=new node();
                ptr->info=item;
                ptr->link=temp->link;
                temp->link=ptr;
                break;


            }

        }
        else
        {
            temp=srt;
            srt=srt->link;
        }
        if(srt==NULL)
        {
            cout<<"Doesn't match search item\n";
        }
    }

}
insert_after(int item)
{
    node* srt=head;
    node* temp;
    int s_item;
    cout<<"Enter the search item\n";
    cin>>s_item;
    while(srt!=NULL)
    {

        if(srt->info==s_item)
        {

            node *ptr=head;
            if(srt->link==NULL)
            {
                linsertion(item);
            }
            else
            {
                node *ptr=new node();
                ptr->info=item;
                ptr->link=srt->link;
                srt->link=ptr;
                break;
            }
        }
        else
        {
            srt=srt->link;
        }

    }



}
void first_delete()
{
   head=head->link;

}
void last_delete()
{

    node* srt=head;
    node* temp=NULL;
        while(srt->link!=NULL)
        {
            temp=srt;
            srt=srt->link;
        }
        temp->link=NULL;
}
void given_element_delete()
{
    int g;
    cout<<"Enter the given element\n";
    cin>>g;
    node* srt=head;
    node* temp= NULL;
    while(srt!=NULL)
    {
        if(g==srt->info){
        if(srt==head)
        {
            first_delete();
        }
        else if(srt->link==NULL)
        {
            last_delete();
        }
        else
        {
            temp->link=srt->link;
            break;

        }
        }
        else
        {
            temp=srt;
         srt=srt->link;
        }

    }
}
void delete_before_search_item()
{
    int si;
    cout<<"Enter the searched item\n";
    cin>>si;
    node* prev=NULL;
    node*temp=NULL;
    node* srt=head;
    while(srt!=NULL)
    {

        if(srt->info==si)
        {

        if(temp==head)
        {
            first_delete();

        }
        else
        {
            prev->link=temp->link;
            break;

        }
        }
    else
    {
        prev=temp;
        temp=srt;
        srt=srt->link;

    }

    }
}
void delete_after_search_item()
{
    int si;
    cout<<"Enter the item to be searched\n";
    cin>>si;
    node* srt=head;
    node* temp=NULL;
    while(srt!=NULL)
    {

        if(srt->info==si)
        {
            if(srt->link==NULL)
            {
                last_delete();
                break;
            }
            else
            {
                temp=srt->link;
                srt->link=temp->link;
                break;
            }
        }
        else
        {
           // temp=srt;
            srt=srt->link;
        }
    }

}



int main()
{
    int item;
    int a,b,n;
    cin>>n;
    for(a=0; a<n; a++)
    {
        cin>>item;
        creation(item);
    }


    print();
    cin>>item;
    finsertion(item);//first insertion
    print();
    cin>>item;
    linsertion(item);//last insertion
    print();
    cout<<endl;
    reversal();//reversal
    print();
    cout<<endl;
    cin>>item;//search item
    insert_before(item);//insert before
    print();
    cin>>item;//search item
    insert_after(item);//insert after
    print();
    cout<<endl;
    first_delete();//first delete
    print();
    cout<<endl;
    last_delete();//last delete
    print();
    cout<<endl;
    given_element_delete();//given delete
    print();
    cout<<endl;
    delete_before_search_item();//delete before search item
    print();
    cout<<endl;
    delete_after_search_item();//delete after search item
    print();
    cout<<endl;

}


