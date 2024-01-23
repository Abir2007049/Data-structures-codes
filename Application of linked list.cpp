#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int info;
    node *link;
};
node *head= NULL;
node *temp=NULL;
node *head1=NULL;
node *temp1=NULL;
void creation(int item)
{
    node *ptr= new node();
    ptr->info=item;
    ptr->link=NULL;
    if(head==NULL)
    {
        head=ptr;
        temp=ptr;
    }
    else
    {
        temp->link=ptr;
        temp=ptr;
    }
}
void creation1(int item)
{
    node *ptr= new node();
    ptr->info=item;
    ptr->link=NULL;
    if(head1==NULL)
    {
        head1=ptr;
        temp1=ptr;
    }
    else
    {
        temp1->link=ptr;
        temp1=ptr;
    }
}
void traversal()
{
    node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }
    cout<<endl;
}
void Traversal(node *ptr)
{

    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }
    cout<<endl;
}
void traversal1()
{
    node *ptr=head1;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }
    cout<<endl;
}
void firstinsert()
{
    cout<<"Enter the first node insertion item"<<endl;
    int item;
    cin>>item;
    node *ptr=new node();
    ptr->link=head;
    ptr->info=item;
    head=ptr;

}
void lastinsert()
{
    int item;
    cout<<"Enter the last node insertion item"<<endl;
    cin>>item;
    node *ptr= new node();
    node *temp=head;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=ptr;
    ptr->link=NULL;
    ptr->info=item;

}
void insert_before()
{
    node *srt= head;
    node *temp= NULL;
    int search_item;
    cout<<"Enter the value of search item"<<endl;
    cin>>search_item;
    while(srt!=NULL)
    {
        if(srt->info==search_item)
        {
            if(srt==head)
            {
                firstinsert();
                break;
            }
            else
            {
                int item;
                cout<<"Enter the value of before search item insertion"<<endl;
                cin>>item;
                node *ptr=new node();
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
    }
    if(srt==NULL) cout<<"Don't match search item"<<endl;
}
void after_insertion()
{
    node *srt=head;
    node *temp=NULL;
    int search_item;
    cout<<"Enter the value of search item"<<endl;
    cin>>search_item;
    while(srt!=NULL)
    {
        if(srt->info==search_item)
        {
            node *temp2=head;
            while(temp2->link!=NULL)
            {
                temp2=temp2->link;
            }
            if(temp2->link==srt)
            {
                lastinsert();
            }
            else
            {
                node *ptr=new node;
                int item;
                cout<<"Enter the value of after insertion item"<<endl;
                cin>>item;
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
        if(srt==NULL) cout<<"Don't match search item"<<endl;
    }
}
void first_delete()
{
    head=head->link;
}
void last_delete()
{
    node * srt= head;
    node *temp = NULL;
    while(srt->link!=NULL)
    {
        temp=srt;
        srt=srt->link;
    }
    temp->link=NULL;
}
void given_element_delete()
{
    int given;
    cout<<"Enter the given element"<<endl;
    cin>>given;
    node *srt=head;
    node *temp=NULL;
    while(srt!=NULL)
    {
        if(srt->info==given)
        {
            if(srt==head)
            {
                first_delete();
                break;
            }
            else if(srt->link==NULL)
            {
                last_delete();
                break;
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
void delete_after_search_item()
{
    int search_item;
    cout<<"Enter the search item"<<endl;
    cin>>search_item;
    node *srt=head;
    node * temp= NULL;
    while(srt!=NULL)
    {
        if(srt->info==search_item)
        {
            temp=srt->link;
            srt->link=temp->link;
            break;
        }
        else
        {

            srt=srt->link;
        }
    }
}
void delete_before_search_item()
{
    int search_item;
    cout<<"Enter the search item"<<endl;
    cin>>search_item;
    node *srt=head;
    node * temp= NULL;
    node *prev=NULL;
    while(srt!=NULL)
    {
        if(srt->info==search_item)
        {
            if(temp==head)
            {
                first_delete();
                break;
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
int node_count()
{
    node*temp=head;
    int c=0;
    while(temp!=NULL)
    {
        c++;
        temp=temp->link;
    }
    return c;
}
int sum_of_node()
{
    int sum=0;
    node *temp=head;
    while(temp!=NULL)
    {
        sum+=temp->info;
        temp=temp->link;
    }
    return sum;
}
void max_node()
{
    node *temp=head;
    int max_n=0;
    while(temp!=NULL)
    {
        if(temp->info>max_n)
        {
            max_n=temp->info;
        }
        temp=temp->link;
    }
    cout<<max_n<<endl;
}
void search_node()
{
    int item;
    cout<<"Enter the search item"<<endl;
    cin>>item;
    while(temp!=NULL)
    {
        if(temp->info==item)
        {
            cout<<"Item found"<<endl;
            break;
        }
        else
        {
            cout<<"Not Found"<<endl;
            break;
        }
        temp=temp->link;
    }
}
void search_and_insert_first()
{
    int search_item;
    cout<<"Enter the value of search item which will insert in first"<<endl;
    cin>>search_item;
    node *temp=NULL;
    node *srt=head;
    while(srt!=NULL)
    {
        if(srt->info==search_item)
        {
            temp->link=srt->link;
            srt->link=head;
            head=srt;
            break;
        }
        else
        {
            temp=srt;
            srt=srt->link;
        }
    }
}
void Insert()
{
    cout<<"Enter the value of position of insertion"<<endl;
    int pos;
    cin>>pos;
    cout<<"Enter the value of item to be inserted"<<endl;
    int item;
    cin>>item;
    if(pos==0)
    {
        node *ptr=new node();
        ptr->info=item;
        ptr->link=head;
        head=ptr;
    }
    else if(pos>0)
    {
        node *temp=head;
        for(int i=0; i<pos-1; i++)
        {
            temp=temp->link;
        }
        node *ptr= new node();
        ptr->info=item;
        ptr->link=temp->link;
        temp->link=ptr;
    }
}
void insert_last_creation()
{
    cout<<"Enter the element of linked list"<<endl;
    int element;
    cin>>element;
    node* last=NULL;
    for(int i=0; i<element ; i++)
    {
        cout<<"Enter the value of item"<<endl;
        int item;
        cin>>item;
        node *ptr=new node();
        ptr->info=item;
        if(head==NULL)
        {
            head=last=ptr;
        }
        else
        {
            last->link=ptr;
            last=ptr;
        }
    }
}
void insert_in_sorted_linked_list()
{
    cout<<"Enter the element which will be added in sorted linked list"<<endl;
    int item;
    cin>>item;
    node *temp=head;
    node *prev=NULL;
    node *ptr=new node();
    ptr->info=item;
    ptr->link=NULL;
    if(head==NULL)
    {
        head=ptr;
    }
    else
    {
        while(temp!=NULL && temp->info<item)
        {
            prev=temp;
            temp=temp->link;
        }
        if(temp==head)
        {
            ptr->link=head;
            head=ptr;
        }
        else
        {
            ptr->link=prev->link;
            prev->link=ptr;
        }
        if(temp==NULL)
        {
            prev->link=ptr;
        }
    }
}
void sorted(int n)
{
    node *temp=head;
    int c=1;
    node *ptr= temp->link;
    while(ptr!=NULL)
    {
        if(temp->info<ptr->info)
        {
            c++;
        }
        temp=temp->link;
        ptr=ptr->link;
    }
    if(c==n)
    {
        cout<<"Sorted Linked list"<<endl;
    }
    else
    {
        cout<<"Not sorted linked list"<<endl;
    }
}
void delete_dublicate()
{
    node* current=head;
    node* next=current->link;
    while(next!=NULL)
    {
        if(current->info!=next->info)
        {
            current=next;
            next=next->link;
        }
        else
        {
            current->link=next->link;
            next=current->link;
        }
    }
}
void reverse_through_element(int n)
{
    node *temp=head;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i]=temp->info;
        temp=temp->link;
    }
    node *temp1=head;
    for(int i=n-1; i>=0; i--)
    {
        temp1->info=arr[i];
        temp1=temp1->link;
    }
}
void reverse_through_link()
{
    node *temp=head;
    node *srt=NULL;
    node *prev=NULL;
    while(temp!=NULL)
    {
        prev=srt;
        srt=temp;
        temp=temp->link;
        srt->link=prev;
    }
    head=srt;
}
void concate()
{
    node *temp1=head;
    node *temp2=head1;
    while(temp1->link!=NULL)
    {
        temp1=temp1->link;
    }
    temp1->link=temp2;
}
node* merge_linkedlist()
{
    node *first=head;
    node *second=head1;
    node *third=NULL;
    node *last=NULL;
    if(first->info<second->info)
    {
        third=last=first;
        first=first->link;
        last->link=NULL;
    }
    else
    {
        third=last=second;
        second=second->link;
        last->link=NULL;
    }
    while(first && second)
    {
        if(first->info<second->info)
        {
            last->link=first;
            last=first;
            first=first->link;
            last->link=NULL;
        }
        else
        {
            last->link=second;
            last=second;
            second=second->link;
            last->link=NULL;
        }
    }
    if(first)
    {
        last->link=first;
        first->link=NULL;
    }
    if(second)
    {
        last->link=second;
        second->link=NULL;
    }
    return third;
}
void isloop(node *h)
{
    node *rabbit=h;
    node *tortoise=h;

    do
    {
        rabbit=rabbit->link;
        tortoise=tortoise->link;
        tortoise=tortoise?tortoise->link:tortoise;
    }
    while(rabbit && tortoise && rabbit!=tortoise);
    if(rabbit==tortoise)
        cout<<"Loop"<<endl;
    else
        cout<<"No loop"<<endl;
}
int main()
{
    cout<<"First Linked list" <<endl;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int item;
        cin>>item;
        creation(item);
    }
//    firstinsert();
//    traversal();
//    lastinsert();
//    traversal();
//    insert_before();
//    traversal();
//    after_insertion();
//    traversal();
//    first_delete();
//    traversal();
//    last_delete();
//    traversal();
//    given_element_delete();
//    traversal();
//    delete_after_search_item();
//    traversal();
//    delete_before_search_item();
//    traversal();
//    int sum= sum_of_node();
//    cout<<sum<<endl;
//    int node_num= node_count();
//    cout<<node_num<<endl;
//    max_node();
//    search_node();
//    search_and_insert_first();
//    traversal();
//    Insert();
//    traversal();
//    insert_last_creation();
//    traversal();
//    insert_in_sorted_linked_list();
//    traversal();
//    sorted(n);
//    delete_dublicate();
//    traversal();
//    reverse_through_element(n);
//    traversal();
//    reverse_through_link();
//    traversal();
//    cout<<"Second Linked List" <<endl;
//    int n1;
//    cin>>n1;
//    for(int i=0; i<n1; i++)
//    {
//        int item;
//        cin>>item;
//        creation1(item);
//    }
//    traversal();
//    traversal1();
//    concate();
//    traversal();
//    node *tra=NULL;
//    tra=merge_linkedlist();
//    Traversal(tra);
//    node *t1,*t2;
//    t1=head->link->link;
//    t2=head->link->link->link->link;
//    t2->link=t1;
//    isloop(head);


}



