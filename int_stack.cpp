#include "int_stack.h"

void IntStack::push(int value){

    Node * newNode = new Node;
    newNode->value = value;
    newNode->next = top;
    top = newNode;
}
IntStack::IntStack(firstvalue * top){

    top = nullptr;
    count = 0;
    push(fistValue);

}

int IntStack::pop(){
    if(top!= nullptr){
    Node*newTop = top->next;
    int oldTopValue = newTop-> value;
    delete top;
    }
}
int IntStack::peek(){

    return top->value;
}