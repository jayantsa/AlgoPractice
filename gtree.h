#ifndef gtree_h
#define gtree_h
#include "gtreenode.h"
#include<queue>
template<typename t>
class tree{
treenode<t>*root;
static void print(treenode<t>*root)
{
    if(root==NULL)
        return;
    cout<<root->getdata()<<" ";
    treenode<t>**ch=root->getchildren();
    for(int i=0;i<root->getcount();i++)
    {
      print(ch[i]);
    }
    cout<<"\n";

}
static int getsum(treenode<t>*root)
{
    if(root==NULL)
        return 0;
    int sum=0;
    sum=root->getdata();
    treenode<t>**ch=root->getchildren();
    for(int i=0;i<root->getcount();i++)
    {
        sum=sum+getsum(ch[i]);
    }
    return sum;
}
static treenode<t>*maxi(treenode<t>*root,treenode<t>*max)
{
    if(root->getcount()==0&&root->getdata()>=max->getdata())
        return root;
    if(root->getcount()==0&&root->getdata()<max->getdata())
        return max;
    max=(root->getdata()>=max->getdata()?root:max);
    treenode<t>**ch=root->getchildren();
    for(int i=0;i<root->getcount();i++)
    {
        max=maxi(ch[i],max);
    }
    return max;
}
static int largenodes(treenode<t>*root,t data)
{
    if(root==NULL)
        return 0;
    int count=0;
    if(root->getdata()>data)
        count++;
    treenode<t>**ch=root->getchildren();
    for(int i=0;i<root->getcount();i++)
    {
        count=count+largenodes(ch[i],data);
    }
    return count;
}
static treenode<t>* maxsum(treenode<t>*root,treenode<t>*max,int sum1)
{
    if(root==NULL)
        return max;
    int sum=root->getdata();
    treenode<t>**ch=root->getchildren();
    for(int i=0;i<root->getcount();i++)
    {
        sum+=ch[i]->getdata();
    }
    if(sum1<sum)
    {
        max=root;
        sum1=sum;
    }
    for(int i=0;i<root->getcount();i++)
    {
        max=maxsum(ch[i],max,sum1);
    }
    return max;
}
public:
    tree():root(NULL){};
    void createtree()
    {
        if(root!=NULL)
            return;
        cout<<"enter the root data";
        t x;
        cin>>x;
        int c;
        root=new treenode<t>(x);
        queue<treenode<t>*>q;
        q.push(root);
        while(!q.empty())
        {
            treenode<t>*temp=q.front();
            q.pop();
            cout<<"enter the number of childs for"<<temp->getdata()<<"\n";
            cin>>c;
            temp->setcount(c);
            treenode<t>**ch=new treenode<t>*[c];
            temp->setchildren(ch);
            for(int i=0;i<temp->getcount();i++)
            {
                cout<<"enter the data of child:";
                int n;
                cin>>n;
                ch[i]=new treenode<t>(n);
                ch[i]->setparent(temp);
                q.push(ch[i]);
            }
        }
    }
    void printree()
    {
        print(root);
    }
    void prisum()
    {
        cout<<getsum(root);
    }
    void primax()
    {
        treenode<t>*temp=maxi(root,root);
        cout<<temp->getdata();
    }
    void pricount()
    {
        cout<<largenodes(root,root->getdata());
    }
    void pimaxsum(){
    treenode<t>*temp=maxsum(root,root,0);
    cout<<"\n"<<temp->getdata();
    }
};

#endif // gtree_h
