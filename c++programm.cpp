#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct queue {
	int front = 0; 
	int rear = 0;
	int item[5];
}q;
bool full(queue &q) {
	if ((q.rear == 5 && q.front == 0) || q.front == q.rear + 1) {
		return true;
	}
	else {
		return false;
	}
}

bool empty(queue &q) {
	if (q.rear == q.front) {
		return true;
	}
	else {
		return false;
	}

}
void insert(queue &q, int number) {
	if (full(q)) {
		cout << "the queue is full" << endl;
	}
	else if (q.rear == 5 && q.front > 0) {
		q.rear = 0;   
		 q.item[q.rear]=number;
		
		
	}
	else if (q.front > q.rear) {
		q.item[++q.rear]=number;
	}
	else {
	 q.item[q.rear++] = number;	
	}

}
void remove(queue &q) {
	if (empty(q)) {
		cout << "the queue is empty" << endl;
	}
	else if (q.front == 5 && q.rear >= 0) {
		q.front == 1;
	}
	else {
	 q.front++;
	
		
	}
}
void print() {
	if (empty(q)) {
		cout << "the queue is empty" << endl;
	}
	else if (q.rear < q.front) {
		for (int y = 0; y <= q.rear; y++) {
			cout << q.item[y] << " ";
		}
		for (int x = q.front; x < 5; x++) {
			cout << q.item[x] << " ";
		}cout << endl;
	}
	else {
		for (int t = q.front; t < q.rear; t++) {
			cout << q.item[t] << " ";
		}cout << endl;
	}

}

int main() {
	cout << "1-insert an element to queue" << endl;
	cout << "2-remove an element from queue " << endl;
	cout << "3-print the elements of queue " << endl;
	cout << "4-exit" << endl;
	int choice = 0;
	while (choice != 4) {
		cout << "enter the choice: ";
		cin >> choice;
		if (choice == 1) {
			int number;
			cout << "enter the number to insert: ";
			cin >> number;
			insert(q, number);
		}if (choice == 2) {
			remove(q);
		}if (choice == 3) {
			print();
		}
	}
}