#include <iostream>

int main() {
  long long n, s = 0;
  std::cin >> n;
  for (int i = 0; i < n - 1; i++) {
	int a;
	std::cin >> a;
	s += a;
  }
  std::cout << n * (n + 1) / 2 - s;
}
