#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void JamanBala(int n,vector<int>vec,int k,int c){
    for (int i = 1; i < n; i++)
    {
        if (vec[i]-vec[i-1]<k)
        {
            c++;
        }
        
    }
    if(c>0){
        cout << "cheater";
    }
    else{
        cout << "no";
    }
    
}


int main(){
   int n,k,c=0;
   cin >> n >> k;
   vector<int>vec;
   for (int i = 0; i < n; i++)
   {
    int in;
    cin >> in;
    vec.push_back(in);
   }
   sort(vec.begin(),vec.end());
   JamanBala(n,vec,k,c);
   
}