#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int numbers[10], sum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    bool found = false;
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - (numbers[i] + numbers[j]) == 100) {
                found = true;
                numbers[i] = -1, numbers[j] = -1;
                break;
            }
        }

        if (found) {
            break;
        }
    }

    sort(&numbers[0], &numbers[9]);

    for (int i = 2; i < 9; i++) {
        cout << numbers[i] << ' ';
    }

    cout << '\n';

    return 0;
}
