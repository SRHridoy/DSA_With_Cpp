#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    sort(s, s + n);
    for (int i = 0; i < n; i++)
        cout << s[i] << " ";
    return 0;
}