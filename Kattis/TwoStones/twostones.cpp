#include <iostream>
using namespace std;
int main() {
    int N;  cin >> N;
    string a = "Alice", b = "Bob";
    if (N > 0 && N < 10000000)
        (N%2!=0) ? cout << a : cout << b;
}