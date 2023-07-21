#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N;
    cin >> N;

    while (N--) {
        int number;
        cin >> number;

        int low = 1, high = 50;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            cout << mid << ' ';

            if (mid == number) {
                break;
            }
            else if (mid > number) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        cout << '\n';
    }
    
    return 0;
}
