#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include <array>

class List
{
protected:
	std::array<int, 10> data;
	std::array<int, 10>::iterator m_front;
public:
	List() : m_front(data.begin()) {}
	~List() {}

	virtual bool push(const int data) = 0;
	virtual bool pop() = 0;
	
	bool is_full();
	bool is_empty();
	bool delete_all();
	void print_all();

};

class Queue : public List
{
	std::array<int, 10>::iterator m_rear;
public:
	Queue() : List(), m_rear(data.end()) {}
	~Queue() {}
	
	virtual bool push(const int data) ;
	virtual bool pop() ;

	int front();

};

#endif