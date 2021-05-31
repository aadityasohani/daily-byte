// an array of strings, return the longest common prefix that is shared amongst all strings.
// Note: you may assume all strings only contain lowercase alphabetical characters.

// Ex: Given the following arrays...

// ["colorado", "color", "cold"], return "col"
// ["a", "b", "c"], return ""
// ["spot", "spotty", "spotted"], return "spot"


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

string compAndStore(string a1, string a2) {
	string ans = "";
	for (int i = 0; i < min(a1.length(), a2.length()); i++) {
		if (a1[i] == a2[i]) {
			ans += a1[i];
		} else {
			break;
		}
	}
	return ans;
}
int main()
{
	quickstart();
	vector<string> arrVec;
	string x;

	do {
		x = "";
		cin >> x;
		if (x != "") {
			arrVec.push_back(x);
		}
	} while (x.length());


	string pre = arrVec[0];
	for (int i = 1; i < arrVec.size(); i++) {
		if (pre == "") {
			break;
		}
		pre = compAndStore(arrVec[i], pre);
	}

	cout << pre << endl;
	return 0;
}