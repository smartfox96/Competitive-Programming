#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x;
		cin>>n;
		int m[51]={0};
		for(int i=0;i<2*n;i++) {
			cin>>x;
			if(m[x]==0) {
				m[x]++;
				cout<<x<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}