#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int maxi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, t;
    cin >> a >> b >> t;
    ll s[] = {a, b, b - a, -a, -b, a - b};
    cout << (s[(t - 1) % 6] % maxi + maxi) % maxi;
}