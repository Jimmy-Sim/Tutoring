#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int paint;
    if (A >= D || B <= C) {
        paint = (B - A) + (D - C);
    }
    else {
        paint = max(B, D) - min(A, C);
    }

    cout << paint << "\n";

    return 0;
}
