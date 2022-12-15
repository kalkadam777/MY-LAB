#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b) {
  if (b!=0)
  {
    return gcd(b, a % b);
  }
  else {
    return a;
  }
}

int main() {
  int n;
  cin >> n;

  int* arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int max = gcd(arr[0], arr[1]);
  for (int i = 0; i < n-1; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (gcd(arr[i],arr[j])>max and i!=j)
      {
        max = gcd(arr[i], arr[j]);
      }
    }
  }
  cout << max;
}