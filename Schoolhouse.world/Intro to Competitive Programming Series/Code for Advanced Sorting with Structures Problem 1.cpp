#include <bits/stdc++.h>

using namespace std;

struct Point {
    int xValue, yValue;
};

bool cmp(Point a, Point b) {
    if (a.yValue != b.yValue) {
        return a.yValue < b.yValue;
    }

    return a.xValue < b.xValue;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N;
    cin >> N;

    Point points[100005];
    for (int i = 0; i < N; i++) {
        cin >> points[i].xValue >> points[i].yValue;
    }

    sort(&points[0], &points[N], cmp);

    for (int i = 0; i < N; i++) {
        cout << points[i].xValue << ' ' << points[i].yValue << '\n';
    }

    return 0;
}
