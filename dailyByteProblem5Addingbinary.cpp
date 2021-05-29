/*Given two binary strings (strings containing only 1s and 0s) return their sum (also as a binary string).
Note: neither binary string will contain leading 0s unless the string itself is 0*/


// "100" + "1", return "101"
// "11" + "1", return "100"
// "1" + "0", return  "1"




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


char addBits(char a, char b, int &carry) {
	int a1 = a - '0';
	int b1 = b - '0';


	int ans = (a1 + b1 + carry) % 2;
	carry = (a1 + b1 + carry) / 2;
	return (char)(ans + '0');
}


string binAdd(string s1, string s2) {
	int i = s1.length() - 1;
	int j = s2.length() - 1;
	int carry = 0;
	string ans = "";

	while (i >= 0 && j >= 0) {
		char x = addBits(s1[i], s2[j], carry);
		ans = x + ans;
		i--;
		j--;
	}

	while (i >= 0) {
		char x = addBits(s1[i], '0', carry);
		ans = x + ans;
		i--;
	}
	while (j >= 0) {
		char x = addBits(s2[j], '0', carry);
		ans = x + ans;
		j--;
	}

	if (carry != 0) {
		ans = '1' + ans;
	}



	return ans;
}



int main()
{
	quickstart();
	string s1, s2;
	cin >> s1 >> s2;

	string s3 = binAdd(s1, s2);
	cout << s3 << endl;
	return 0;
}