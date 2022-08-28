#include <bits/stdc++.h>
using namespace std;
int n, c, a[200005];
multiset<int> mp;
int main() {
    scanf("%d%d", &n, &c);
    for (int i(1); i <= n; ++i) {
        scanf("%d", &a[i]);
        mp.insert(a[i]);
    }
    int ans = 0;
    for (int i(1); i <= n; ++i) {
        ans += mp.count(a[i] - c);
    }
    cout << ans;
    return 0;
}
