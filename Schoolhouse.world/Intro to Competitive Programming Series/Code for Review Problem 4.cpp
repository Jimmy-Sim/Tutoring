#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int K, N;
    int sessions[25][25], check[25][25] = {};
    int ans = 0;

    cin >> K >> N;
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N; j++) cin >> sessions[i][j];
    }

    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N - 1; j++) {
            int cow1 = sessions[i][j];

            for (int k = j + 1; k < N; k++) {
                int cow2 = sessions[i][k];

                check[cow1][cow2]++;
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (check[i][j] == K) ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}
