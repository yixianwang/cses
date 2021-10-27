// #include <iostream>
// #include <vector>
// 
// int main() {
//   long long n;
//   std::cin >> n;
//   if (n * (n + 1) / 2 % 2 != 0) {
// 	std::cout << "NO";
// 	return 0;
//   }
// 
//   // n = 0, 3 mod 4
//   std::vector<int> v1, v2;
//   int j = 0;
//   if (n % 4)
// 	j = 3;
//   else
// 	j = 4;
// 
//   for (int i = 0; i < (n - 1) / 4; ++i) {
// 	v1.push_back(4 * i + 1 + j);
// 	v1.push_back(4 * i + 4 + j);
// 	v2.push_back(4 * i + 2 + j);
// 	v2.push_back(4 * i + 3 + j);
//   }
// 
//   if (n % 4) {
// 	v1.push_back(1);
// 	v1.push_back(2);
// 	v2.push_back(3);
//   } else {
// 	v1.push_back(1);
// 	v1.push_back(4);
// 	v2.push_back(3);
// 	v2.push_back(2);
//   }
// 
//   std::cout << "YES\n";
//   std::cout << v1.size() << "\n";
//   for (int i : v1) 
// 	std::cout << i << " ";
//   std::cout << "\n";
//   std::cout << v2.size() << "\n";
//   for (int i : v2)
// 	std::cout << i << " ";
//   std::cout << "\n";
// }
// 

#include <iostream>
#include <set>

int main() {
  long long n;
  std::cin >> n;
  if (n * (n + 1) / 2 % 2 != 0) {
	std::cout << "NO";
	return 0;
  }

  std::set<long long> s1, s2;
  long long target = n * (n + 1) / 4;
  
  for (int i = 1; i < n; ++i) {
	s1.insert(i);
  }

  while (s1.count(target) == 0) {
	target -= n;
	s2.insert(n);
	s1.erase(n);
	n--;
  }
  s1.erase(target);
  s2.insert(target);
  std::cout << "YES" << "\n";

  std::cout << s1.size() << "\n";
  for (int i : s1) 
	std::cout << i << " ";

  std::cout << "\n";

  std::cout << s2.size() << "\n";
  for (int i : s2)
	std::cout << i << " ";	


}
