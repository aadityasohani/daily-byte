//  Given a string representing your stones and another string representing a list of jewels, return the number of stones that you have that are also jewels.

// Ex: Given the following jewels and stones...

// jewels = "abc", stones = "ac", return 2
// jewels = "Af", stones = "AaaddfFf", return 3
// jewels = "AYOPD", stones = "ayopd", return 0


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
    string s1, s2;
    cin >> s1 >> s2;
    map<char, int> jwels;

    for (auto c : s2) {
        jwels[c] += 1;
    }
    int ans;
    for (auto c : s1) {
        if (jwels.find(c) != jwels.end()) {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}