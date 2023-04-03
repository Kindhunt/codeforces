#include <bits/stdc++.h>

using i64 = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;

    std::cin >> t;
    std::vector<std::string> res;
    for(int i = 0; i < t; i++) {
        int n, q;
        
        std::cin >> n >> q;
        std::vector<int> arr;
        
        for(int j = 0; j < n; j++) {
            int temp;
            std::cin >> temp;
            arr.push_back(temp);
        }

        for(int j = 0; j < q; j++) {
            int r, l, k;
            std::cin >> l >> r >> k;
            int s = r - l;

            int sum = 0;

            std::vector<int> z_b(arr.begin(), arr.begin() + l - 1);
            for(auto x: z_b) {
                sum += x;
            }
            std::vector<int> z(abs(s) + 1, k);
            for(auto x: z) {
                sum += x;
            }
            std::vector<int> z_e(arr.begin() + r, arr.end());
            for(auto x: z_e) {
                sum += x;
            }

            if(sum % 2 != 0) res.push_back("YES");
            else res.push_back("NO"); 
        }
    }

    for(auto s: res) {
        std::cout << s << "\n";
    } 

    return 0;
}