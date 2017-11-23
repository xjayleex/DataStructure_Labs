#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <time.h>
#include "adt.h"

void algo1(int *origin,int k);
void algo2(int *origin,int k);
void algo3(int *origin,int k);
void algo4(int *origin,int k);

int main() {
    int *p;
    int k=500000;
    p = (int *)malloc(sizeof(int) * N );
    // N = 1000000
    p = randPermuteGenerator(p);
    printf("Finding %d-th largest number ... \n", k);
    algo1(p,k);
    algo2(p,k);
    algo3(p,k);
    algo4(p,k);
    return 0;
}

void algo1(int *origin, int k){
    float gap;
    time_t startTime = 0 , endTime = 0;
    int *p = (int *)malloc(sizeof(int) * N );
    memcpy(p,origin,N * sizeof(int));

    startTime=clock();

    quick_sort(p,N);
    printf("(Algorithm1)K-th largest num is : %d\n",p[k-1]);

    endTime=clock();
    gap=(float)(endTime-startTime)/(CLOCKS_PER_SEC);
    printf("(Algorithm1) The elapsed time : %f sec\n", gap);
    printf("---------------------------------------------------\n");

    free(p);
}

void algo2(int *origin, int k){
    float gap;
    time_t startTime = 0 , endTime = 0;

    int i=0,j=0,h=0,temp;
    int *p = (int *)malloc(sizeof(int) * N );
    int *to_k_arr = (int *)malloc(sizeof(int) * k);
    memcpy( p, origin, N * sizeof(int));
    memcpy(to_k_arr, origin, k * sizeof(int));

    startTime=clock();

    quick_sort(to_k_arr,k);
    for(i = k ; i < N ; i++){
        if(p[i] > to_k_arr[k-1]){
            j = 0;
            temp = p[i];
            while(temp < to_k_arr[j])
                j++;
            for(h=k-1;h > j;h--){
                to_k_arr[h] = to_k_arr[h-1];
            }
            to_k_arr[j] = temp;
        }
    }
    printf("(Algorithm1)K-th largest num is : %d\n",to_k_arr[k-1]);

    endTime=clock();
    gap=(float)(endTime-startTime)/(CLOCKS_PER_SEC);
    printf("(Algorithm2) The elapsed time : %f sec\n", gap);
    printf("---------------------------------------------------\n");
}

void algo3(int *origin, int k){
    float gap;
    time_t startTime = 0 , endTime = 0;

    int i=0, maxval=0;
    int *p = (int *)malloc(sizeof(int) * (N+1) );
    memcpy( p+1, origin, N * sizeof(int));

    startTime=clock();

    for (i = 2; i <= N-1; i++)
        max_upheap(p, i);
    for (i = N-1 ; i > N-1-k;i--){
        maxval = p[1];
        p[1] = p[i];
        p[i] = maxval;
        max_downheap(p, i - 1, 1);
    }
    printf("(Algorithm3)K-th largest num is : %d\n",maxval);

    endTime=clock();
    gap=(float)(endTime-startTime)/(CLOCKS_PER_SEC);
    printf("(Algorithm3) The elapsed time : %f sec\n", gap);
    printf("---------------------------------------------------\n");

}

void algo4(int *origin,int k){
    float gap;
    time_t startTime = 0 , endTime = 0;

    int i=0;
    int *ptr;
    int *p = (int *)malloc(sizeof(int) * N );
    int *to_k_heap = (int *)malloc(sizeof(int) * (k+1));
    memcpy( p, origin, N * sizeof(int));
    memcpy(to_k_heap+1, origin, k * sizeof(int));

    startTime=clock();

    for (i = 2; i <= k; i++)
        min_upheap(to_k_heap, i);
    ptr = &to_k_heap[1];
    for ( i = k+1 ; i < N ; i++) {
        if (p[i] > *ptr) {
            *ptr = p[i];
            min_downheap(to_k_heap,k,1);
        }
    }

    printf("(Algorithm4)K-th largest num is : %d\n",*ptr);

    endTime=clock();
    gap=(float)(endTime-startTime)/(CLOCKS_PER_SEC);
    printf("(Algorithm4) The elapsed time : %f sec\n", gap);
    printf("---------------------------------------------------\n");
}

