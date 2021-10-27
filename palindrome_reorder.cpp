#include <iostream>
#include <string>
#include <algorithm>

int main() {
  std::string s;
  std::cin >> s;
  int c[26] = {}, c1 = 0;
  for (char d : s) 
	++c[d - 'A'];
  for (int v : c)
	c1 += v & 1;
  if (c1 > 1) { 
	  std::cout << "NO SOLUTION"; 
	  return 0;
  }

  std::string ans;
  for (int i = 0; i < 26; ++i)  
	if (c[i] & 1 ^ 1)
	  for (int j = 0; j < c[i] / 2; ++j)
		ans += (char)(i + 'A');
  std::cout << ans;
  for (int i = 0; i < 26; ++i)  
	if (c[i] & 1)
	  for (int j = 0; j < c[i]; ++j)
		std::cout << (char)(i + 'A');
  std::reverse(ans.begin(), ans.end());
  std::cout << ans;
}
