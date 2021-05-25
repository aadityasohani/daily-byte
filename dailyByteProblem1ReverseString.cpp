// Given a string, reverse all of its characters and return the resulting string.
// Ex: Given the following strings...
// “Cat”,
// return “taC”
// “The Daily Byte”,
// return "etyB yliaD ehT”
// “civic”,
// return “civic”


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

string reverse(string s) {
	int i = 0;
	int j = s.length() - 1;

	string ans = s;
	while (i < j) {
		swap(ans[i], ans[j]);
		j--;
		i++;
	}
	return ans;
}

int main()
{
	quickstart();
	string s;

	getline(cin, s, '\n');

	string ans = reverse(s);

	cout << ans << endl;
	return 0;
}