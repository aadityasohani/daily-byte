// Given a string, return the index of its first unique character. If a unique character does not exist, return -1.

// Ex: Given the following strings...

// "abcabd", return 2
// "thedailybyte", return 1
// "developer", return 0


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

int firstUnique(string s) {
	int ans = -1;
	map<char, int>chars;
	for (int i = 0; i < s.length(); i++) {
		chars[s[i]] += 1;
	}
	for (int i = 0; i < s.length(); i++) {
		if (chars[s[i]] == 1) {
			return i;
		}
	}

	return ans;
}

int main()
{
	quickstart();
	string s;
	cin >> s;
	cout << firstUnique(s) << endl;
	return 0;
}