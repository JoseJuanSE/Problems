#include<bits/stdc++.h>

#define endl '\n'
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define ALL(v) v.begin(), v.end()
#define ALLR(v) v.rbegin(), v.rend()
#define deb cout<<"HOLA\n";
#define UNIQUE(v) (v).resize(unique(ALL(v))-(v).begin())
#define forn(i,n) for (int i = 0; i < n; i++)
#define forr(i,a,b) for (int i = a; i <= b; i++)
#define bse(v,f) binary_search(ALL(v),f)
#define lb(v,f) lower_bound(ALL(v),f)
#define ub(v,f) upper_bound(ALL(v),f)
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef string str;
typedef long double ld;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ll> vl;
typedef vector<ii> vii;

void solve(){
    int n,m;
    cin>>n;
    str s;
    cin>>s;
    if(s[0]=='2' and s[1]=='0' and s[s.size()-1]=='0' and s[s.size()-2]=='2')cout<<"YES"<<endl;
    else if(s[0]=='2' and s[1]=='0' and s[3]=='0' and s[2]=='2')cout<<"YES"<<endl;
    else if(s[s.size()-4]=='2' and s[s.size()-3]=='0' and s[s.size()-1]=='0' and s[s.size()-2]=='2')cout<<"YES"<<endl;
    else if(s[0]=='2' and s[s.size()-3]=='0' and s[s.size()-1]=='0' and s[s.size()-2]=='2')cout<<"YES"<<endl;
    else if(s[0]=='2' and s[1]=='0' and s[s.size()-1]=='0' and s[2]=='2')cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    fast
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
