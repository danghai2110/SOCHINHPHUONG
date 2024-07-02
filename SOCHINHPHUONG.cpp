#include <iostream>
#include <cmath>

using namespace std;
bool Sochinhphuong(int so) {
	if ((int)sqrt(so) == sqrt(so)) return true;
	return false;
}int main() {
	int so;
	cin >> so;
	for (int i = 1; i <= so; i++) {
		if (Sochinhphuong(i)) cout << i << " ";
	}
}