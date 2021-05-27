//  Given a string representing the sequence of moves a robot vacuum makes, return whether or not it will return to its original position. The string will only contain L, R, U, and D characters, representing left, right, up, and down respectively.

// Ex: Given the following strings...

// "LR", return true
// "URURD", return false
// "RUULLDRD", return true


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


	int up = 0;
	int down = 0;
	int left = 0;
	int right = 0;


	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'U') {
			up += 1;
		} else if (s[i] == 'D') {
			down += 1;
		} else if (s[i] == 'L') {
			left += 1;
		} else {
			right += 1;
		}
	}


	if (up - down == 0 && right - left == 0) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}
	return 0;
}