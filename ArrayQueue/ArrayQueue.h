#pragma once

#include <array>

struct Block
{
	std::array<int, 10> data;
	Block* next_block;
};

class List
{
	Block* m_head_block;
	array<int, 10>::iterator m_head_data;
public:
	List() :m_head_block(nullptr) {}
	~List() {}

	virtual bool push(const int data) = 0;
	virtual bool pop() = 0;
	virtual void delete_all() = 0;
	virtual bool is_block_full() = 0;
	virtual bool is_block_empty() = 0;
	
	void print_all();
};

class Queue : public List
{
public:
	Queue() : List() {}
	~Queue() {}
	
	virtual bool push(const int data);
	virtual bool pop();
	virtual void delete_all();
	virtual bool is_block_full();
	virtual bool is_block_empty();
	virtual void print_all();
};