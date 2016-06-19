#include<iostream>
using namespace std;
struct node{
int data;
node*next;
};
void print(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";

}
node* reverse(node*head){
    node*prev=NULL;
    node*cur=head;
    node*temp;
    while(cur!=NULL)
    {
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    head=prev;
    return head;
};
node* create(node*head,int no)
{
    node*temp=new node();
    int n;
    cin>>n;
    temp->data=n;
    temp->next=NULL;
     if(head==NULL)
    {
        head=temp;
    }
    no--;
    while(no--)
    {
    cin>>n;
    node*temp=new node();
    temp->data=n;
    temp->next=NULL;

    if(head!=NULL)
    {

        node*temp2=head;
        while(temp2->next!=NULL)
              temp2=temp2->next;
        temp2->next=temp;
    }}

    return head;
};
node*merge(node*ahead,node*rhead)
{
    node*head;
    head->next=NULL;
    if(ahead->data<rhead->data)
        {head=ahead;
        ahead=ahead->next;}
    else
        {head=rhead;
        rhead=rhead->next;}
    node*temp=head;
    while(ahead!=NULL&&rhead!=NULL)
    {

        if(ahead->data<rhead->data)
            {

                temp->next=ahead;
                ahead=ahead->next;
            }
        else
        {
            temp->next=rhead;
            rhead=rhead->next;
        }
        temp=temp->next;
    }
    while(ahead!=NULL)
    {
        temp->next=ahead;
        ahead=ahead->next;
        temp=temp->next;

    }
    while(rhead!=NULL)
    {
        temp->next=rhead;
        rhead=rhead->next;
        temp=temp->next;

    }
    temp->next=NULL;

    return head;

};
node*split(node*head,node**ahead,node**rhead)
{

     *ahead=new node();
     *rhead=new node();
     (*ahead)->data=0;
     (*ahead)->next=NULL;
     (*rhead)->data=0;
     (*rhead)->next=NULL;
    node*asc=*ahead;

    node*desc=*rhead;
    node*temp=head;
    while(temp!=NULL)
    {
        asc->next=temp;
        asc=asc->next;
        temp=temp->next;
        if(temp)
        {
            desc->next=temp;
            desc=desc->next;
            temp=temp->next;
        }


    }
    asc->next=NULL;
    desc->next=NULL;
    *ahead=(*ahead)->next;
    *rhead=(*rhead)->next;

};
node*sort(node*head)
{
    node*ahead;
    node*rhead;
    split(head,&ahead,&rhead);
    rhead=reverse(rhead);
    //print(ahead);
    //cout<<"\n";
    //print(rhead);
    //cout<<"\n";
    head=merge(ahead,rhead);
    return head;

}


int main()
{
    int n;
    cin>>n;
    node*head=NULL;
    head=create(head,n);
    print(head);
    cout<<"\n";
    head=sort(head);
   cout<<"\nthe final list is:"; print(head);






}
