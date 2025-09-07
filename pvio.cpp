#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <cstring>

const int mod = 2e9+7;

signed main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    std::cout.setf(std::ios::fixed); std::cout.precision(8);
    int n, m, k;
    std::cin >> n >> m >> k;
    int mat1[110][110];
    int mat2[110][110];
    long long ans[110][110];

    for (int i = 0; i < 110; i++) {
        for (int j = 0; j < 110; j++) {
            ans[i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> mat1[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            std::cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int p = 0; p < m; p++) {
                ans[i][j] = ans[i][j] + mat1[i][p] * mat2[p][j];
            }

        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (j == k - 1) {
                std::cout << ans[i][j];
            }
            else { 
                std::cout << ans[i][j] << " ";
            }
        }
        if (i != n - 1) {
            std::cout << "\n";
        }
    }
    return 0;
}