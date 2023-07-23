#include <iostream>

using namespace std;

int main()
{
    int rowVal, colVal;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int val;
            cin >> val;

            if (val == 1) {
                rowVal = i;
                colVal = j;
            }
        }
    }

    cout << abs(rowVal - 3) + abs(colVal - 3) << '\n';

    return 0;
}
