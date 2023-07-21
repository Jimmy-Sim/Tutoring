#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    int hCount[100005] = {}, gCount[100005] = {}, jCount[100005] = {};
    for (int i = 1; i <= N; i++) {
        int id;
        cin >> id;

        if (id == 1) hCount[i] = 1;
        else if (id == 2) gCount[i] = 1;
        else jCount[i] = 1;
    }

    for (int i = 2; i <= N; i++) {
        hCount[i] += hCount[i - 1];
        gCount[i] += gCount[i - 1];
        jCount[i] += jCount[i - 1];
    }

    for (int i = 0; i < Q; i++) {
        int A, B;
        cin >> A >> B;

        cout << hCount[B] - hCount[A - 1] << ' ' << gCount[B] - gCount[A - 1] << ' ' << jCount[B] - jCount[A - 1] << '\n';
    }

    return 0;
}
