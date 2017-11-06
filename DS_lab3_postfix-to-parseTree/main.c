#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <memory.h>
#include "adt.h"
node *head;
node *tail;
node *node_stack[MAX];
int node_stack_top;
void init_node_stack(void){
    node_stack_top = -1;
}
node *pop(){
    if(node_stack_top < 0){
        printf("\n Node Stack underflow.\n");
    }
    return node_stack[node_stack_top--];
}

void push(node *pnode){
    if( node_stack_top > MAX -1 ){
        printf("\n Node Stack Overflow.\n");
    }
    node_stack[++node_stack_top] = pnode;
}

/* Not used function. */
void init_tree(void){
    head = (node*)malloc(sizeof(node));
    tail = (node*)malloc(sizeof(node));
    head->left = tail;
    head->right = tail;
    tail->left = tail;
    tail->right = tail;
}

node *make_parse_tree(char *postfix){
    node *t;
    while(*postfix){ // if the pointer value is not null.
        while (*postfix == ' ')
            postfix++;
        t = (node*)malloc(sizeof(node));
        t->key = *postfix;
        t->left = tail;
        t->right = tail;
        if ( is_operator(*postfix)) {
            t->right = pop();
            t->left = pop();
        }
        push(t);
        postfix++;
    }
    return pop();
}

void visit(node *t){
    printf("%c ",t->key);
}

void preorder_traverse(node *t){
    if(t!=tail){
        visit(t);
        preorder_traverse(t->left);
        preorder_traverse(t->right);
    }
}
void inorder_traverse(node *t){
    if(t!=tail){
        inorder_traverse(t->left);
        visit(t);
        inorder_traverse(t->right);
    }
}
void postorder_traverse(node *t) {
    if (t != tail) {
        postorder_traverse(t->left);
        postorder_traverse(t->right);
        visit(t);
    }
}
double eval_parse_tree(node *t) {
    char temp[2];
    double left = 0;
    double right = 0;
    double result = 0;
    if (t == NULL) {
        return 0;
    }
    switch (t->key) {
        case '+':
        case '-':
        case '*':
        case '/':
            left = eval_parse_tree(t->left);
            right = eval_parse_tree(t->right);

            if (t->key == '+')
                result = left + right;
            else if (t->key == '-')
                result = left - right;
            else if (t->key == '*')
                result = left * right;
            else if (t->key == '/')
                result = left / right;
            break;
        default:
            memset(temp, 0, sizeof(temp));
            temp[0] = t->key;
            result = atof(temp);
            break;
    }
    return result;
}




int main() {
    double result = -1;
    stackType *Sptr = (stackType *)malloc(sizeof(stackType));
    char *src = (char *)malloc(sizeof(char)*100);
    char *dst = (char *)malloc(sizeof(char)*100);

    printf("Enter the infix Expression : ");
    scanf("%s",src);
    infix_to_postfix(src,dst,Sptr);
    printf("This is a postfix expression for input string : %s\n",dst);
    printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    init_tree();
    head = make_parse_tree(dst);
    printf("1.preorder traverse : ");
    preorder_traverse(head); printf("\n");
    printf("2.inorder traverse : ");
    inorder_traverse(head); printf("\n");
    printf("3.postorder traverse : ");
    postorder_traverse(head); printf("\n");
    printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    result = eval_parse_tree(head);
    printf("Result : %.2lf\n",result);


    return 0;
}