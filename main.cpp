#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int hist[5] = {0};

	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		b /= 25;
		hist[b--]++;

		if (b == 3) {
			if (hist[2] > 0) hist[2]--;
			else hist[1] -= 2;

			hist[1]--;
		}
		else hist[b]--;

		if (hist[1] < 0 || hist[2] < 0 || hist[4] < 0) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
}
