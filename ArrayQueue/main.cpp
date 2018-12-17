#include <iostream>
#include "ArrayQueue.h"

using namespace std;

int main()
{

	Queue<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);
	q.push(8);
	q.push(9);

	q.print_all();

	q.push(10);

	q.print_all();

	q.push(11);

	q.print_all();

	return 0;
}