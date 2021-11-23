#include "queenstate.h"
#include <cassert>
#include <iostream>

using namespace std;

QueenState::QueenState(int size)
{
    this->_size = size;   
    this->_sln = new int[this->_size];
    for(int k=0;k<_size;k++)
    {
        _sln[k] = -1;
    }
}


QueenState::QueenState(const QueenState & st)
{
    this->_size = st._size;
    this->_sln = new int[st._size];
    for (int k=0; k<_size; k++)
        this->_sln[k] = st._sln[k];
}


QueenState::~QueenState()
{
    delete [] _sln;
}


void QueenState::placeQueen(int i, int j) {_sln[i] = j;} //将第i行的皇后放在第j列


void QueenState::removeQueen(int i) {_sln[i] = -1;} //去掉第 i 行的皇后


void QueenState::printState()//打印状态内容
{
    for (int i = 0; i<_size; i++) cout<<_sln[i] + 1<<' ';
    cout<<endl;
}


int QueenState::getCrntQueenNum()//当前棋盘上有多少个皇后
{
    int count = 0;
    for (int i=0; i<_size; i++)
        if (_sln[i] != -1) count++;
    return count;
}


bool QueenState::conflict(int i, int j)//在第i行j列放入一个新的皇后，是否与现有皇后冲突
{
    for (int k=0; k<_size; k++)
        if (_sln[k] != -1)
        {
            if (_sln[k] == j) return true;//同一列
            if (k + _sln[k] == i + j) return true;//同一斜对角线: RT->LB
            if (k - _sln[k] == i - j) return true;//同一斜对角线: LT->RB
        }
    return false;
}


bool QueenState::isTarget()
{
    if (getCrntQueenNum() == _size) return true;
    else return false;
}
