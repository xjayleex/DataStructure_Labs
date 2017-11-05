//
// Created by 이재현 on 2017. 10. 16..
//

#ifndef STACKAPPLICATION_IN_TO_POSTFIX_STACK_AND_TREE_H
#define STACKAPPLICATION_IN_TO_POSTFIX_STACK_AND_TREE_H
typedef struct _parseTree_node{
    char data;
    struct parseTree_node *left;
    struct parseTree_node *right;
} parseTree_node;

typedef struct _stack_node{
    struct parseTree_node *pTnode;
    struct stack_node *next_node;
} stack_node;

typedef stack_node* stack_Nptr;
typedef parseTree_node* ptree_Nptr;
void push(stack_Nptr *Top,)
#endif //STACKAPPLICATION_IN_TO_POSTFIX_STACK_AND_TREE_H
