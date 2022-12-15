#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<string> myvec(size);
    string mail = "@gmail.com";
    string temp;
    for(int i = 0 ; i != size ; i++)
    {
        cin >> myvec[i];
    }
    for(int i = 0 ; i != myvec.size() ; i++)
    {
        size_t found =  myvec[i].find(mail);
        if(found != string::npos)
        {
            temp = myvec[i];
            temp.erase(temp.find(mail));
            cout << temp << endl;
        }
    }
}
// #include <bits/stdc++.h>
// using namespace std;


// int main()
// {
//     int a;
//     cin>>a;
//     string s;
//     for (int i=0;i<a;i++)
//     {
//         cin>>s;
//         if (s.find("@gmail.com")!=string::npos)
//         cout<<s.substr(0,s.size()-10)<<endl;
//     }
// }