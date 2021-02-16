#include <iostream>

using namespace std;

int main() {
  int l1[2];  cin >> l1[0] >> l1[1];
  int l2[2];  cin >> l2[0] >> l2[1];
  int l3[2];  cin >> l3[0] >> l3[1];

  int l4[2];
  if (l1[0] == l2[0])
    l4[0] = l3[0];
  else if (l1[0] == l3[0])
    l4[0] = l2[0];
  else if (l2[0] == l3[0])
    l4[0] = l1[0];

  if (l1[1] == l2[1])
    l4[1] = l3[1];
  else if (l1[1] == l3[1])
    l4[1] = l2[1];
  else if (l2[1] == l3[1])
    l4[1] = l1[1];

  cout << l4[0] << " " << l4[1];
}
