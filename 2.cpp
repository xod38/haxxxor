#include <iostream>
#include <vector>

const int mod = 1e9+7;

signed main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    std::cout.setf(std::ios::fixed); std::cout.precision(8);
    int n, dist, x, ans;
    double dist_max = 1e20;
    std::cin >> n;
    std::vector <int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    std::cin >> x;
    for (int i = 0; i < n; i++){
        dist = abs(vec[i] - x);
        if (dist < dist_max){
            dist_max = dist;
            ans = vec[i];

        }
    }
    std::cout << ans;
}