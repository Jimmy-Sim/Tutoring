#include <bits/stdc++.h>

using namespace std;

struct Cow {
    int order, firstVote, secondVote;
};

bool cmp(Cow a, Cow b) {
    return a.firstVote > b.firstVote;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N, K;
    cin >> N >> K;

    Cow cows[50005];
    for (int i = 0; i < N; i++) {
        cows[i].order = i + 1;
        cin >> cows[i].firstVote >> cows[i].secondVote;
    }

    sort(&cows[0], &cows[N], cmp);

    int maxVote = 0, maxVoteOrder;
    for (int i = 0; i < K; i++) {
        if (cows[i].secondVote > maxVote) {
            maxVote = cows[i].secondVote;
            maxVoteOrder = cows[i].order;
        }
    }

    cout << maxVoteOrder << '\n';

    return 0;
}
