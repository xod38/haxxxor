#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <cstring>

const int mod = 2e9+7;

signed main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    std::cout.setf(std::ios::fixed); std::cout.precision(8);

    int n;
    std::cin >> n;
    int mas[n+10];
    for (int i = 1; i < n+1; i++) {
        std::cin >> mas[i];
    }

    mas[0] = mas[n];

    for (int i = 0; i < n; i++) {
        if (i + 1 == n) {
            std::cout << mas[i] << '\n';
        }
        else {
            std::cout << mas[i] << " ";
        }
    }
    return 0;
}