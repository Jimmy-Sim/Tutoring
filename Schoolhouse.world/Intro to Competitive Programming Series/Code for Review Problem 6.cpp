#include <iostream>

using namespace std;

int main()
{
    int N, hills[1005], ans = 10000000;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> hills[i];

    for (int i = 0; i <= 83; i++) {
        int low = i, high = i + 17;
        int totalCost = 0;

        for (int j = 0; j < N; j++) {
            if (hills[j] < low) totalCost += (low - hills[j]) * (low - hills[j]);
            else if (hills[j] > high) totalCost += (hills[j] - high) * (hills[j] - high);
        }

        ans = min(ans, totalCost);
    }

    cout << ans << "\n";

    return 0;
}
