// Given a string s containing only lowercase letters, continuously remove adjacent characters that are the same and return the result.

// Ex: Given the following strings...

// s = "abccba", return ""
// s = "foobar", return "fbar"
// s = "abccbefggfe", return "a"

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
	stack<char> stringStack;
	for (int i = 0; i < s.length(); i++) {
		if (stringStack.empty() || stringStack.top() != s[i]) {
			stringStack.push(s[i]);
		} else {
			stringStack.pop();
		}
	}

	string ans = "";
	while (!stringStack.empty()) {
		ans = ans + stringStack.top();
		stringStack.pop();
	}

	cout << ans << endl;
	return 0;
}