// Given two strings s and t return whether or not s is an anagram of t.
// Note: An anagram is a word formed by reordering the letters of another word.

// Ex: Given the following strings...

// s = "cat", t = "tac", return true
// s = "listen", t = "silent", return true
// s = "program", t = "function", return false


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
	string s1, s2;
	cin >> s1 >> s2;
	int *arr = new int[256]();

	if (s1.length() != s2.length()) {
		cout << "NO" << endl;
		return 0;
	}
	for (int i = 0; i < s1.length(); i++) {
		arr[s1[i]] += 1;
	}

	for (int i = 0; i < s2.length(); i++) {
		arr[s2[i]] -= 1;
	}

	bool isAnagram = true;

	for (int i = 0; i < 256; i++) {
		if (arr[i] != 0) {
			isAnagram = false;
			break;
		}
	}

	if (isAnagram) {
		cout << "Yes" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}