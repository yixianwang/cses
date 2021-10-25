#include <iostream>

int main() {
  int n;
  std::cin >> n;
  for (int k = 1; k <= n; k++) {
	long long a1 = k * k, a2 = a1 * (a1 - 1) / 2;
	if (k > 2) {
	  a2 -= 4 * (k - 1) * (k - 2);
	}
	std::cout << a2 << "\n";
  }
}

