#ifndef QUEENSOLVER_H
#define QUEENSOLVER_H


class QueenSolver
{
public:
    QueenSolver(int size);
    void ansNumPlus() {_ansNum++;};
    int getansNum() {return _ansNum;};
        //@num 皇后的个数
    ~QueenSolver();
    virtual void solve()=0;
protected:
    int _size;
    int _ansNum;
};

#endif // QUEENSOLVER_H
