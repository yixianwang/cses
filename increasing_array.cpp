#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int mx = 0;
  long long ans = 0;
  for (int i = 0; i < n; i++) {
	int x;
	std::cin >> x;
	mx = std::max(x, mx);
	ans += mx - x;
  }
  std::cout << ans;
}

