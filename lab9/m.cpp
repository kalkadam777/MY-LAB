#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue<string>queue;
    vector<string>vt;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        string st;
        if(x==1){
            cin >> st;
            queue.push(st);
        }
        if(x==2){
            queue.pop();
        }
        if(queue.empty()){
            vt.push_back("queue is empty");
        }else{
            vt.push_back(queue.front());
        }
    }
    for(int i=0; i<vt.size(); i++){
        cout << vt[i] << endl;
    }
    return 0;
}