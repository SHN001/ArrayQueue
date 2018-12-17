#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include <array>

class List
{
public:
	List() {}
	virtual ~List() {}
	
	virtual bool is_full() = 0;
	virtual bool is_empty() = 0;
	virtual bool reset_all() = 0;
	virtual void print_all() = 0;
	virtual bool push(const int data) = 0;
	virtual bool pop() = 0;
};

class Queue : public List
{
	std::array<int, 10> m_data;
	std::array<int, 10>::iterator m_front;
	std::array<int, 10>::iterator m_rear;
public:
	Queue() :m_front(m_data.begin()), m_rear(m_data.begin()) {}
	~Queue() {}
	
	virtual bool is_full() override;
	virtual bool is_empty()  override;
	virtual bool reset_all() override;
	virtual void print_all() override;
	virtual bool push(const int data) override;
	virtual bool pop() override ;
	
	int front();
};

#endif