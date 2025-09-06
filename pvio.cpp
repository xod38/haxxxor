#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <cstring>

const int mod = 2e9+7;

signed main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    std::cout.setf(std::ios::fixed); std::cout.precision(8);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a;
    int min1 = mod;
    int min2 = mod;
    std::cin >> a;
    int mas[a+10];
    for (int i = 0; i < a; i++){
        std::cin >> mas[i];
    }

    for (int i = 0; i < a; i++){
        if (mas[i] < min1) {
            min2 = min1;
            min1 = mas[i];
        }
    }
    
    std::cout << min1 << " " << min2;
    
    return 0;
}