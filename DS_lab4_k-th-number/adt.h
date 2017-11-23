//
// Created by 이재현 on 2017. 11. 12..
//

#ifndef DS_LAB4_K_TH_NUMBER_ADT_H
#define DS_LAB4_K_TH_NUMBER_ADT_H
#define N 1000000
int my_rand(int base, int range);
void swap(int *this, int *that);
int* randPermuteGenerator(int *array);
void printInputNumbers(int *ptr);

void quick_sort(int a[], int n);
int split(int a[], int n);


void max_upheap(int *a, int k);
void max_downheap(int *a, int n, int k);
void min_upheap(int *a, int k);
void min_downheap(int *a, int n, int k);
#endif //DS_LAB4_K_TH_NUMBER_ADT_H
