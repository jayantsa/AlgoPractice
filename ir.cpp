#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int j=0;
    int k=0;
    int i=0;
    int y=A.size();

    while(i<y&&j<B.size())
    {
        cout<<"hi";
        if(A[k]<B[j])
        {
            k++;
            i++;
        }
        else if(A[k]>B[j])
        {
            A.insert((A.begin()+k-1),B[j]);
            k++;
            j++;
        }
        else if(A[k]==B[j])
        {
            k++;
            j++;
            i++;
        }

    }
    while(j<B.size())
    {
        A.push_back(B[j]);
        j++;
    }

    for(int i=0;i<A.size();i++)
    {

        cout<<A[i]<<" ";
    }
    cout<<"\n";
}
int main()
{

    vector<int>A={1,2};
    vector<int>B={-1,2};
    merge(A,B);
    return 0;

}
