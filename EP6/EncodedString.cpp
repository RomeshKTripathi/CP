#include <bits/stdc++.h>
#define endl '\n'
 
#define SZ(x) ((int)x.size())
#define ALL(V) V.begin(), V.end()
#define L_B lower_bound
#define U_B upper_bound
#define pb push_back
 
using namespace std;
template<class T, class T1> int chkmin(T &x, const T1 &y) { return x > y ? x = y, 1 : 0; }
template<class T, class T1> int chkmax(T &x, const T1 &y) { return x < y ? x = y, 1 : 0; }
const int MAXN = (1 << 20);
 
int n;
string s;
 
void read() {
	cin >> n;
	cin >> s;
}
 
void solve() {
	for(int i = 0; i < n; i += 4) {
		int x = 0;
		for(int j = 0; j < 4; j++) {
			x = (x << 1) | (s[i + j] - '0');
		}
	
		cout << (char)(x + 'a');
	}
 
	cout << endl;	
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T;
	cin >> T;
	while(T--) {
		read();
		solve();
	}
 
	return 0;
}