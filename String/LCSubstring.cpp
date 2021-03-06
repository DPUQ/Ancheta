/** Finds the size of the longest common 
    substring between two strings
    Complexity: O(n*m) */

int LCSubstr(string a, string b){
	int n = a.size(), m = b.size(), ans = 0;
	int dp[n+1][m+1];
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= m; j++){
			if(i + j == 0) dp[i][j] = 0;
			else if(a[i-1] == b[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
				ans = max(ans, dp[i][j]);
			}
			else dp[i][j] = 0;
		}
	}
	return ans;
}