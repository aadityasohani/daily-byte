/*Given a string, return whether or not it uses capitalization correctly. A string correctly uses capitalization if all letters are capitalized, no letters are capitalized, or only the first letter is capitalized.*/

// "USA", return true
// "Calvin", return true
// "compUter", return false
// "coding", return true


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



inline bool isCapital(char x) {
	return (x - 'A' >= 0 && x - 'A' <= 25);
}


bool allSmall(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (isCapital(s[i])) {
			return false;
		}
	}
	return true;
}
bool allCapital(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (!isCapital(s[i])) {
			return false;
		}
	}
	return true;
}


int main()
{
	quickstart();
	string s;
	cin >> s;
	if (allSmall(s)) {
		cout << "TRUE";
	} else if (allCapital(s)) {
		cout << "TRUE";
	} else if (isCapital(s[0]) && allSmall(s.substr(1))) {
		cout << "TRUE";
	} else {
		cout << "FALSE";
	}
	return 0;
}