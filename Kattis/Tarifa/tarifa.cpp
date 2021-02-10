#include <iostream>
using namespace std;
int main() {
  int gb; cin >> gb;
  if (gb >= 1 && gb <= 100) {
    int month;  cin >> month;
    if (month >= 1 && month <= 100) {
      int tot = gb;
      for (int i = 0;i < month;i++) {
        int p;  cin >> p;
        tot = (gb+tot)-p;
      }
      cout << tot;
    }
  }
}