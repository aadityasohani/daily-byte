// Design a class, MovingAverage, which contains a method, next that is responsible for returning the moving average from a stream of integers.
// Note: a moving average is the average of a subset of data at a given point in time.

// Ex: Given the following series of events...

// // i.e. the moving average has a capacity of 3.
// MovingAverage movingAverage = new MovingAverage(3);
// m.next(3) returns 3 because (3 / 1) = 3
// m.next(5) returns 4 because (3 + 5) / 2 = 4
// m.next(7) = returns 5 because (3 + 5 + 7) / 3 = 5
// m.next(6) = returns 6 because (5 + 7 + 6) / 3 = 6

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

class MovingAverage
{
public:
	int size;
	int sum;
	queue<int> vals;
	int now;
	MovingAverage(int size) {
		this->size = size;
		this->sum = 0;
		this->now = 0;
	}

	double next(int val) {
		if (now < size) {
			vals.push(val);
			sum += val;
			now++;
		} else {
			sum -= vals.front();
			vals.pop();
			sum += val;
		}
		return (double)sum / (double)now;
	}

};
int main()
{
	quickstart();
	MovingAverage *ma = new MovingAverage(3);
	cout << ma->next(3) << endl;
	cout << ma->next(5) << endl;
	cout << ma->next(7) << endl;
	cout << ma->next(6) << endl;
	return 0;
}