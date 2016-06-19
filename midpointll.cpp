#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next;
};
bool i=0,j=0;;
node*create()
{
  node *head=NULL,*temp=NULL,*prev=NULL;
  int n;
  cin>>n;
  while(n!=-1)
  {
      temp=new node();
      temp->data=n;
      temp->next=NULL;
      if(head==NULL)
      {
          head=temp;
          prev=head;
      }
      else
         {
             prev->next=temp;
             prev=temp;
         }
      cin>>n;
   }
   return head;

}
void print(node*head)
{
    if(head==NULL)
        cout<<"ll is empty";
    else
    {
        while(head!=NULL)
        {
            cout<<head->data<<"------>";
            head=head->next;
        }
        cout<<"NULL\n";
    }


}
node*midpoint(node*head)
{
    node*mid,*last;
    mid=head;
    last=head;
    while(last!=NULL&&last->next!=NULL)
    {
        last=last->next->next;
        mid=mid->next;
    }
    return mid;
}
node* mergelinkedlist(node*head1,node*head2)
{
    node*prev,*temp,*head;
    prev=NULL;
    head=head1;
    while(head1!=NULL&&head2!=NULL)
    {
         if(head2->data<head1->data)
         {
             if(prev==NULL)
             {
                 temp=head2->next;
                 head2->next=head1;
                 head1=head2;
                 head=head2;
                 head2=temp;
             }
             else{
             prev->next=head2;
             temp=head2->next;
             head2->next=head1;
             prev=head2;
             head2=temp;}
         }
         else
            {   prev=head1;
                head1=head1->next;
            }

    }
    if(head1==NULL)
    {
        prev->next=head2;
    }
    return head;
}
void append(node*head)
{
    node*prev,*last,*temp;
    last=head;
    prev=head;
    while(last->next!=NULL)
        last=last->next;
    temp=last;
    while(head!=last->next&&last->next!=NULL)
    {
        if(head->data%2==0)
          {
              prev->next=head->next;
              temp->next=head;
              head->next=NULL;
              temp=head;
              head=prev->next;
          }
          else
             {
                 prev=head;
                 head=head->next;
             }

    }

}
int main()
{
    node*head1=create();
    print(head1);
    append(head1);
   /* node*head2=create();
    cout<<"\nfirst ll:\n";
    print(head1);
    cout<<"\nsecond ll:\n";
    print(head2);
    head1=mergelinkedlist(head1,head2);
    cout<<"\nll:\n";*/
    print(head1);
    //node*mid=midpoint(head);
    //node*mid=midpoint(head);
      //  cout<<"mid points is"<<mid->data;
    return 0;
}
