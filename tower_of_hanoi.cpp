#include <iostream>
#include <vector>

int ans = 0;
std::vector<std::vector<int> > output;

void move(int count, int n1, int n3, int n2) {
  if (count > 0) {
	move(count - 1, n1, n2, n3);
// 	std::cout << n1 << " " << n3 << "\n";

	std::vector<int> v1;
	v1.push_back(n1);
	v1.push_back(n3);
	output.push_back(v1);
	++ans;

	move(count - 1, n2, n3, n1);
  }
}

int main() {
  int n;
  std::cin >> n;
  move(n, 1, 3, 2);

  std::cout << ans << "\n";
  for (int i = 0; i < ans; ++i) {
	std::cout << output[i][0] << " " << output[i][1] << "\n";
  }
}


