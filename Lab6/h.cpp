#include <iostream>

using namespace std;
void even(int c,string n){
    char ch[] = {'0','2','4','6','8'};
    for (int i = 0; i < n.length(); i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(n[i]==ch[j]){
                c++;
            }
        }
       
    }
    if(c==n.length()){
        cout << "Valid";
    }
    else{
        cout << "Not valid";
    }
}

int main (){
    int c=0;
    string n;
    cin >> n;
    even(c,n);
    return 0;
}