#include <iostream>
#include <cmath>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
	long long y, x;
	std::cin >> y >> x;
	long long z = std::max(x, y);
// 	long long z2 = std::pow((z - 1), 2);
	long long z2 = (z - 1) * (z - 1);
	long long ans;
	if (z % 2 == 0) {
	  if (x == z) {
		ans = z2 + y;
	  } else {
		ans = z2 + z + (z - x);
	  }
	} else {
	  if (y == z) {
		ans = z2 + x;
	  } else {
		ans = z2 + z + (z - y);
	  }
	}
	std::cout << ans << "\n";
  }
}

