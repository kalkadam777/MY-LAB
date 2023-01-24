#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        vec.push_back(in);
    }
    reverse(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
        
    }
    cout<<endl;
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

}