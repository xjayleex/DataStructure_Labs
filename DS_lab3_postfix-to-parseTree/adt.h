//
// Created by 이재현 on 2017. 10. 28..
//
#ifndef DS_LAB3_POSTFIX_TO_PARSETREE_ADT_H
#define DS_LAB3_POSTFIX_TO_PARSETREE_ADT_H
/* ADTs for transforming infix to postfix */
#define MAX 100

typedef struct _stackType{
    int top;
    int size;
    int Stack[MAX];
}stackType;
void infix_to_postfix(char *infix, char *postfix , stackType *Sptr);
void init_exp_stack(stackType *Sptr);
int exp_stack_push(int value, stackType *Sptr);
int exp_stack_pop(stackType *Sptr);
void print_exp_stack(stackType *Sptr);
int get_exp_stack_top(stackType *Sptr);
int is_exp_stack_empty(stackType *Sptr);
int is_operator(int ch);
int precedence(int op);

int is_postfix_legal(char *str);

typedef struct _node {
    int key;
    struct _node *left;
    struct _node *right;
} node;


void init_tree(void);
node *make_parse_tree(char *postfix);


#endif //DS_LAB3_POSTFIX_TO_PARSETREE_ADT_H
