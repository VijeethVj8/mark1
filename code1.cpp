#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int getMaximumSum(int a[], int n, int x)
	{
 
    		// Initialize dp with -1
   		int dp[n][3];
    		memset(dp, -1, sizeof dp);
 
    		// Iterate from every position and find the
    		// maximum sum which is possible
    		int maxi = 0;
    		for (int i = 0; i < n; i++)
        	maxi = max(maxi, func(i, 0, a, dp, n, x));
	} 
    	return maxi;
}
