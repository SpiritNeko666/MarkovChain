#ifndef INT_STACK_H
#define INT_STACK_H
#include Node.h;


class Intstack{
    private:
        Node * top;
    public:
        IntStack(int firstvalue * top);
        void push(int value);
        int pop();
        int peek();
}







#endif