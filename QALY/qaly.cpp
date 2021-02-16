#include <iostream>
using namespace std;
int main() {
  int n;  cin >> n;
  if (n >= 1 && n <= 100) {
	  double qaly = 0;
	  for (int i = 0;i < n;i++) {
      double x, y; cin >> x >> y;
      if (x > 0 && x <= 1 && y > 0 && y <= 100)
        qaly += x * y;
    }
    cout << qaly;
  }
}