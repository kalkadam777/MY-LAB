#include <iostream>
#include <iterator>
#include <set>
#include <string>
#include <vector>

using namespace std;
bool isPrime(int num){
	for (int i = 2; i < num; i++)
	{
		if (num%i==0)
		{
			return false;
		}
		
	}
	return true;
}

int main(){
	int n,c=0,k;
	cin >> n;
	vector<int>vec;
	for (int i = 0; i < n; i++)
	{
		int in;
		cin >> in;
		vec.push_back(in);
	}
	cin >> k;
	for (int i = 0; i < vec.size(); i++)
	{
		if (isPrime(vec[i]) and vec[i]>=k)
		{
			c++;
		}
		
	}
	cout << c;
	return 0;
}