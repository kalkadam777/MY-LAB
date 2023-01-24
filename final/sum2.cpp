// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int>vec(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> vec[i];
//     }
//     int m;
//     cin >> m;
//     vector<int>vec1(m);
//     bool check = false;
//     for (int j = 0; j < m; j++)
//     {
//         cin >> vec1[j];
//     }
//     for (int i = 0; i < vec.size(); i++)
//     {
//         for (int j = 0; j < vec1.size(); j++)
//         {
//             if(vec[j]==(vec[i]+vec[i+1])){
//                 check = true;
//                 break;
//             }
//         }  
//     }
//     for (int i = 0; i < m; i++)
//     {
//         if (check == true)
//             {
//                 cout << "YES";
//             }
//             else{
//                 cout << "NO";
//             }
//     }
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void findSum(vector<int> v1, int num){
    bool check = false;
    for(int i=0; i<v1.size(); i++){
        for(int j=i+1; j<v1.size(); j++){
            if((v1[i] + v1[j]) == num){
                check = true;
                break;
            }
        }
    }
    if(check == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main(){
    int n,m,x;
    cin >> n;
    vector<int> v1;
    for(int i=0; i<n; i++){
        cin >> x;
        v1.push_back(x);
    }
    cin >> m;
    vector<int> v2;
    for(int i=0; i<m; i++){
        cin >> x;
        v2.push_back(x);
    }
    // cout << v1.size() << ' ' << v2.size();
    for(int i = 0; i < v2.size(); i++){
        findSum(v1, v2[i]);
    }
    return 0;
}