#include <iostream>

const int mod = 2e9+7;

signed main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    std::cout.setf(std::ios::fixed); std::cout.precision(8);
    int a;
    int min1 = mod;
    int min2 = mod;
    std::cin >> a;
    int m;

    for (int i = 0; i < a; i++){
        std::cin >> m;
        if (m < min1) {
            min2 = min1;
            min1 = m;
        }
        else {
            if (m < min2) {
                min2 = m;
            }
        }
    }
    
    std::cout << min1 << " " << min2;
    
    return 0;
}