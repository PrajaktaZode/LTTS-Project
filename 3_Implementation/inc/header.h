#ifndef __HEADER_H__
#define __HEADER_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inst.c"
//#include "reg.c"
typedef struct Players
{
    char Name[50];
    char branch[20];
    char college[50];
} Player;
Player p;

int score_pos(int s1);
int score_neg(int s2);
int final_score(int m1, int m2, int m3);
void instructions(); 
void Register();
#endif