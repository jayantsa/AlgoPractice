#include<list>
#include<iostream>
#include<map>
using namespace std;
struct node{
int data;
node*next;

};
node* createll(node*head)
{
    node*temp;
    int d;
    cin>>d;
    while(d!=-1){
    temp=new node();
    temp->data=d;
    if(head==NULL)
    {
        temp->next=NULL;
        head=temp;
    }
    node*temp2;
    temp2=head;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp;
    temp->next=NULL;
    cin>>d;

}
return head;
}
void print(node*head)
{

    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main()
{
   node*head=createll(NULL);
   cout<<"\n";
   print(head);
   cout<<"\n";
   map<int,int>m;
   node*temp=head;
   m[head->data]++;
   while(temp->next!=NULL)
   {
       if(m[temp->next->data]>0)
       {
           cout<<temp->data<<"\n";
           node*temp2=temp->next->next;
           delete(temp->next);
           temp->next=temp2;
       }
       else
       {
           cout<<m[temp->next->data]<<"\n";
           m[temp->next->data]=1;
           temp=temp->next;
       }
   }
   cout<<"\n";
   print(head);

    return 0;
}
