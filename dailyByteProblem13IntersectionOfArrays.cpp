// Given two integer arrays, return their intersection.
// Note: the intersection is the set of elements that are common to both arrays.

// Ex: Given the following arrays...

// nums1 = [2, 4, 4, 2], nums2 = [2, 4], return [2, 4]
// nums1 = [1, 2, 3, 3], nums2 = [3, 3], return [3]
// nums1 = [2, 4, 6, 8], nums2 = [1, 3, 5, 7], return []

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
int main()
{
	quickstart();
	int n, m;
	cin >> n >> m;
	map<int, int> arr;
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		arr[temp] += 1;
	}

	vector<int> ans;

	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (arr[temp] > 0) {
			ans.push_back(temp);
			arr[temp] -= 1;
		}
	}


	for (auto x : ans) {
		cout << x << " ";
	}

	return 0;
}