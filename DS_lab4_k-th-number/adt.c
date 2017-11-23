//
// Created by 이재현 on 2017. 11. 12..
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include "adt.h"


int* randPermuteGenerator(int *array){
    srand((unsigned)time(NULL));
    int i;
    int *origin= array;

    for(i = 0 ; i < N ; i++){
        array[i] = i + 1;
    }
    for(i = 1 ; i < N ; i ++){
        swap(&array[i],&array[my_rand(0,i)]);
    }

    printf("Generated %d numbers.\n",N);
    printInputNumbers(origin);
    return origin;
}
int my_rand(int base, int range){ //  base + ( 0 ~ N )
    int rand_value = rand() % (range+1) + base  ;
    return rand_value;
}

void swap(int *this, int *that){
    int temp = *this;
    *this = *that;
    *that = temp;
}

void printInputNumbers(int *ptr){
    int cnt = 0;
    printf("The numbers in array is as follow.\n");
    printf("The value below is -- Index [0]~[4] ... ... Index[%d]~[%d] --\n",N-6,N-1);
    while(*ptr){
        if(cnt < 5 || cnt > N - 6){
            printf("%d ",*ptr);
        }
        else if( cnt == 5 || cnt == N-6){
            printf("... ");
        }
        cnt++;
        ptr++;
    }
    printf("-------------------------------------------------------------------\n");
    printf("\n");

}

/***** Sort Algorithms *****/

void quick_sort(int a[], int n) {
    int i;
    if (n > 1) { /* n>1일 경우에 정렬 수행. 종료조건:n<=1*/
        i = split(a, n);
        quick_sort(a, i); /* recursive call */
        quick_sort(a+i+1, n-i-1);
    }
}

int split(int a[], int n) { // always n>1
    int v, t, i, j;
    v = a[n-1]; /* 배열의 끝값을 pivot으로 */
    i = -1;
    j = n-1;
    while (1) { /* partition */
        while(a[++i]>v);/* 자리 이동 없이 그 다음 원소로 */
        while (a[--j] < v && j > i);
        if (i >= j)
            break;
        t = a[i];
        a[i] = a[j];
        a[j] = t; /* 교환 */
    }
    t = a[i];
    a[i] = a[n-1];
    a[n-1] = t; /* 축값을 가운데로 */
    return i;
}
void max_upheap(int *a, int k) {
    int v;
    v = a[k];
    a[0] = INT_MAX; /* sentinel */
    while (a[k/2] <= v) { /* 부모 키가 작으면 삽입 */
        a[k] = a[k/2];
        k /= 2;
    }
    a[k] = v;
}

void min_upheap(int *a, int k) {
    int v;
    v = a[k];
    a[0] = INT_MIN; /* sentinel */
    while (a[k/2] >= v) { /* 부모 키가 작으면 삽입 */
        a[k] = a[k/2];
        k /= 2;
    }
    a[k] = v;
}


void max_downheap(int *a, int n, int k) {
    int i, v;
    v = a[k];
    while (k <= n/2) { /* k가 내부 노드 */
        i = k<<1; /* k*2 로 계속 증가*/
        if (i < n && a[i] < a[i+1]) i++; /* 오른자식노드 */
        if (v >= a[i]) break; /* 자식 노드보다 더 큼 */
        a[k] = a[i]; /* 자식 노드가 대체 */
        k = i;
    }
    a[k] = v;
}

void min_downheap(int *a, int n, int k) {
    int i, v;
    v = a[k];
    while (k <= n/2) { /* k가 내부 노드 */
        i = k<<1; /* k*2 로 계속 증가*/
        if (i < n && a[i] > a[i+1]) i++; /* 오른자식노드 */
        if (v <= a[i]) break; /* 자식 노드보다 더 큼 */
        a[k] = a[i]; /* 자식 노드가 대체 */
        k = i;
    }
    a[k] = v;
}