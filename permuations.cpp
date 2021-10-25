#include <iostream>

int main() {
  int n;
  std::cin >> n;
  if (n == 1) {
	std::cout << 1;
	return 0;
  }
  if (n == 2 || n == 3) {
	std::cout << "NO SOLUTION";
	return 0;
  }

  // 2 4 1 3
  // 4 2 5 3 1 
  if (n % 2 == 0) {
	for (int i = 2; i <= n; i += 2) {
	  std::cout << i << " ";
	}
	for (int i = 1; i < n; i += 2) {
	  std::cout << i << " ";
	}
  } else {
	for (int i = n - 1; i > 0; i -= 2) {
	  std::cout << i << " ";
	}
	for (int i = n; i > 0; i -= 2) {
	  std::cout << i << " ";
	}
  }
  

}


