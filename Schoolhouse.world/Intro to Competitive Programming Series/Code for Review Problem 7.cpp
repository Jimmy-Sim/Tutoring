#include <iostream>

using namespace std;

string names[3005][5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> names[i][1] >> names[i][2] >> names[i][3];
    }

    int maxCount = 0;
    for (int i = 0; i < N - 1; i++) {
        int count = 1;
        for (int j = i + 1; j < N; j++) {
            if ((names[j][1] == names[i][1] || names[j][2] == names[i][1] || names[j][3] == names[i][1]) && (names[j][1] == names[i][2] || names[j][2] == names[i][2] || names[j][3] == names[i][2]) && (names[j][1] == names[i][3] || names[j][2] == names[i][3] || names[j][3] == names[i][3])) {
                count++;
            }
        }

        maxCount = count > maxCount ? count : maxCount;
    }

    cout << maxCount << "\n";

    return 0;
}
