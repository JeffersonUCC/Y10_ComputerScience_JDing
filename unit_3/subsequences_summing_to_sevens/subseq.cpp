#include <bits/stdc++.h>

using namespace std;

int N, pre[50001], ans = 0;

void Input()
{
    cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        cin >> pre[i];
        pre[i] += pre[i - 1];
        pre[i] %= 7;
    }
}

void Solve()
{
    for (int r = 0; r < 7; ++r)
    {
        int a = N, b = 0;
        for (int i = 0; i <= N; ++i)
        {
            if (pre[i] == r)
            {
                a = i;
                break;
            }
        }
        for (int i = N; i >= 0; --i)
        {
            if (pre[i] == r)
            {
                b = i;
                break;
            }
        }
        if (b - a > ans)
            ans = b - a;
    }
    cout << ans;
}
int main()
{
    Input();
    Solve();
}