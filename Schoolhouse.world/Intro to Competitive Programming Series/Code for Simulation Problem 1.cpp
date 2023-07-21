#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;

    int shells1[3] = {1, 0, 0}, shells2[3] = {0, 1, 0}, shells3[3] = {0, 0, 1};
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < n; i++) {
        int a, b, g;
        cin >> a >> b >> g;

        swap(shells1[a - 1], shells1[b - 1]), swap(shells2[a - 1], shells2[b - 1]), swap(shells3[a - 1], shells3[b - 1]);

        if (shells1[g - 1] == 1) count1++;
        if (shells2[g - 1] == 1) count2++;
        if (shells3[g - 1] == 1) count3++;
    }

    cout << max(count1, max(count2, count3)) << '\n';

    return 0;
}
