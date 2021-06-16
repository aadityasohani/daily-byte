// Given a string only containing the following characters (, ), {, }, [, and ] return whether or not the opening and closing characters are in a valid order.

// Ex: Given the following strings...

// "(){}[]", return true
// "(({[]}))", return true
// "{(})", return false


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
	stack<char> opened;

	string s;
	cin >> s;
	bool result = true;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
			opened.push(s[i]);
		} else {
			if (s[i] == ')') {
				if (opened.empty() || opened.top() != '(') {
					result = false;
					break;
				} else {
					opened.pop();
				}
			} else if (s[i] == '}') {
				if (opened.empty() || opened.top() != '{') {
					result = false;
					break;
				} else {
					opened.pop();
				}
			} else {
				if (opened.empty() || opened.top() != '[') {
					result = false;
					break;
				} else {
					opened.pop();
				}
			}
		}
	}
	if (result && opened.empty()) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}