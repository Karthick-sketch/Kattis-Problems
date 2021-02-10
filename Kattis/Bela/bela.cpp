#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main() {
  map<char, int> dominant;

  dominant.insert(pair<char, int>('A', 11));
  dominant.insert(pair<char, int>('K', 4));
  dominant.insert(pair<char, int>('Q', 3));
  dominant.insert(pair<char, int>('J', 20));
  dominant.insert(pair<char, int>('T', 10));
  dominant.insert(pair<char, int>('9', 14));
  dominant.insert(pair<char, int>('8', 0));
  dominant.insert(pair<char, int>('7', 0));

  map<char, int> notDominant;

  notDominant.insert(pair<char, int>('A', 11));
  notDominant.insert(pair<char, int>('K', 4));
  notDominant.insert(pair<char, int>('Q', 3));
  notDominant.insert(pair<char, int>('J', 2));
  notDominant.insert(pair<char, int>('T', 10));
  notDominant.insert(pair<char, int>('9', 0));
  notDominant.insert(pair<char, int>('8', 0));
  notDominant.insert(pair<char, int>('7', 0));

  int n;  cin >> n;
  char b; cin >> b;
  int points = 0;

  for (int i = 0;i < n;i++) {
    for (int j = 0;j < 4;j++) {
      string ip;  cin >> ip;
        if (ip[1] == b)
			points += dominant[ip[0]];
		else
			points += notDominant[ip[0]];
    }
  }
  cout << points;
}
