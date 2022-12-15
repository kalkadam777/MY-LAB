#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    int n,m;
    cin >> n;
    deque<int> dq;
    deque<int> dqeven;
    deque<int> dqodd;
    deque<int>::iterator it;
    deque<int>::reverse_iterator rit;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        dq.push_back(in);
    }
    for(it = dq.begin(); it != dq.end(); it++)
    {
        if(*it%2==0){
            dqeven.push_front(*it);
        }
        else{
            dqodd.push_back(*it);
        }
    }
    sort(dqeven.begin(),dqeven.end());
    sort(dqodd.begin(),dqodd.end());
    for(rit = dqeven.rbegin(); rit != dqeven.rend(); rit++)
    {
        cout << *rit << ' ';
    }
    for(it = dqodd.begin(); it != dqodd.end(); it++)
    {
        cout << *it << ' ';
    }
    
    
    





    return 0;
}