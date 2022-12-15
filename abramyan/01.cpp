#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string str;
	cin >> str;
	int c=0;
	for (int i = 0; i < str.length(); i++)
	{
		if(str[i]==0){
			c++;
		}
		cout << c;
	}
	
	return 0;
}
