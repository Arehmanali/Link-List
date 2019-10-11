#pragma once
#include "cNode.h"
class List
{
	cNode* headNode;
	cNode* currentNode;
	cNode* lastcurrentNode;
	int size;
public:
	List();
	void insert(int n);
	void insertAtBegin(int n);
	void insertAtLast(int n);
	void update(int n);
	void deleteNode();
	void printAll();
	void search();
	void insertNewAfter(int n);
	void insertAfter(int n);
	void sum();
	int get();
	int getSize();
	void start();
	void move();
	void reverseNode();
	void sorting();
	~List();
};



