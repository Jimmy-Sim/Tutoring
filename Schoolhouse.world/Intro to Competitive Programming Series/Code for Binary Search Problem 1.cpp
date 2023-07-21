#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N, number;
    cin >> N >> number;

    int arr[N];
    int left = 0, right = N - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] = number) {
            // number is found
            break;
        }
        else if (arr[mid] > number) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return 0;
}
