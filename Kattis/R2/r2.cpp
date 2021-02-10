#include <iostream>
using namespace std;
int main() {
    int R1, S;  cin >> R1 >> S;
    if (R1 >= -1000 && R1 <= 1000 && S >= -1000 && S <= 1000)
        cout << 2*S-R1;
}