#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N, M, K;
    cin >> N >> M >> K;

    char signal[15][15];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> signal[i][j];
        }
    }

    char amplifiedSignal[105][105];
    for (int i = 0; i < N * K; i++) {
        for (int j = 0; j < M * K; j++) {
            amplifiedSignal[i][j] = signal[i / K][j / K];
        }
    }

    for (int i = 0; i < N * K; i++) {
        for (int j = 0; j < M * K; j++) {
            cout << amplifiedSignal[i][j];
        }
        cout << '\n';
    }

    return 0;
}
