// Create a class CallCounter that tracks the number of calls a client has made within the last 3 seconds. Your class should contain one method, ping(int t) that receives the current timestamp (in milliseconds) of a new call being made and returns the number of calls made within the last 3 seconds.
// Note: you may assume that the time associated with each subsequent call to ping is strictly increasing.

// Ex: Given the following calls to ping…

// ping(1), return 1 (1 call within the last 3 seconds)
// ping(300), return 2 (2 calls within the last 3 seconds)
// ping(3000), return 3 (3 calls within the last 3 seconds)
// ping(3002), return 3 (3 calls within the last 3 seconds)
// ping(7000), return 1 (1 call within the last 3 seconds)

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
class CallCounter
{
public:
	queue<int> calls;
	int ping(int timeStamp) {
		while (!calls.empty() && calls.front() < timeStamp - 3000) {
			calls.pop();
		}
		calls.push(timeStamp);
		return calls.size();
	}
};
int main()
{
	quickstart();
	CallCounter *c = new CallCounter();
	cout << c->ping(1) << endl;
	cout << c->ping(300) << endl;
	cout << c->ping(3000) << endl;
	cout << c->ping(3002) << endl;
	cout << c->ping(7000) << endl;
	return 0;
}