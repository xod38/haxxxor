#include <iostream>

signed main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    std::cout.setf(std::ios::fixed); std::cout.precision(8);
    char a;
    char ans;
    ans = 'a';
    while (std::cin >> a) {
        if (a > ans) {
            ans = a;
        }
    }
    std::cout << ans;
    return 0;
}
