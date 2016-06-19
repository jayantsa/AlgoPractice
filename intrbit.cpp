#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;



vector<vector<int>>threeSum(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l,r;


    sort(A.begin(),A.end());
   // for(int i=0;i<A.size();i++)
     //   cout<<A[i]<<"\n";
    vector<vector<int>>ans;
    map<vector<int>,int>m;
    //cout<<"hi";
    for(int i=0;i<A.size()-2;i++)
    {
        l=i+1;
        r=A.size()-1;
        while(l<r)
        {
            int sum;
            sum=(A[i]+A[l]+A[r]);
            //cout<<sum<<" ";
            if(sum==0)
            {


                vector<int>ans1;
                ans1.push_back(A[i]);
                ans1.push_back(A[l]);
                ans1.push_back(A[r]);
                map.insert(ans1,1);

                //ans.push_back(ans1);
                //ans1.erase(ans1.begin(),ans1.end());

                //cout<<A[i]<<" "<<A[l]<<" "<<A[r]<<"\n"<<"\n";
                //cout<<0<<"\n";
                break;
            }
            else if(sum<0)
            {
                l++;
            }
            else
            {
                r--;
            }

        }
    }
    cout<<"\n";
    /*for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<3;j++)
                cout<<ans[i][j]<<" ";
            cout<<"\n";

        }
        cout<<"\n\n";*/
    return ans;
}


int main()
{
  vector<int>A={-5, 1, 4, -7, 10, -7, 0, 7, 3, 0, -2, -5, -3, -6, 4, -7, -8, 0, 4, 9, 4, 1, -8, -6, -6, 0, -9, 5, 3, -9, -5, -9, 6, 3, 8, -10, 1, -2, 2, 1, -9, 2, -3, 9, 9, -10, 0, -9, -2, 7, 0, -4, -3, 1, 6, -3};
  //  cout<<A[0];

  threeSum(A);


   return 0;

}
