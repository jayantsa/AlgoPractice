#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int c;
        int i;
        bool flag=0;
        int arr[100];
        cin>>c;
        cin>>i;
        for(int j=0;j<i;j++)
        {
            cin>>arr[j];
        }
        for(int k=0;k<i;k++)
        {
            int j;
            for(j=0;j<i&&j!=k;j++)
            {
                if((c-arr[k])==arr[j])
                {flag=1;
                break;
                }
            }
            if(flag==1)
            {
                cout<<"case #"<<n<<": "<<k<<" "<<j;
            }

        }





    }
}
