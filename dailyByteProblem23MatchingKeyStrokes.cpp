// Given two strings s and t, which represents a sequence of keystrokes, where # denotes a backspace, return whether or not the sequences produce the same result.

// Ex: Given the following strings...

// s = "ABC#", t = "CD##AB", return true
// s = "como#pur#ter", t = "computer", return true
// s = "cof#dim#ng", t = "code", return false


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
string formFinalString(string s) {
	stack<char> stringStack;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '#' && !stringStack.empty()) {
			stringStack.pop();
		} else {
			stringStack.push(s[i]);
		}
	}

	string ans = "";
	while (!stringStack.empty()) {
		ans = ans + stringStack.top();
		stringStack.pop();
	}
	return ans;
}
int main()
{
	quickstart();
	string s1, s2;
	cin >> s1 >> s2;
	string ss1 = formFinalString(s1);
	string ss2 = formFinalString(s2);
	if (ss1 == ss2) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}
	return 0;
}