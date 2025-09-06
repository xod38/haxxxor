#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <cstring>

const int mod = 1e9+7;

signed main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    std::cout.setf(std::ios::fixed); std::cout.precision(8);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a;
    int b;
    std::cin >> a >> b;
    std::cout << a + b;
    return 0;
}