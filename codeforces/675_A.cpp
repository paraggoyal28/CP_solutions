/*input
1 7 3
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int a, b ,c;
	cin>>a>>b>>c;
	if(c==0) {
		if(a==b) cout<<"YES\n";
		else cout<<"NO\n";
	}
	else if(c>0) {
		if( b>=a && (abs(b-a))%c==0 ) {
			cout<<"YES"<<endl;
		} else cout<<"NO"<<endl;
	} else {
		if(a>=b && (abs(b-a))%c==0) {
			cout<<"YES"<<endl;
		} else cout<<"NO"<<endl;
	}
	return 0;
}