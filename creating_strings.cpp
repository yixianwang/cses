#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

long long Factorial(int n) ;

int main() {
  std::string s;
  std::cin >> s;
  std::sort(s.begin(), s.end());
  std::vector<std::string> ans;
  do {
	  ans.push_back(s);
  } while (std::next_permutation(s.begin(), s.end()));

  std::cout << ans.size() << "\n";

  // caculating output size

  int c[26] = {};
  for (char d : s) 
	  ++c[d - 'a'];

  long long up_num = Factorial(s.size());
  long long down_num = 1;
  for (int v : c)
    if (v > 1)
      down_num *= Factorial(v);

  std::cout << up_num / down_num << "\n";
  // end 


  for (std::string d : ans) 
	  std::cout << d << "\n";

}

long long Factorial(int n) {
  if (n == 1)
	  return 1;
  return n * Factorial(n - 1);
}
