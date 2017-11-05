//
// Created by 이재현 on 2017. 9. 20..
//

#ifndef LAB_2_2_MLIST_H
#include <stdbool.h>
/* struct. major information for each student.*/
typedef struct _major_node{
    char major [30];
    int score;
    struct major_node *next_mnode;
} major_node;

typedef major_node* major_Nptr;

typedef struct _majorListType{
    int majorCnt;
    major_Nptr major_Head;
} majorListType;

/* struct type for student list. */
typedef struct _students_node{
    char studentName[21];
    double avg ;
    majorListType* majorList;
    struct students_node *next_student;
} students_node;

typedef students_node* students_Nptr;

typedef struct _studentListType{
    int studentCnt;
    students_Nptr student_Head;
} studentListType;

void Init(studentListType *Lptr);
void readCSVfile_And_MakeMultiList(studentListType *Lptr, char *filePath);
void setScore(studentListType *Lptr, char *name,char *majorName, int score);
void setAverageScorePerStu(studentListType *Lptr);

void dispList(studentListType *Lptr);
void dispAvgPerStudent(studentListType *Lptr);
void dispAvgPerMajor(studentListType *Lptr);

#endif //LAB_2_2_MLIST_H
