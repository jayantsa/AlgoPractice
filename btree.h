#ifndef btree_h
#define btree_h
#include<iostream>
#include<queue>
#include"btreenode.h"
using namespace std;

struct quepair{
btreenode<int>*node;
int level;
};
template<typename t>
class btree{
   btreenode<t>*root;
   static void print(btreenode<t>*root)
   {
       if(root==NULL)
        return;
       cout<<root->getdata()<<" ";
       print(root->getleft());
       print(root->getright());

   }
  /* static void levelorderprint(btreenode<t>*root)
   {
       int level=0;

       queue<btreenode<t>*>q;
       q.push(root);
       while(!q.empty())
       {

           btreenode<t>*temp=q.front();
           q.pop();
           cout<<temp->getdata()<<" ";
           if(temp->getleft())
            q.push(temp->getleft());
           if(temp->getright())
            q.push(temp->getright());
        }

   }*/
   static void levelorderprint(btreenode<t>*root)
   {
       if(root==NULL)
        return;
        quepair p={root,0};
        queue<quepair>q;
        q.push(p);
        int currentlevel=0;
        while(!q.empty())
        {
            quepair x=q.front();
            q.pop();
            if(x.level!=currentlevel)
            {
                currentlevel=x.level;
                cout<<"\n";
            }
            cout<<x.node->getdata();
            if(x.node->getleft())
            {
                quepair l;
                l.level=x.level+1;
                l.node=x.node->getleft();
                q.push(l);
            }
            if(x.node->getright())
            {
                quepair r;
                r.level=x.level+1;
                r.node=x.node->getright();
                q.push(r);
            }
        }
   }

   static int height(btreenode<t>*root)
   {
       if(root==NULL)
        return 0;
       int lh=height(root->getleft());
       int rh=height(root->getright());
       return (lh>rh?lh+1:rh+1);
   }
   static bool balanced(btreenode<t>*root)
   {
       if(root==NULL)
        return true;
       if(root->getleft()==NULL&&root->getright()==NULL)
        return true;
       if(balanced(root->getleft())&&balanced(root->getright()))
       {
           if(height(root->getleft())-height(root->getright())<=1&&height(root->getleft())-height(root->getright())>=-1)
            return true;
       }
   }
   static btreenode<t>*findelement(btreenode<t>*root,t data)
   {
       if(root==NULL)
          return root;
       if(root->getdata()==data)
          return root;
       btreenode<t>*l=findelement(root->getleft(),data);
       btreenode<t>*r=findelement(root->getright(),data);
       if(!l&&!r)
        return NULL;
       if(l)
        return l;
       else if(r)
        return r;
   }
   static t treesum(btreenode<t>*root)
   {
       if(root==NULL)
        return 0;
        t sum;
        sum=root->getdata();
        sum=sum+treesum(root->getleft())+treesum(root->getright());
        return sum;
    }
    static void mirror(btreenode<t>*root)
    {
        if(root==NULL)
            return;
        btreenode<t>*temp=root->getleft();
        root->setleft(root->getright());
        root->setright(temp);
        mirror(root->getleft());
        mirror(root->getright());
    }
    static int leafcount(btreenode<t>*root)
    {
        if(root==NULL)
            return 0;
        if(root->getleft()==NULL&&root->getright()==NULL)
            return 1;
        int count=leafcount(root->getleft())+leafcount(root->getright());
        return count;
    }
    static bool equal(btreenode<t>*root,btreenode<t>*root1)
    {
        if((root==NULL&&root1!=NULL)&&(root!=NULL&&root1==NULL))
            return false;
        if(root1==NULL&&root==NULL)
            return true;
        if(root->getdata()==root1->getdata())
        {
            return(equal(root->getleft(),root1->getleft())&&equal(root->getright(),root->getleft()));
        }
    }
    static t maxnext(btreenode<t>*root,t data,t max)
    {
        if(root==NULL)
            return max;
        if(root->getdata()>data&&root->getdata()<max)
        {
            max=root->getdata();
        }
        t max1,max2;
        max1=maxnext(root->getleft(),data,max);
        max2=maxnext(root->getright(),data,max);
        if(max1<=max2)
            return max1;
        else
        return max2;

    }
    static binarynode<t>* lca(t a,t b,btreenode<t>*root)
    {
        if(root==NULL)
            return root;
        if(findelement(root->getleft(),a)&&findelement(root->getright(),b))
            return root;
        else if(findelement(root->getleft(),a)&&findelement(root->getleft(),b))
            return lca(a,b,root->getleft());
        else if(findelement(root->getright(),a)&&findelement(root->getright(),b))
            return lca(a,b,root->getright());
        else
            return NULL;
    }
   public:
       btree():root(NULL){};
       void create()
       {
           if(root!=NULL)
             return;
           t d;
           queue<btreenode<t>*>q;
           cout<<"enter the data for root:";
           cin>>d;
           root=new btreenode<t>(d);
           q.push(root);
           while(!q.empty())
           {
               btreenode<t>*temp=q.front();
               q.pop();
               cout<<"enter the left and right data for:"<<temp->getdata()<<"\n";
               cout<<"is there left child:";
               char a;
               cin>>a;
               if(a=='y')
               {
                   cout<<"\nenter the data:";
                   cin>>d;
                   btreenode<t>*l=new btreenode<t>(d);
                   temp->setleft(l);
                   q.push(l);
               }
               cout<<"is there right child:";
               cin>>a;
               if(a=='y')
               {
                   cout<<"\nenter the data:";
                   cin>>d;
                   btreenode<t>*r=new btreenode<t>(d);
                   temp->setright(r);
                   q.push(r);
               }
            }
        }
        void btreeprint()
        {
            print(root);
        }
        void lprint()
        {
            levelorderprint(root);
        }
        void pheight()
        {
            cout<<height(root);
        }
        void findel()
        {
            cout<<"enter the data";
            t data;
            cin>>data;
            btreenode<t>*p=findelement(root,data);
            if(p)
            cout<<p->getdata();
            else
                cout<<"\nnot found";
        }
        void psum()
        {
            cout<<treesum(root);
        }
        void trmirror()
        {
            mirror(root);
        }
        void pleafcount()
        {
            cout<<leafcount(root);
        }
        void plevelorder()
        {
            levelorderprint(root);
        }
        void checkbalance()
        {
            if(balanced(root))
            {
                cout<<"balanced tree";
            }
        }
};
#endif // btree_h
