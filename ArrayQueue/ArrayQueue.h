#pragma once

#include <array>

struct Block
{
	std::array<int, 10> data;
	std::array<int, 10>::iterator data_itr;
	Block* next_block;
};

class List
{
protected:
	Block* m_head_block;
public:
	List() :m_head_block(nullptr) {}
	~List() {}

	virtual bool push(const int data) = 0;
	virtual bool pop() = 0;
	
	bool delete_all();
	bool is_list_full();
	bool is_list_empty();
	void print_all();

};

class Queue : public List
{
	Block* m_rear_block;
public:
	Queue() : List(),m_rear_block(nullptr) {}
	~Queue() {}
	
	virtual bool push(const int data);
	virtual bool pop();

	int front();
};