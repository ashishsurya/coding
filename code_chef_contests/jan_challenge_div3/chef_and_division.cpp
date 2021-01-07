#include <bits/stdc++.h>

using namespace std;

int maxContests()
{
	int N, K, D;
	cin >> N >> K >> D;
	int arr[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int total_problems = 0;
	for (int i = 0; i < N; i++)
	{
		total_problems += arr[i];
	}
	int max_contest = 0;
	while (max_contest <= D)
	{
		if (total_problems / K == 0)
			return max_contest;
		else
		{
			max_contest += total_problems / K;
			total_problems = total_problems % K;
		}
	}
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		cout << maxContests() << "\n";
	}
	return 0;
}
