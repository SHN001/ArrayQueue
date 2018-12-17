#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include <array>

//¿øÇü Å¥

class List
{
protected:
	std::array<int, 10> data;
	int m_front;
public:
	List():m_front(0) {}
	~List() {}

	virtual bool push(const int data) = 0;
	virtual bool pop() = 0;
	virtual void print_all() = 0;
	virtual bool is_full() = 0;
	virtual bool is_empty() = 0;

	bool delete_all();

};

class Queue : public List
{
	int m_rear;
public:
	Queue() : List(), m_rear(0) {}
	~Queue() {}
	
	virtual bool push(const int data) ;
	virtual bool pop() ;
	virtual void print_all() = 0;

	virtual bool is_full();
	virtual bool is_empty();

	int front();

};

#endif