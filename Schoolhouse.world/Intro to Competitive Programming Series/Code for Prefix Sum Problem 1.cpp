#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    int arr[100005] = {}, pfxSum[100005];;
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        pfxSum[i] = arr[i];
    }

    for (int i = 2; i <= N; i++) {
        pfxSum[i] += pfxSum[i - 1];
    }

    for (int i = 0; i < Q; i++) {
        int A, B;
        cin >> A >> B;

        int sum = pfxSum[B] - pfxSum[A - 1];

        cout << sum << '\n';
    }

    return 0;
}
