#include <iostream>
#include <string>
// #include <cmath>

using namespace std;

int lcs(string s1, string s2) {

	int l1=s1.length(), l2=s2.length();
	int dp[l1 + 1][l2 + 1];
	int i,j;

	for(i=0;i<=l1;i++) { 

        for (j = 0; j <= l2; j++) { 

	        if (i == 0 || j == 0)  
	            dp[i][j] = 0;  
	      
	        else if (s1[i - 1] == s2[j - 1])  
	            dp[i][j] = dp[i - 1][j - 1] + 1;  
	      
	        else
	            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);  
	    }  
    }

    return dp[l1][l2];

}

int main() {

	string s1, s2;
	cin>>s1>>s2;
	cout<<"Longest common subsequence is: "<<lcs(s1, s2)<<endl;
	return 0;

}