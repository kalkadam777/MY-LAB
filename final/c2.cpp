#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct student
{
    string surname,name;
    int math,phi,inf;
};
bool cmp(student a,student b){
    return a.inf+a.math+a.phi>b.inf+b.math+b.phi;
}


int main(){
   int n;
   cin >> n;
   vector<student>vec(n);
   for (int i = 0; i < n; i++)
   {
    cin >> vec[i].surname >> vec[i].name >> vec[i].math >> vec[i].phi >> vec[i].inf;
   }
   stable_sort(vec.begin(),vec.end(),cmp);
   for (int i = 0; i < n; i++)
   {
    cout << vec[i].surname << ' ' << vec[i].name << endl;
   }
    return 0;
}
