#define ll long long
class Solution {
public:
    int countTriples(int n) {
        ll ans = 0;
        for (ll i = 1; i <= n; i++) {
            for (ll j = i + 1; j <= n; j++) {
                ll sum = i * i + j * j;
                ll s = sqrtl(sum);
                if (s > n) break;
                if (s * s == sum) ans += 2;
            }
        }
        return ans;
    }
};