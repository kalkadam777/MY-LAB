#include <iostream>

using namespace std;

int main() {
	int n,a,b;
	cin >> n;
	int arr1[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];	
	}
	for (int i = n/2; i < n; i++)
	{
		int s = 0;
		while (arr1[i] > 0) {
			s *= 10;
			s += arr1[i] % 10;
			arr1[i] /= 10;
		}
		arr1[i] = s;
	}
	int ans = 0;
	for (int i = 0; i < n/2; i++)
	{
		if (arr1[i]!=arr1[n-1-i])
		{
			ans = 1;
			break;
		}
	}
	if (ans==1)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
}