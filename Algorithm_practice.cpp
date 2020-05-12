// Algorithm_practice.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
int getvalue(int);
int input[100] = { 0 };
int dp[100] = { 0 };
int main()
{
	int n = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	scanf("%d", &n);
	int m = 0;

	for (int i = 0; i < n; i++) {

		scanf("%d", &m);
		printf("%d\n", getvalue(m));
		
	}
	// third commit
}
int getvalue(int n) {
	if (n <= 3) {
		return dp[n];
	}
	else {
		if (dp[n] == 0) {
			dp[n] = getvalue(n-1)+ getvalue(n - 2) + getvalue(n - 3);
			return dp[n];
		}
		else {
			return dp[n];
		}
	}
}
