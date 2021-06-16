// Given a non-empty linked list, return the middle node of the list. If the linked list contains an even number of elements, return the node closer to the end.


// 1->2->3->null, return 2
// 1->2->3->4->null, return 3
// 1->null, return 1


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
	void push(int data) {
		Node *temp = new Node(data);
		if (head == NULL) {
			head = temp;
		} else {
			Node *temp1 = head;
			while (temp1->next != NULL) {
				temp1 = temp1->next;
			}

			temp1->next = temp;

		}
	}
	void traverse() {
		Node *temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
};

Node *getMiddleNode(List *l) {
	Node *slow = l->head;
	Node *fast = l->head;
	bool x = true;

	while (fast != NULL) {
		fast = fast->next;
		if (!x) {
			slow = slow->next;
		}
		x = !x;
	}
	return slow;
}

int main()
{
	quickstart();
	int n;
	cin >> n;
	int temp;
	List *l = new List();
	while (n--) {
		cin >> temp;
		l->push(temp);
	}


	Node *mid = getMiddleNode(l);
	cout << mid->data;
	return 0;
}