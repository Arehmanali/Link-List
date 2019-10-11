#pragma once
class cNode {
	int value;
public:
	cNode* nextNode;
	void setValue(int v);
	int getValue();
	void setNextNode(cNode* nn);
	cNode *getNextNode();
};
