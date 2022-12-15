#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main(){

    int n,m;
    cin >> n;
    deque<int> myDeque;
    deque<int> evenDeque;
    deque<int> oddDeque;
    deque<int>::iterator it;
    deque<int>::reverse_iterator rIt;
    for(int i=0; i<n; i++){
        cin >> m;
        myDeque.push_back(m);
    }

    for(it = myDeque.begin(); it != myDeque.end(); it++){
        if (*it%2 == 0)
            evenDeque.push_back(*it);
        else
            oddDeque.push_back(*it);
    }

    sort(evenDeque.begin(), evenDeque.end());
    sort(oddDeque.begin(), oddDeque.end());

    for(rIt = evenDeque.rbegin(); rIt != evenDeque.rend(); rIt++)
        cout << *rIt << ' ';
    
    for(it = oddDeque.begin(); it != oddDeque.end(); it++)
        cout << *it << ' ';

    return 0;
}