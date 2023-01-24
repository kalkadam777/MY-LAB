#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    set<int>s1,s2,s3,s4,s5;
    set<int>::iterator it;
    set<int>::iterator it1;
    set<int>::iterator it2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        s2.insert(a);
        if(s1.find(a)!=s1.end()){
            s3.insert(a);
        }
        else{
            s4.insert(a);
        }
    }
    for(it = s3.begin(); it != s3.end(); it++){
        if(s1.find(*it)!=s1.end()){
            s5.insert(*it);
        }
        // cout << *it << ' ';
    }
    //  for(it1 = s4.begin(); it1 != s4.end(); it1++){
    //     cout << *it1 << ' ';
    // }
    for(it2 = s5.begin(); it2 != s5.end(); it2++){
        cout << *it2 << ' ';
    }
    return 0;
}