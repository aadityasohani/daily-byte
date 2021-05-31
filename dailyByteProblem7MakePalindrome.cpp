// Given a string and the ability to delete at most one character, return whether or not it can form a palindrome.
// Note: a palindrome is a sequence of characters that reads the same forwards and backwards.

// Ex: Given the following strings...

// "abcba", return true
// "foobof", return true (remove the first 'o', the second 'o', or 'b')
// "abccab", return false


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
	string s;
	cin >> s;
	char alpha[26] = {0};
	for (int i = 0; i < s.length(); i++) {
		alpha[s[i] - 'a'] += 1;
	}

	int odds = 0;


	for (int i = 0; i < 26; i++) {
		if (alpha[i] % 2) {
			odds += 1;
		}
	}

	if (odds <= 2) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}
	return 0;
}