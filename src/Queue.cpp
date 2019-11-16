#include "Queue.hpp"

// Description
// 	- Default constructor to set the maxSize of the Queue to a default value of 100.
// Preconditions
//  - None.
// Postconditions
// 	- The Queue is now empty, and given a maxSize of 100.
Queue::Queue() {
	maxSize = 100;
}

// Description
// 	- Constructor to set the maxSize of the Queue to an integer value.
// Preconditions
//  - x must be a valid integer value.
//  - x cannot be less than 1.
// Postconditions
// 	- maxSize is now set to the x value.
Queue::Queue(int x) {
	if (x <= 0)
		throw "Queue size cannot be less than 1.";
	maxSize = x;
}

// Description
// 	- Function to add a new Customer to the queue.
// Preconditions
//  - Queue must exist.
//  - Queue must not be full.
// Postconditions
// 	- The queue is changed and newCustomer is added to the top of the queue.
//  - Throws an exception if the Queue is full.
void Queue::enqueue(Customer* newCust) {
	if (isFullQueue())
		throw "push error";
	push_back(newCust);
}

// Description
// 	- Function to remove the front element of the queue.
// Preconditions
//  - Queue must exist.
//  - Queue must not be empty.
// Postconditions
// 	- The queue is changed and the front element is removed from the queue.
//  - Throws an exception if the queue is empty.
//  - Must delete the popped Customer.
void Queue::dequeue() {
	if (!isEmptyQueue()) {
		pop_front();
	} else
		throw "Cannot remove from an empty queue";
}

// Description
// 	- Function to return the front/first Customer of the queue.
// Preconditions
//  - Queue must exist.
//  - Queue must not be empty.
// Postconditions
// 	- Returns the front Customer of the queue.
//  - Throws an exception if the queue is empty.
Customer* Queue::front() {
	if (isEmptyQueue())
		throw "The stack is now empty, cannot pop anymore.\n";
	return head->data;
}

// Description
// 	- Function to determine whether the queue is empty.  Returns a boolean value.
// Preconditions
//  - Queue must exist.
//  - Queue must not be full.
// Postconditions
// 	- Returns true if the queue is empty.
//  - Returns false if the queue is not empty.
bool Queue::isEmptyQueue() {
	if (head == nullptr)
		return true;
	else
		return false;
}

// Description
// 	- Function to determine whether the queue is full.  Returns a boolean value.
// Preconditions
//  - Queue must exist.
// Postconditions
// 	- Returns true if the queue is full.
//  - Returns false if the queue is not full.
bool Queue::isFullQueue() {
	if (size() >= maxSize)
		return true;
	else
		return false;
}

Queue::~Queue() {

}
