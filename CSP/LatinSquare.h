#pragma once
#include "Square.h"
class LatinSquare
{
public:
	LatinSquare();
	LatinSquare(int square_size, int d_size);
	~LatinSquare();

	bool check(Node *node);
	void deleteValuesFromDomiein();

	Square square;
	int domain_size;
	stack<Node*> stackOfNodes;
};

