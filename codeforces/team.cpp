#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	int result = 0;
	while(t--) {
		vector<int> arr(3);
		for (int i=0;i<arr.size();i++) {
			cin >> arr[i];
		}
		int sum = 0;
		for(int i=0;i<arr.size();i++){
			sum += arr[i];
		}
		if (sum > 1) {
			result++;
		}		
	}
	cout << result << "\n";
	return 0;
}
