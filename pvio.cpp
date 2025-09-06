#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <cstring>

const int mod = 1e9+7;

signed main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    std::cout.setf(std::ios::fixed); std::cout.precision(8);
    char a, b;
  int mn = 0;
  while (std::cin >> a) {
    if (mn < a) {
      mn = a;
      b = a;
    }
  }
  std::cout << b << std::endl;
  return 0;
}