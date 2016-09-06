/*input
2
4 3
111
100
110
000
2 2
10
01
*/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr<<"[DEBUG] "<<#x<<"="<<x<<endl
#define boostIO ios_base::sync_with_stdio(false)
#define ld long double
#define ll long long int
#define CLR(s) memset(&s, 0, sizeof(s))
#define scani(s) scanf("%d",&s)
#define scanl(s) scanf("%lld",&s)
#define hashset unordered_set
#define hashmap unordered_map
#define pll pair<ll,ll>
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl '\n'

int main()
{
	//readFile;
	boostIO;
	int n, m, t;
	int c[1000]={0};
	cin>>t;
	while(t--) {
		cin>>n>>m;
		for(int i=0; i<m; i++) c[i]=0;
		for(int i=0; i<n; i++) {
			string s;
			cin>>s;
			for(int j=0; j<m; j++) {
				if(s[j]=='1') c[j]++;
			}
		}

		ll ans=0;
		for(int i=0; i<m; i++) {
			ans+=(c[i]*(c[i]-1))/2;
		}
		cout<<ans<<endl;
	}	
	
	return 0;
}
