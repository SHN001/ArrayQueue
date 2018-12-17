#include <iostream>
#include <thread>
#include "ArrayQueue.h"

using namespace std;

int main()
{

	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);
	q.push(8);
	q.push(9);
	q.push(10);

	q.print_all();

	cout << "pop front : " << q.front() << endl;

	q.push(11);

	q.print_all();

	cout << "!!!!!pop!!!!!" << endl;


	q.pop();

	q.print_all();

	cout << "pop front : " << q.front() << endl;

	q.reset_all();

	q.print_all();

	/*
	std::thread th1 = std::thread([&]() {

		for (int i = 0; i < 100; ++i)
			std::cout << "H";
	});

	std::thread th2 = std::thread([&]() {

		for (int i = 0; i < 100; ++i)
			std::cout << "E";
	});
	th1.join();
	th2.join();
	*/

	return 0;
}