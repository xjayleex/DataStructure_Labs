/* adt.c */
#include "adt.h"
#include <stdio.h>
#include <stdlib.h>

void init_exp_stack(stackType *Sptr){
    Sptr->top = -1;
    Sptr->size = sizeof(Sptr->Stack)/ sizeof(int);
}

int exp_stack_push(int value, stackType *Sptr){
    if(Sptr->top >= Sptr->size -1){
        printf("\n - STACK OVERFLOW. - \n");
        return -1;
    }
    Sptr->Stack[++Sptr->top] = value;
    return value;
}

int exp_stack_pop(stackType *Sptr){
    if(Sptr->top < 0){
        printf("\n - UNDERFLOW - \n");
        return -1;
    }
    return Sptr->Stack[Sptr->top--];
}

void print_exp_stack(stackType *Sptr){
    int i;
    printf("\n Stack Contents : Top --> Bottom\n");
    for(i = Sptr->top ; i >= 0 ; i--)
        printf("%-6d", Sptr->Stack[i]);
}

int get_exp_stack_top(stackType *Sptr){
    return (Sptr->top < 0) ? -1 : Sptr->Stack[Sptr->top];
}

int is_exp_stack_empty(stackType *Sptr){
    return (Sptr->top < 0);
}

int is_operator(int ch){
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int precedence(int op){
    if (op == '(') return 0;
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    else return 3;
}

void infix_to_postfix(char *infix, char *postfix, stackType *Sptr){// 각각 중위표기, 후위표기 배열
    init_exp_stack(Sptr);
    while (*infix) { // *infix : 현재 처리하고자 하는 문자
        if (*infix == '(') { // case 1.
            exp_stack_push(*infix, Sptr); infix++; // equal to exp_stack_push(*infix++);
        }
        else if (*infix == ')') { // case 4.
            while (get_exp_stack_top(Sptr) != '(') { // '('를 만날 때까지
                *postfix++ = exp_stack_pop(Sptr); *postfix++ = ' ';
                /*stack에서 pop하여 postfix가 가리키는 곳의 값을 바꿔줌*/
            }
            exp_stack_pop(Sptr);
            /* 위의 while문이 끝났을 때 '('는 아직 stack에 있으므로,
             * stack에서 빼줘야함. */
            infix++;
        }
        else if (is_operator(*infix)) { // case 3.
            while (!is_exp_stack_empty(Sptr) &&
                   precedence(get_exp_stack_top(Sptr))>=precedence(*infix)){
                /* *infix보다 스택 최상위값의 우선순위가 더 높을 때 동안
                 * 스택에서 pop하여 postfix 배열에 저장.*/
                *postfix++ = exp_stack_pop(Sptr); *postfix++ = ' ';
            }
            /*스택이 비었거나, *infix가 자신보다 우선순위가 낮은 연산자를 만났을 때
             * while문 탈출. 자신을 스택에 exp_stack_push*/
            exp_stack_push(*infix, Sptr);
            infix++;
        }
        else if (*infix >= '0' && *infix <= '9') { // case 4.
            do {
                *postfix++ = *infix++;
            } while (*infix >= '0' && *infix <= '9'); *postfix++ = ' ';
        }
        else infix++; }
    while (!is_exp_stack_empty(Sptr)) {
        *postfix++ = exp_stack_pop(Sptr); *postfix++ = ' ';
    }
    postfix--; *postfix = 0;
}

int is_postfix_legal(char *str){
    int f = 0;
    while (*str) {
        while (*str == ' ') str++; if (is_operator(*str))
            f--; else
            f++;
        if (f < 1) /* check situation like A+B */
            break;
        str++;
    }
    return (f == 1); /* legal if operand-operator==1 */
}


