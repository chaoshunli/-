#include<iostream>
using namespace std;
const int N = 100000;
int b[N];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)

	{
		cin >> b[i];
	}
	int ans = 0;
	int res = -1e9;
	for (int i = 1; i <= n; i++)

	{
		if (ans < 0)ans = 0;
		ans += b[i];
		res = max(res, ans);
	}
	res = max(res, 0); //如果全为负数，则让最大字段和为0.
	cout << res;
	return 0;
}