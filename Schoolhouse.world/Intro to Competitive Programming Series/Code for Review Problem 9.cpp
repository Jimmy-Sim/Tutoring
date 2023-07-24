#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    
    int N;
    cin >> N;

    int cows[100005][5];
    for (int i = 0; i < N; i++) {
        cin >> cows[i][0] >> cows[i][1];
    }

    for (int i = N - 2; i >= 0; i--) {
        if (cows[i][1] > cows[i + 1][1]) {
            cows[i][1] = cows[i + 1][1];
            N--;
        }
    }

    cout << N << '\n';

    return 0;
}
