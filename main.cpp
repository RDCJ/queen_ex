#include <iostream>
#include <stack>
#include "dfsqueensolver.h"
#include "bfsqueensolver.h"

using namespace std;

int main()
{
    DFSQueenSolver solver(8);
    solver.solve();
    cout<<"Number of answers: "<<solver.getansNum()<<endl;
    return 0;
}

