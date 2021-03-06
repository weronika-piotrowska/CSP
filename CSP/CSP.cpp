// CSP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Node.h"
#include "Square.h"
#include "CSPProblem.h"
#include "LatinSquare.h"
#include "ColoringGraph.h"
#include <iostream>

using namespace std;

int main()
{
	//0 - kwadrat łaciński
	//1 - kolorowanie grafu
	//2 - problem N-hemanów
	//CSPProblem(int type, int size, int size_domain)
	CSPProblem problem(0, 5, 5);
	problem.runBT();
	cout << problem.print();
	system("pause");
    return 0;
}

