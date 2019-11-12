#include <iostream>
#include "Customer.hpp"
#include "LinkedList.hpp"
#include "Queue.hpp"
using namespace std;

int main() {
	Queue *myQueue = new Queue(5);
	Customer *newCust = nullptr;

	if (myQueue->isEmptyQueue())
		cout << "The queue is confirmed to be empty." << endl;

	try {
		myQueue->dequeue();
	}
	catch(const char *errorMess) {
		cout << errorMess << endl;
	}

	for (int i = 1; i < 6; i++) {
		newCust = new Customer();
		newCust->setID(i);
		try {
			myQueue->enqueue(newCust);
		}
		catch (const char *errorMess) {
			cout << errorMess << endl;
		}
	}

	if(myQueue->isFullQueue()) {
		cout << "Queue is confirmed to be full." << endl;
	}


		for (int i = 1; i < 5; i++) {
			try {
				cout << myQueue->front()->getID();
				myQueue->dequeue();
				cout << endl;
			}
			catch (const char *error) {
				cout << error << endl;
			}

		}

	cout << myQueue->front()->getID();

	delete myQueue;

	return 0;
}
