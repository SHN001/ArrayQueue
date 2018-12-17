#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include <array>

template <typename T1>
class List
{
protected:
	std::array<T1, 10> data;
	std::array<T1,10>::iterator m_front;
	std::array<T1, 10>::iterator m_rear;
public:
	List():m_front(data.begin()),m_rear(data.begin()) {}
	~List() {}

	virtual bool push(const T1 data) = 0;
	virtual bool pop() = 0;
	
	bool is_full();
	bool is_empty();
	bool reset_all();
	void print_all();

};

template <typename T1>
class Queue : public List< T1>
{
public:
	Queue() : List() {}
	~Queue() {}
	
	virtual bool push(const T1 data) ;
	virtual bool pop() ;

	T1 front();

};

#endif