
#include<iostream>
#include<vector>
using namespace std;
void func(int arr[][7],int n,int i,vector<int> & vec)
{
    if(i==n)
    {
        for(int k=0;k<vec.size();k++)
        {
            cout<<vec[k]<<" ";
        }
        cout<<"\n";
        return;
    }

    for(int j=0;j<=6;j++)
    {
        //if(!(x==-100000))cout<<x<<" ";
        vec.push_back(arr[i][j]);
        func(arr,n,i+1,vec);
        vec.pop_back();
    }
}
int main()
{
    cout<<"enter the number of variables:";
    int n;
    cin>>n;
    int arr[n][7];
    for(int i=0;i<n;i++)
    {
        int a,b;
        cout<<"enter the range of "<<i+1<<" variable:";
        cin>>a>>b;
        int avg=(a+b)/2;
        arr[i][0]=a-1;
        arr[i][1]=a;
        arr[i][2]=a+1;
        arr[i][3]=avg;
        arr[i][4]=b-1;
        arr[i][5]=b;
        arr[i][6]=b+1;
    }
    //cout<<"number of test cases:"<<(4*n)+1<<"\n";
    vector<int> vec;
    func(arr,n,0,vec);

}
