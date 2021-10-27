#include <iostream>

int main() {
  long long n;
  std::cin >> n;
  long long res = 1;
  for (int i = 0; i < n; ++i) {
	res = res * 2 % ((int)1e9 + 7);
  }	
  std::cout << res;

}
