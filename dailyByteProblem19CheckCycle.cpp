//  Given a linked list, containing unique numbers, return whether or not it has a cycle.
// Note: a cycle is a circular arrangement (i.e. one node points back to a previous node)

// Ex: Given the following linked lists...

// 1->2->3->1 -> true (3 points back to 1)
// 1->2->3 -> false
// 1->1 true (1 points to itself)

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

class Node {
public:
	int data;
	Node *next;
	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};

class List {
public:
	Node *head;
	List() {
		head = NULL;
	}
	void push(int data, int node_num) {
		Node *temp = new Node(data);
		if (head == NULL) {
			head = temp;
		} else {
			Node *temp1 = head;
			while (temp1->next != NULL) {
				temp1 = temp1->next;
			}

			temp1->next = temp;
			if (node_num != -1) {
				temp1 = head;
				while (node_num--) {
					temp1 = temp1->next;
				}
				temp->next = temp1;
			}

		}
	}
};

bool containsCycle(List *l) {
	Node *slow = l->head;
	Node *fast = l->head;
	bool x = false;
	while (fast != NULL) {
		fast = fast->next;
		slow = x ? slow->next : slow;
		x = !x;
		if (fast == slow) {
			return true;
		}
	}
	return false;
}

int main()
{
	quickstart();
	int n;
	cin >> n;
	int temp, pos;
	List *l = new List();
	while (n--) {
		cin >> temp >> pos;
		l->push(temp, pos);
	}

	if (containsCycle(l)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}