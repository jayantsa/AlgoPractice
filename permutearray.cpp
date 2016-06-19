#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int mycompare(string x,string y)
{
    string a=x;
    string b=y;
    string xy=a.append(y);
    string yx=b.append(x);
    cout<<xy;
    cout<<"\n"<<yx<<"\n";
    return xy.compare(yx)>0?1:0;
}
void permute(vector<string> arr)
{
    sort(arr.begin(),arr.end(),mycompare);
    for(int i=0;i<arr.size();i++)
        cout<<arr[i];
}
int main()
{
    vector<string>arr;
    int n;
    cin>>n;
    string x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    permute(arr);
    return 0;

}
