#include <iostream>
using namespace std;
int queue[100], n = 100, front = -1, rear = -1;
void Insert() {
	int val;
	if (rear == n - 1)
		cout << "Queue Overflow" << endl;
	else {
		if (front == -1)
			front = 0;
		cout << "Insert the element in queue : " << endl;
		cin >> val;
		rear++;
		queue[rear] = val;
	}
}
void Delete() {
	if (front == -1 || front > rear) {
		cout << "Queue Underflow ";
		return;
	}
	else {
		cout << "Element deleted from queue is : " << queue[front] << endl;
		front++;;
	}
}
void Display() {
	if (front == -1)
		cout << "Queue is empty" << endl;
	else {
		cout << "Queue elements are : ";
		for (int i = front; i <= rear; i++)
			cout << queue[i] << " ";
		cout << endl;
	}
}
void TOP()
{
	cout << "The top element is :" << endl;
	cout << queue[rear] << endl;
}
void empty()
{
	if(rear ==-1) 
	{
		cout << "Queue is empty " << endl;
		
	}
	else
	{
		cout << "Quee is not empty" << endl;
	}
}
int main() {
	int ch;
	cout << "1) Insert element to queue" << endl;
	cout << "2) Delete element from queue" << endl;
	cout << "3) Top element from queue " << endl;
	cout << "4)  Display all the elements of queue" << endl;
	cout << "5) Empty or not" << endl;
	cout << "6) Exit" << endl;
	do {
		cout << "Enter your choice : " << endl;
		cin >> ch;
		switch (ch) {
		case 1: Insert();
			break;
		case 2: Delete();
			break;
		case 3: TOP();
			break;
		case 4: Display();
			break;
		case 5: empty();
			break;
		case 6: cout << "Exit" << endl;
			break;
		default: cout << "Invalid choice" << endl;
		}
	} while (ch != 4);
	system("pause");
}

