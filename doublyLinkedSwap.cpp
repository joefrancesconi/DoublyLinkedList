/**
Joe Francesconi
CPSC 2120
Swapping nodes in a doubly linked list
**/

#include "doublyLinkedSwap.h"

//p and afterp are pointers to the nodes to be swapped.
void swapWithNext(Node * p){
    if (p == nullptr || p->next == nullptr){
        return;
    }
    if (p->prev == nullptr || p->next->next == nullptr){
        return;
    }
    
    Node * afterp = p->next;
    Node * nextTemp = p->next->next;
    Node * prevTemp = p->prev;
    
    p->next = nextTemp;
    
    afterp->next = p;
    afterp->prev = prevTemp;
    
    p->prev = prevTemp;
    p->prev = afterp;
    
    prevTemp->next = afterp;
    
    nextTemp->prev = p;
}