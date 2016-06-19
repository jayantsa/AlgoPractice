#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

pair<int,int> findMaxConsecutive(vector<int> &V)
{
    unordered_set<int> s;
    for(int i=0;i<V.size();i++)
    {
        s.insert(V[i]);
    }
    pair<int,int> ans(-1,-1);
    for(int i=0;i<V.size();i++)
    {
      if(s.find(V[i])== s.end())
      {
          continue;
      }
      int min=V[i]-1;
      while(s.find(min)!=s.end())
      {
          s.erase(s.find(min));
          min--;
      }
      min++;
      int max=V[i]+1;
      while(s.find(max)!=s.end())
      {
          s.erase(s.find(max));
          max++;
      }
      max--;
      if(max-min+1>ans.first)
      {
          ans.first=max-min+1;
          ans.second=min;
      }

    }
    return ans;

}
int main()
{
    int n,data;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        v.push_back(data);

    }
    pair<int,int> a=findMaxConsecutive(v);
    for(int i=a.second;i<a.first+a.second;i++)
        cout<<i<<" ";
    cout<<"\n";
    return 0;

}


