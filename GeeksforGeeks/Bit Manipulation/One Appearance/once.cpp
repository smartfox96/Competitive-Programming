#include <iostream>

using namespace std;

int getSingle(int a[], int n)  
{  
    int result=0,x,sum;
    for(int i=0;i<32;i++){
        sum=0;
        x=1<<i;
        for(int j=0;j<n;j++){
            if(a[j]&x){
                sum++;
            }
        }
        if(sum%3!=0){
            result|=x;
        }
    }
    return result;
}

int main() {

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Element occuring once: "<<getSingle(a,n)<<endl;
	return 0;

}