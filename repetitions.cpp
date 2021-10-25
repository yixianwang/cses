#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;
  int ans = 1, c = 0;
  char l = 'A';
  for (auto d : s) {
	if (d == l) {
	  ++c;
	  ans = std::max(c, ans);
	} else {
	  l = d;
	  c = 1;
	}
  }
  std::cout << ans;


  
}
