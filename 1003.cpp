#include<iostream>

int dp[1000][2] = { 0 };
int get1(int);
int get2(int);
int main(void) {

	dp[0][0] = 1;
	dp[0][1] = 0;
	dp[1][0] = 0;
	dp[1][1] = 1;
	dp[2][0] = 1;
	dp[2][1] = 1;
	dp[3][0] = 1;
	dp[3][1] = 2;
	dp[4][0] = 2;
	dp[4][1] = 3;
	int n = 0; 
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int m;
		scanf("%d", &m);
		printf("%d %d\n", get1(m), get2(m));
		
	}

}
int get1(int n ) {
	if (n <= 3) {
		return dp[n][0];
	}
	else {
		if (dp[n][0] == 0) {
			dp[n][0] = get1(n-1) + get1(n-2);
			return dp[n][0];
		}
		else {
			return dp[n][0];
		}
	}
}
int get2(int n) {
	if (n <= 3) {
		return dp[n][1];
	}
	else {
		if (dp[n][1] == 0) {
			dp[n][1] = get2(n - 1) + get2(n - 2);
			return dp[n][1];
		}
		else {
			return dp[n][1];
		}
	}
}