#include <iostream>

using namespace std;

int getSingle(int a[], int n)  
{  
    int ones=0, twos=0;  
  
    int common_bit_mask;  
  
    for( int i=0; i< n; i++ ) {
        twos = twos | (ones & a[i]);
        ones = ones ^ a[i];  
        common_bit_mask = ~(ones & twos);  
        ones &= common_bit_mask;  
        twos &= common_bit_mask;  

    }  
  
    return ones;  
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