// Given two strings representing sentences, return the words that are not common to both strings (i.e. the words that only appear in one of the sentences). You may assume that each sentence is a sequence of words (without punctuation) correctly separated using space characters.

// Ex: given the following strings...

// sentence1 = "the quick", sentence2 = "brown fox", return ["the", "quick", "brown", "fox"]
// sentence1 = "the tortoise beat the haire", sentence2 = "the tortoise lost to the haire", return ["beat", "to", "lost"]
// sentence1 = "copper coffee pot", sentence2 = "hot coffee pot", return ["copper", "hot"]









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
	string sentence1;
	string sentence2;
	getline(cin, sentence1);
	cin.sync();
	getline(cin, sentence2);
	cin.sync();
	stringstream ss(sentence1);
	set<string> s1;
	set<string> s2;
	set<string> ans;


	string intermediate;
	while (ss >> intermediate) {
		s1.insert(intermediate);
	}


	stringstream ss2(sentence2);

	while (ss2 >> intermediate) {

		s2.insert(intermediate);
		if (s1.find(intermediate) == s1.end()) {

			ans.insert(intermediate);
		}
	}

	set<string>::iterator it;
	for (it = s1.begin(); it != s1.end(); it++) {
		if (s2.find(*it) == s2.end()) {
			ans.insert(*it);
		}
	}

	for (it = ans.begin(); it != ans.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}