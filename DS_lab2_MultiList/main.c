#include <stdio.h>
#include <stdlib.h>
#include "mList.h"
int main() {
    char path [100] = "/Users/ijaehyeon/Desktop/MyDocuments/gitblog/DataStructure_Labs/DS_lab2_MultiList/input.csv";
    /* input file path */
    studentListType *Lptr = (studentListType *)malloc(sizeof(studentListType));

    readCSVfile_And_MakeMultiList(Lptr,path);


    setScore(Lptr,"LeeJaeHyun","DataStructure",100);
    setScore(Lptr,"LeeJaeHyun","ComputerArchitecture",90);
    setScore(Lptr,"LeeJaeHyun","CircuitTheory",30);
    setScore(Lptr,"LeeJaeHyun","JavaProgramming",60);
    setScore(Lptr,"AhnJiYoung","CircuitTheory",30);
    setScore(Lptr,"AhnJiYoung","DataStructure",20);
    setScore(Lptr,"Jannabi","MachineLearning",30);
    setScore(Lptr,"Jannabi","JavaProgramming",40);
    setScore(Lptr,"Jannabi","EmbeddedSystem",50);
    setAverageScorePerStu(Lptr);
    printf("\n\n\n\n");

    dispList(Lptr);

    return 0;
}