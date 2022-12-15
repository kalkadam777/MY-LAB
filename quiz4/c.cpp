#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>

using namespace std;
string numName(string color){
    if (color == "red")
    {
        color = '1' + color;
    }
    else if (color == "orange")
    {
        color = '2' + color;
    }
    else if (color == "yellow")
    {
        color = '3' + color;
    }
    else if (color == "green")
    {
        color = '4' + color;
    }
    else if (color == "blue")
    {
        color = '5' + color;
    }
    else if (color == "indigo")
    {
        color = '6' + color;
    }
    else if (color == "purple")
    {
        color = '7' + color;
    }
    return color;
    
}

int main(){
    int n;
    cin >> n;
    multimap<string,int>mp1;
    multimap<string,int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        mp1.insert(pair<string,int>(numName(s),x));
    }
    cout << endl;
    multimap<int,string>mp2;
    multimap<int,string>::iterator it1;
   
    for(it = mp1.begin(); it != mp1.end(); it++){
        mp2.insert(pair<int,string>(it->second,it->first));
    }
    mp1.clear();
    for(it1 = mp2.begin(); it1 != mp2.end(); it1++){
        mp1.insert(pair<string,int>(it1->second,it1->first));
    }
    for(it = mp1.begin(); it != mp1.end(); it++){
        cout << it->first.substr(1,it->first.length()-1) << ' ' << it->second << endl;
    }
    return 0;
}
/*
5 
yellow 98
purple 75
yellow 1
red 5 
green 7
*/