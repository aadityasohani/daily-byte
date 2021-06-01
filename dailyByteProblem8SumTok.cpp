// This question is asked by Google. Given an array of integers, return whether or not two numbers sum to a given target, k.
// Note: you may not sum a number with itself.

// Ex: Given the following...

// [1, 3, 8, 2], k = 10, return true (8 + 2)
// [3, 9, 13, 7], k = 8, return false
// [4, 2, 6, 5, 2], k = 4, return true (2 + 2)


#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
#define u_set unordered_set
#define testfor(T) ll T; cin>>T; while(T--)
using namespace std;
void quickstart()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0);
}

bool searchBin(int *arr, int k, int s, int e) {
	while (s <= e) {
		int m = s + (e - s) / 2;
		if (arr[m] == k) {
			return true;
		} else if (arr[m] < k) {
			s = m + 1;
		} else {
			e = m - 1;
		}
	}
	return false;
}
bool sumToK(int *arr, int n, int k) {
	sort(arr, arr + n);

	for (int i = 0; i < n - 1; i++) {
		if (searchBin(arr, k - arr[i], i + 1, n - 1)) {
			return true;
		}
	}
	return false;
}
int main()
{
	quickstart();
	int n = 0;
	int k = 0;
	cin >> n >> k;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	if (sumToK(arr, n, k)) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}
	return 0;
}