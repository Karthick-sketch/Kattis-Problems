#include <iostream>
using namespace std;
int main() {
  int n;  cin >> n;
  int p;  cin >> p;
  if (n >= 1 and n <= 1000 and p >= 1 and p <= 1000) {
    string str;
	  for (int i = 0;i < n;i++)
		  cin >> str;
	  cout << p;
  }
}