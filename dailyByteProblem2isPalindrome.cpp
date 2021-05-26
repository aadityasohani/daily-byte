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



inline bool isNotSpecial(char x) {
	return (x - 'a' >= 0 && x - 'a' <= 25) || (x - 'A' >= 0 && x - 'A' <= 25);
}

string formSuitableString(string s) {
	string ans = "";

	for (int i = 0; i < s.length(); i++) {
		if (isNotSpecial(s[i])) {
			ans.push_back(s[i]);
		}
	}
	return ans;
}


bool isPalindrome(string s) {
	int i = 0;
	int j = s.length() - 1;
	while (i < j) {
		if (!(s[i] == s[j] || abs(s[i] - s[j]) == 'a' - 'A')) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}
int main()
{
	quickstart();
	string s;
	getline(cin, s, '\n');

	string st = formSuitableString(s);

	bool result = isPalindrome(st);

	result ? cout << "true" << endl : cout << "false" << endl;
	return 0;
}