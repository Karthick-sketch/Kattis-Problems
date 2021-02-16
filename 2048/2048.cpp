#include <iostream>
using namespace std;

void swapI(int arr[][4], int a, int b, int i) {
	int temp = arr[i][a];
	arr[i][a] = arr[i][b];
	arr[i][b] = temp;
}

void swapJ(int arr[][4], int a, int b, int j) {
	int temp = arr[a][j];
	arr[a][j] = arr[b][j];
	arr[b][j] = temp;
}

int main() {
	int arr[4][4];
	for (int i = 0;i < 4;i++)
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];

	int pos;  cin >> pos;

	if (pos == 0) {
		for (int i = 0;i < 4;i++) {
			for (int j = 0;j < 4;j++) {
				if (arr[i][2] == 0)
					swapI(arr, 2, 3, i);
				if (arr[i][1] == 0)
					swapI(arr, 1, 2, i);
				if (arr[i][0] == 0)
					swapI(arr, 0, 1, i);
			}
			if (arr[i][0] != 0 and arr[i][1] != 0 and arr[i][0] == arr[i][1]) {
				arr[i][0] *= 2;
				arr[i][1] = arr[i][2];
				arr[i][2] = arr[i][3];
				arr[i][3] = 0;
				if (arr[i][0] != 0 and arr[i][1] != 0 and arr[i][2] == arr[i][1]) {
					arr[i][1] *= 2;
					arr[i][2] = arr[i][3];
					arr[i][3] = 0;
				}
			}
			else if (arr[i][1] != 0 and arr[i][2] != 0 and arr[i][1] == arr[i][2]) {
				arr[i][1] *= 2;
				arr[i][2] = arr[i][3];
				arr[i][3] = 0;
			}
			else if (arr[i][2] != 0 and arr[i][3] != 0 and arr[i][2] == arr[i][3]) {
				arr[i][2] *= 2;
				arr[i][3] = 0;
			}
		}
	}
	else if (pos == 1) {
		for (int i = 0;i < 4;i++) {
			for (int j = 0;j < 4;j++) {
				if (arr[2][i] == 0)
					swapJ(arr, 2, 3, i);
				if (arr[1][i] == 0)
					swapJ(arr, 1, 2, i);
				if (arr[0][i] == 0)
					swapJ(arr, 0, 1, i);
			}
			if (arr[0][i] != 0 and arr[1][i] != 0 and arr[0][i] == arr[1][i]) {
				arr[0][i] *= 2;
				arr[1][i] = arr[2][i];
				arr[2][i] = arr[3][i];
				arr[3][i] = 0;
				if (arr[2][i] != 0 and arr[1][i] != 0 and arr[2][i] == arr[1][i]) {
					arr[1][i] *= 2;
					arr[2][i] = arr[3][i];
					arr[3][i] = 0;
				}
      }
			else if (arr[1][i] != 0 and arr[2][i] != 0 and arr[1][i] == arr[2][i]) {
				arr[1][i] *= 2;
				arr[2][i] = arr[3][i];
				arr[3][i] = 0;
      }
			else if (arr[2][i] != 0 and arr[3][i] != 0 and arr[2][i] == arr[3][i]) {
				arr[2][i] *= 2;
				arr[3][i] = 0;
			}
		}
	}
	else if (pos == 2) {
		for (int i = 0;i < 4;i++) {
			for (int j = 0;j < 4;j++) {
				if (arr[i][1] == 0)
					swapI(arr, 0, 1, i);
				if (arr[i][2] == 0)
					swapI(arr, 1, 2, i);
				if (arr[i][3] == 0)
					swapI(arr, 2, 3, i);
			}
			if (arr[i][2] != 0 and arr[i][3] != 0 and arr[i][2] == arr[i][3]) {
				arr[i][3] *= 2;
				arr[i][2] = arr[i][1];
				arr[i][1] = arr[i][0];
				arr[i][0] = 0;
				if (arr[i][1] != 0 and arr[i][2] != 0 and arr[i][1] == arr[i][2]) {
					arr[i][2] *= 2;
					arr[i][1] = arr[i][0];
					arr[i][0] = 0;
				}
      }
			else if (arr[i][1] != 0 and arr[i][2] != 0 and arr[i][1] == arr[i][2]) {
				arr[i][2] *= 2;
				arr[i][1] = arr[i][0];
				arr[i][0] = 0;
      }
			else if (arr[i][1] != 0 and arr[i][0] != 0 and arr[i][1] == arr[i][0]) {
				arr[i][1] *= 2;
				arr[i][0] = 0;
			}
		}
	}
	else if (pos == 3) {
		for (int i = 0;i < 4;i++) {
			for (int j = 0;j < 4;j++) {
				if (arr[1][i] == 0)
					swapJ(arr, 0, 1, i);
				if (arr[2][i] == 0)
					swapJ(arr, 1, 2, i);
				if (arr[3][i] == 0)
					swapJ(arr, 2, 3, i);
			}
			if (arr[3][i] != 0 and arr[3][i] == arr[2][i]) {
				arr[3][i] *= 2;
				arr[2][i] = arr[1][i];
				arr[1][i] = arr[0][i];
				arr[0][i] = 0;
				if (arr[2][i] != 0 and arr[2][i] == arr[1][i]) {
					arr[2][i] *= 2;
					arr[1][i] = arr[0][i];
					arr[0][i] = 0;
				}
      }
			else if (arr[2][i] != 0 and arr[1][i] == arr[2][i]) {
				arr[2][i] *= 2;
				arr[1][i] = arr[0][i];
				arr[0][i] = 0;
      }
			else if (arr[1][i] != 0 and arr[1][i] == arr[0][i]) {
				arr[1][i] *= 2;
				arr[0][i] = 0;
			}
		}
	}

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 4;j++) {
			cout << arr[i][j];
			if (j < 3)
				cout << " ";
		}
		if (i < 3)
			cout << endl;
	}
}