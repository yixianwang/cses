#include <iostream>

int main() {
  long long n;
  std::cin >> n;
  while (n--) {
	long long a, b;
	std::cin >> a >> b;
	std::cout << ((a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a ? "YES" : "NO") << "\n"; 
  }

}
