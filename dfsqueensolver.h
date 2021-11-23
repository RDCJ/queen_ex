#ifndef DFSQUEENSOLVER_H
#define DFSQUEENSOLVER_H
#include "queensolver.h"
#include "queenstate.h"

class DFSQueenSolver : public QueenSolver
{
public:
    DFSQueenSolver(int size);
    ~DFSQueenSolver();
    void solve();
};

#endif // DFSQUEENSOLVER_H
