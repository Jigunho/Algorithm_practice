/*#include<iostream> 
long long getValue(int);
long long dp[1000] = { 0 };
int main(void) {
	int n; 
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	scanf("%d", &n);
	printf("%d", getValue(n) % 10007);
	
}
long long getValue(int n) {
	if (n <= 3) {
		return dp[n];
	}
	else {
		if (dp[n] == 0) {
			dp[n] = getValue(n - 1) % 10007 + getValue(n - 2) % 10007;
			return dp[n];
		}
		else {
			return dp[n];
		}
	}
}*/