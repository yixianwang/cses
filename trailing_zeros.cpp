#include <iostream>

int main() {
  long long n;
  std::cin >> n;
  long long ans = 0;
  for (long long i = 5; i <= n; i *= 5) {
	ans += n / i;
  }

  std::cout << ans;

}
