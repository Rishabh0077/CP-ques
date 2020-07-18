#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int val = 0;
    int carry = 0;
    cin >> val;
    vector<int> arr(200, 0);
    arr[0] = 1;

    int k = 0;
    for (int i = 1; i <= val; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            arr[j] = arr[j] * i + carry;
            carry = arr[j] / 10;
            arr[j] = arr[j] % 10;
        }
        while (carry) //Propogate the remaining carry to higher order digits
        {
            k++;
            arr[k] = carry % 10;
            carry /= 10;
        }
    }
    for (int i = k; i >= 0; i--)
    {
        cout << arr[i];
    }

    cout << endl;

    return 0;
}
