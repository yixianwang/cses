// #include <iostream>
// 
// int n, p[20];
// 
// int main() {
//   std::cin >> n;
//   long long s = 0, ans = 0;
//   for (int i = 0; i < n; ++i) {
// 	std::cin >> p[i];
// 	s += p[i];
//   }
//   for (int i = 0; i < 1 << n; ++i) {
// 	 long long cs = 0;
// 	 for (int j = 0; j < n; ++j) 
// 	   if (i >> j & 1) {
// 		 cs += p[j];
// 	   }
// 	 if (cs <= s / 2)
// 	   ans = std::max(ans, cs);
//   }
//   std::cout << s - 2 * ans;
// }
// 

#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> all(n);
  for (int i = 0; i < n; ++i)
	std::cin >> all[i];
  long long ans = 1e18;
  for (int mask = 0; mask < (1 << n); ++mask) {
	long long sum_a = 0;
	long long sum_b = 0;
	for (int position = 0; position < n; ++position) {
	  if (mask & (1 << position))
		sum_a += all[position];
	  else
		sum_b += all[position];
	}
	ans = std::min(ans, std::abs(sum_a - sum_b));
  }
  std::cout << ans;
}



