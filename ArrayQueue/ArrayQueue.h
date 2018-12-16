#pragma once

#include <array>

class List
{
	array<int,10> m_data;
	array<int, 10>::iterator m_head;
public:
	List() :m_data({0}) {}
	~List() {}

	virtual bool push(const int data) = 0;
	virtual bool pop() = 0;
	
	bool delete_all();
	bool is_block_full();
	bool is_block_empty();
	void print_all();
};

class Queue : public List
{
public:
	Queue() : List() {}
	~Queue() {}
	
	virtual bool push(const int data);
	virtual bool pop();
};