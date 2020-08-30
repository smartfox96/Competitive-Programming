#include <iostream>
#include <cmath>

using namespace std;
const int MAXN = (int)2e5+9;
int n, t, a[MAXN], cnt, ans, ok, sorted, eq;

int main() {
	int t;
	cin>>t;
	while(t--) {
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		a[n] = INT_MAX;
		sorted = 1;
		eq = 1;
		for (int i = 1; i < n; ++i) {
			if(a[i] < a[i-1])
				sorted = 0;
		}
		if(sorted) {
			cout << 0 << '\n';
			continue;
		}
 
		for (int i = 1; i < n; ++i){ 
			if(a[eq-1] != a[i])
				eq = 0;
		}	
		if(eq) {
			cout << 0 << '\n';
			continue;
		}
		int i = n - 2;
			
		while(i >= 0 && a[i] >= a[i+1])
			--i;

		while(i >= 0 && a[i] <= a[i+1])
			--i;
		cout << i+1 << '\n';
	}
}