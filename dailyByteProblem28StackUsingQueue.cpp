// Design a class to implement a stack using only a single queue. Your class, QueueStack, should support the following stack methods: push() (adding an item), pop() (removing an item), peek() (returning the top value without removing it), and empty() (whether or not the stack is empty).
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
class QueueStack
{
public:
	queue<int> qs;
	void push(int val) {
		int n = qs.size();
		qs.push(val);
		while (n--) {
			int val = qs.front();
			qs.pop();
			qs.push(val);
		}
	}
	bool isEmpty() {
		return qs.empty();
	}
	void pop() {
		if (!qs.empty()) {
			qs.pop();
		}
	}
	int peek() {
		return qs.front();
	}
};
int main()
{
	quickstart();
	QueueStack *quees = new QueueStack();
	quees->push(5);
	quees->push(6);
	cout << quees->peek() << endl;
	quees->pop();
	quees->push(7);
	cout << quees->peek() << endl;
	quees->push(8);
	quees->pop();
	quees->push(9);
	cout << quees->peek() << endl;
	return 0;
}