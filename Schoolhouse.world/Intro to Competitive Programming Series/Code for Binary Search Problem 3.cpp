#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    int haybales[100005];
    for (int i = 0; i < N; i++) {
        cin >> haybales[i];
    }
    sort(&haybales[0], &haybales[N]);

    for (int i = 0; i < Q; i++) {
        int start, end;
        cin >> start >> end;

        int low = lower_bound(haybales, haybales + N, start) - haybales; // Lowest point with haybale
        int high = upper_bound(haybales, haybales + N, end) - haybales; // Lowest point (> low) without haybale

        cout << high - low << '\n';
    }

    return 0;
}
