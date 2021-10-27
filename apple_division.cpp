// #include <iostream>
// #include <algorithm>
// 
// int main() {
//   int n;
//   std::cin >> n;
//   int p[n];
//   for (int i = 0; i < n; i++)
// 	std::cin >> p[i];
//   std::sort(p, p + n);
//   // does array has iterator?
// 
// 
//   long long residu = 0;
//   for (int v : p)
// 	residu += v;
// 
//   long long addup = 0;
// 
//   long long min_val = residu;
//   
//   for (int i = 0; i < n; ++i) {
// 	addup += p[i];
// 	residu -= p[i];
// 	min_val = std::min(min_val, std::abs(residu - addup));
//   }
// 
//   std::cout << min_val;
// 
// }

// above is my wrong answer

#include <iostream>

int n, p[20];

int main() {
  std::cin >> n;
  long long s = 0, ans = 0;
  for (int i = 0; i < n; ++i) {
	std::cin >> p[i];
	s += p[i];
  }
  for (int i = 0; i < 1 << n; ++i) {
	 long long cs = 0;
	 for (int j = 0; j < n; ++j) 
	   if (i >> j & 1)
		 cs += p[j];
	 if (cs <= s / 2)
	   ans = std::max(ans, cs);
  }
  std::cout << s - 2 * ans;
}


