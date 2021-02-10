#include <iostream>
#include <limits>

typedef std::numeric_limits< double > dbl;

using namespace std;
int main() {
  double C, sow{0.8f};  sow = 0.0;
  int L;  cin >> C >> L;
  if (C > 0 && C <= 100 && L > 0 && L <= 100) {
    double w, l;
    for (int i = 1;i <= L;i++) {
      cin >> w >> l;
      sow += w*l*C;
    }
    cout.precision(10);
    cout << sow;
  }
}