#ifndef __HEADER_H__
#define __HEADER_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inst.c"
//#include "Registration.c"
typedef struct Players
{
    //char name[20];
    char Name[50];
    char branch[20];
    //int age;
    char college[50];
} Player;
Player p;

int score_pos(int s1);
int score_neg(int s2);
//int score_pos_r2(int s3);
//int score_neg_r2(int s4);
int final_score(int m1, int m2, int m3);
void instructions(); 
void Register();
#endif