//       *Author: Md Sohanur Rahman Hridoy* ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include"bits/stdc++.h"
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
#define fo(i, n)          for(int i = 0; i <n; i++)
using namespace std;

void solve()
{
    int n; cin >> n;
    int m; cin >> m;
    vector<int>v;
    fo(i,n)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    sort(v.begin(),v.end(),greater<int>());
    int cnt = 1;
    int sum = 0;
    fo(i,n)
    {
        sum+=v[i];
        if(sum<m)
            cnt++;
        else
            break;
    }
    cout << cnt << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    //int cs = 1;
    //cin >> t;
    while (t--)
    {
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}