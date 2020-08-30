#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--) {
		int a[3];
		for(int i=0;i<3;i++) {
			cin>>a[i];
		}
		sort(a,a+3);
		if(a[1]!=a[2]) {
			cout<<"NO"<<endl;
		} else {
			cout<<"YES"<<endl;
			cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
		}

	}
	return 0;
}