//  Given a potentially cyclical linked list where each value is unique, return the node at which the cycle starts. If the list does not contain a cycle, return null.

// Ex: Given the following linked lists...

// 1->2->3, return null
// 1->2->3->4->5->2 (5 points back to 2), return a reference to the node containing 2
// 1->9->3->7->7 (7 points to itself), return a reference to the node containing 7

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
				cout << temp1->data << " => ";
				temp1 = temp1->next;
			}
			cout << temp1->data << " => ";

			temp1->next = temp;
			cout << temp->data << " => ";
			if (node_num != -1) {
				temp1 = head;
				cout << endl << endl;
				while (node_num--) {
					cout << temp1->data << " => ";
					temp1 = temp1->next;
				}
				temp->next = temp1;
			}

		}
		cout << endl;
	}
};

Node* containsCycle(List *l) {
	Node *slow = l->head;
	Node *fast = l->head;
	bool x = false;
	while (fast != NULL) {
		fast = fast->next;
		slow = x ? slow->next : slow;
		x = !x;
		if (fast == slow) {
			slow = l->head;
			while (slow != fast) {
				slow = slow->next;
				fast = fast->next;
			}
			return slow;
		}
	}
	return NULL;
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

	Node *result = containsCycle(l);

	if (result != NULL) {
		cout << result->data << endl;
	} else {
		cout << "NO CYCLES" << endl;
	}

	return 0;
}