#include "dfsqueensolver.h"
#include "queennode.h"
#include<stack>

using namespace std;

DFSQueenSolver::DFSQueenSolver(int size):QueenSolver(size)
{}

DFSQueenSolver::~DFSQueenSolver()
{}

void DFSQueenSolver::solve()
{
    stack<QueenNode> nodes;
    QueenNode  n0(this->_size);
    nodes.push(n0);//初始状态（没有皇后）入栈
    while(!nodes.empty())
    {

        QueenNode crntNode = nodes.top();
        nodes.pop();
        QueenState st = crntNode.getState();//栈顶节点出栈

        if(st.isTarget())//判断是否为最终状态
        {
            ansNumPlus();
            st.printState();
            continue;
        }

        int i = st.getCrntQueenNum();
        for (int j=0;j<this->_size;j++)
        {
           if(!st.conflict(i,j))
           {
               QueenNode child = crntNode.createChild(i,j);
               nodes.push(child);
           }
        }
    }
}

