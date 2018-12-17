#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include <array>

class List
{
protected:
	std::array<int, 10> m_data;
	std::array<int,10>::iterator m_front;
	std::array<int, 10>::iterator m_rear;
public:
	List():m_front(m_data.begin()),m_rear(m_data.begin()) {}
	virtual ~List() {}
	
	bool is_full();
	bool is_empty();
	bool reset_all();
	void print_all();

	virtual bool push(const int data) = 0;
	virtual bool pop() = 0;

};

class Queue : public List
{
public:
	Queue() : List() {}
	~Queue() {}
	
	virtual bool push(const int data) override;
	virtual bool pop() ;
	int front();
};

#endif