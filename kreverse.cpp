#include<iostream>
using namespace std;
struct node{
node* next;
int data;
};

node* insertAtFront(node* head,int data)
{
    node* temp=new node;
    temp->data=data;
    temp->next=NULL;
    if(!head)
    {
        head=temp;
        return head;
    }
    else{
            temp->next=head;
            return temp;
        }
}

void printll(node* head)
{
    node*temp=head;
    while(temp)
    {
        cout<<temp->data<<"---->";
        temp=temp->next;
    }
    cout<<"NULL";
}
node* Reverse(node* temp,int k)
{
    int x=0;
    node*prev=NULL;
    node*start=temp;
    node*current=temp;
    node*head=NULL;
    while(x<k)
    {
        start=current->next;
        current->next=prev;
        prev=current;
        current=start;
        x++;
    }
    head=prev;
    node*a;
    a=head;
    while(a->next)
    {

        a=a->next;
    }
    a->next=current;
    return head;
}

node* reverseLL(node*head,int k)
{
    node* temp=head;
    int y=0;
    while(temp!=NULL)
    {

    }
    return head;
}

int main(){
    node*head=NULL;
    int x;
    cin>>x;
    while(x!=-1)
    {
        head=insertAtFront(head,x);
        cin>>x;
    }
    printll(head);
    int k;
    cout<<"enter k\n";
    cin>>k;
    head=reverseLL(head,k);
    cout<<"\n";
    printll(head);
    return 0;



}
