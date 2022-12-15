#include <iostream>
#include <set>
#include <algorithm>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
	set<char>myset;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		tolower(str[i]);
	}
	for (int i = 0; i < str.length(); i++)
	{
		myset.insert(str[i]);
	}
	cout << myset.size();
	cout << endl;
	for(auto a : myset){
        cout << a << ' ';
    }
	return 0;
}