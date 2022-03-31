#include<bits/stdc++.h>
using namespace std;
enum mov { ur, ul, dr, dl };
// the robot can be moved only diagonally.
// upwards and right(ur), upwards and left(ul),
// downwards and right(dr), downwards and left(dl)
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, rb, cb, rd, cd;
		cin >> n >> m >> rb >> cb >> rd >> cd;
		int time = 0;
		mov b(dr);
		// start dr.
		while (true) {
			if (rb == rd || cb == cd) break;
			// if the robot is on the same line
			// as the stain, break. 
			else if ((rb == n && cb != m && b == dr) // if mov is dr and we reach last row
				|| cb == 1 && rb != 1 && b == ul) // or mov is ul and we reach first column etc..
				b = ur; // the robot should start moving ur.
			else if (cb == m && rb != n && b == dr
				|| rb == 1 && cb != 1 && b == ul)
				b = dl;
			else if ((cb == m && rb != n && b == ur) 
				|| (rb == n && cb == m)
				|| (rb == n && cb != m && b == dl))
				b = ul;

			switch (b) {
				case(dr):
					++rb; ++cb;
					break;
				case(ur):
					--rb; ++cb;
					break;
				case(dl):
					++rb; --cb;
					break;
				case(ul):
					--rb; --cb;
					break;
			}
			++time; 
		}
		cout << time << endl;
	}
	return 0;
}