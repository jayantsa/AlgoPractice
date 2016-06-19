#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
bool compare(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second;
}
int main()
{
    vector<pair<int,int>> activity;
    int n;
    cin>>n;
   for(int i=0;i<n;i++)
    {
        int s,e;
        cin>>s>>e;
        activity.push_back(make_pair(s,e));
    }

    sort(activity.begin(),activity.end(),compare);

    int selected=0;
    for(int i=0;i<n;i++)
    {
        cout<<activity[i].first<<" "<<activity[i].second<<"\n";
    }

cout<<"\n";
    cout<<activity[0].first<<" "<<activity[0].second<<"\n";
    for(int i=1;i<n;i++)
    {
        if(activity[i].first>activity[selected].second)
        {
            cout<<activity[i].first<<" "<<activity[i].second<<"\n";
            selected=i;
            cout<<"\nsel:"<<selected;
        }
        cout<<"\nselected second:"<<activity[selected].second<<"\n";
    }

    return 0;
}
