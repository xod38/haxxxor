#include <iostream>
#include <vector>

signed main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    std::cout.setf(std::ios::fixed); std::cout.precision(8);
    int n, cnt = 0;
    std::cin >> n;
    std::vector <int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    for (int i = 1; i < n - 1; i++){
        if (vec[i] > vec[i+1] && vec[i] > vec[i-1]){
            cnt++;
        } 
    }
    std::cout << cnt;
    return 0;
}