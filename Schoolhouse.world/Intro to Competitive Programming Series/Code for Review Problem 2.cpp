#include <iostream>

using namespace std;

int main()
{
    int grid[2005][2005] = {}, area = 0;
    for (int i = 0; i < 3; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = y1; j < y2; j++) {
            for (int k = x1; k < x2; k++) {
                if (i != 2) {
                    grid[j + 1000][k + 1000] = 1;
                }
                else {
                    grid[j + 1000][k + 1000] = 0;
                }
            }
        }
    }

    for (int i = 0; i <= 2000; i++) {
        for (int j = 0; j <= 2000; j++) {
            area += grid[i][j];
        }
    }

    cout << area << "\n";
}
