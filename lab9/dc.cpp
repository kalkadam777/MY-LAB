#include <iostream>
#include <vector>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    vector< vector<int> >vec2;
    vector<int>vec;
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        vec2.push_back(vec);
        for (int j = 0; j < n; j++)
        {
            vec2[i].push_back(rand()%10 +1);
        }
    }
    for (int i = 0; i < vec2.size(); i++)
    {
        for (int j = 0; j < vec2.size(); j++)
        {
            cout << vec2[i][j] << ' ';
        }
        cout << endl;
    }
    
}