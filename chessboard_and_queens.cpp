// #include <iostream>
// #include <string>
// #include <numeric> // std::iota
// #include <cstring> // std::memset
// #include <algorithm> // std::next_permutation
// 
// std::string s[8];
// bool b[15];
// 
// int main() {
//   for (int i = 0; i < 8; ++i)
//   std::cin >> s[i];
//   int p[8], ans = 0;
//   std::iota(p, p + 8, 0);
//   do {
//   bool ok = 1;
//   for (int i = 0; i < 8; ++i)
//     ok &= s[i][p[i]] == '.';
//   std::memset(b, 0, sizeof b);
//   for (int i = 0; i < 8; ++i) {
//     if (b[i + p[i]])
//     ok = 0;
//     b[i + p[i]] = 1;
//   }
//   std::memset(b, 0, sizeof b);
//   for (int i = 0; i < 8; ++i) {
//     if (b[i + 7 - p[i]])
//     ok = 0;
//     b[i + 7 - p[i]] = 1;
//   }
//   ans += ok;
//   } while (std::next_permutation(p, p + 8));
//   std::cout << ans;
// //   for (auto& i : s) std::cout << i << " ";
// }
// 
// 
//
//

// Eight Queen with output 92
#include <iostream>

char A[8][8];
int ans = 0;

bool is_valid(int row, int col) {
// Eight Queen with constraints output 65
  // check reserved spot
  if (A[row][col] == '*')
    return false;
  

  // check columns
  for (int i = 0; i < 8; ++i)
    if (A[i][col] == 'q')
      return false;

  // check negative slope
  for (int i = row, j = col; i >= 0 && j >= 0; --i, --j)
    if (A[i][j] == 'q')
      return false;

  // check positive slope
  for (int i = row, j = col; i >= 0 && j < 8; --i, ++j)
    if (A[i][j] == 'q')
      return false;

  return true;
}

void count(int row) {
  if (row == 8) {
    ++ans;
    return;
  }

  for (int col = 0; col < 8; ++col) {
    if (is_valid(row, col)) {
      A[row][col] = 'q';
      count(row + 1);
      A[row][col] = '.';
    }
  }
}

int main() {
  for (int i = 0; i < 8; ++i) 
    for (int j = 0; j < 8; ++j) 
      std::cin >> A[i][j];
  count(0);
  std::cout << ans << std::endl;
}


