#include <iostream>

using namespace std;

int fact(int num) {
	if (num == 1)
		return num;
	else
		return num * fact(num-1);
}

int main() {
  int n;  cin >> n;
  int arr[n];
  for (int i = 0;i < n;i++) {
    cin >> arr[i];
    arr[i] = fact(arr[i]);
  }

  for (int i = 0;i < n;i++)
    cout << arr[i] % 10 << endl;
}
