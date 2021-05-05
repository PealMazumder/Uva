//Problem Link: https://onlinejudge.org/external/7/760.pdf
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
#define ULL unsigned long long
const int N = 100006;
const int M = 44444;
const ULL hs = 3797;

ULL F[N], H[N], HH[N];
ULL seg(int x, int y) { // hash value of the segment [x, y]
    return H[y] - F[y - x + 1] * H[x - 1];
}
ULL seg1(int x, int y) { // hash value of the segment [x, y]
    return HH[y] - F[y - x + 1] * HH[x - 1];
}
void solve()
{
    F[0] = 1; for(int i = 1; i < N; i++) F[i] = F[i - 1] * hs; // keeping the powers pre-calculated
    string a, b;
    bool flag = 0;
    while(cin>>a)
    {
        if(flag) cout<<nl; flag = 1;
        cin>>b;
        int n = sz(a) , m = sz(b);
        H[0] = 0; for(int i = 1; i <= n; i++) H[i] = H[i - 1] * hs + a[i-1];
        HH[0] = 0; for(int i = 1; i <= m; i++) HH[i] = HH[i - 1] * hs + b[i-1];
        int l = 1, r = max(n, m);
        int mxlength = 0;
        ULL anshs = 0;
        while(l <= r)
        {
            int mid = (l+r)/2;
            set<ULL> st;
            for(int i = 1; i + mid - 1 <= n; i++)
            {
                ULL curr_hs = seg(i, i+mid-1);
                st.insert(curr_hs);
            }
            bool ck = 0;
            for(int i = 1; i + mid - 1 <= m; i++)
            {
                ULL curr_hs = seg1(i, i+mid-1);
                if(st.find(curr_hs) != st.end())
                {
                    ck = 1;
                    if(mid > mxlength) mxlength = mid;
                    break;
                }
            }
            if(ck)
                l = mid + 1;
            else r = mid-1;
        }
        unordered_set<ULL> st1;
        set<string> st;
        for(int i = 1; i + mxlength - 1 <= n; i++)
        {
            ULL curr_hs = seg(i, i+mxlength-1);
            st1.insert(curr_hs);
        }
        for(int i = 1; i + mxlength - 1 <= m; i++)
        {
            ULL curr_hs = seg1(i, i + mxlength - 1);
            if(st1.find(curr_hs) != st1.end())
                 st.insert(b.substr(i-1, mxlength));
        }
        if(mxlength == 0)
            cout<<"No common sequence.\n";
        else
            for(auto xx : st)
                cout<<xx<<nl;
    }
}
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
        solve();
    return 0;
}
