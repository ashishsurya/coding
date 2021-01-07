#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for(int i=0;i<arr.size();i++) {
		cin >> arr[i];
	}
	int factor = arr[k-1];
	int result = 0;
	for(int x:arr) {
		if(x >= factor && x > 0) {
			result++;
		}
	}
	cout << result;
	return 0;
}