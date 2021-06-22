// Given two arrays of numbers, where the first array is a subset of the second array, return an array containing all the next greater elements for each element in the first array, in the second array. If there is no greater element for any element, output -1 for that number.

// Ex: Given the following arrays…

// nums1 = [4,1,2], nums2 = [1,3,4,2], return [-1, 3, -1] because no element in nums2 is greater than 4, 3 is the first number in nums2 greater than 1, and no element in nums2 is greater than 2.
// nums1 = [2,4], nums2 = [1,2,3,4], return [3, -1] because 3 is the first greater element that occurs in nums2 after 2 and no element is greater than 4.

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
	int *arr1 = new int[n];
	int *arr2 = new int[m];
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}

	for (int i = 0; i < m; i++) {
		cin >> arr2[i];
	}

	map<int, int> finalVals;
	stack<int> maxims;


	for (int i = m - 1; i >= 0; i--) {
		while (!maxims.empty() && maxims.top() < arr2[i]) {
			maxims.pop();
		}
		finalVals[arr2[i]] = maxims.empty() ? -1 : maxims.top();
		maxims.push(arr2[i]);
	}


	for (int i = 0; i < n; i++) {
		arr1[i] = finalVals[arr1[i]];
		cout << arr1[i] << " ";
	}
	cout << endl;
	return 0;
}