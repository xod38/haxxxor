#include <iostream>
#include <cstring>

const int mod = 1e9+7;

signed main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    std::cout.setf(std::ios::fixed); std::cout.precision(8);
    std::string s;
    char ans = 'a';
    std::cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] > ans) {
            ans = s[i];
        }
    }
    std::cout << ans;
    return 0;
}