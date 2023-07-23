#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N;
    string mailboxes;
    cin >> N >> mailboxes;

    int maxFound = 0, ans;
    for (int i = 0; i < N; i++) {
        int x = 1;
        for (int j = i; j < N; j++) {
            string substring = mailboxes.substr(i, x);
            bool found = false;
            
            for (int k = 0; k <= N - x; k++) {
                if (k == i) continue;

                string checkSubstring = mailboxes.substr(k, x);

                if (substring == checkSubstring) {
                    found = true;
                    break;
                }
            }

            if (found) maxFound = max(x, maxFound);

            x++;
        }
    }

    ans = maxFound + 1;

    cout << ans << "\n";

    return 0;
}
