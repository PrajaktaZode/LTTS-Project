
//This is main.c


#include "header.h"

typedef struct Players
{
    char name[20];
    char branch[20];
    int age;
    char college[50];
} Player;


int score_pos_r1(int s1)
{
    s1 = s1 + 10;
    return s1;
}


int score_neg_r1(int s2)
{
    s2 = s2 - 2;
    return s2;
}


int score_pos_r2(int s3)
{
    s3 = s3 + 5;
    return s3;
}


int score_neg_r2(int s4)
{
    s4 = s4 - 1;
    return s4;
}


int final_score(int m1, int m2, int m3)
{
    return m1 + m2 + m3;
}


int main()
{
    int *score;
    int r1 = 5, r2 = 3;   
    int t_score = 0;
    int r1_score, r2_score, r3_score=0;
    int index_p = 1, index_a = 1;
    char var;
    //int v;

    score = (int*) malloc (sizeof(int));
    printf("\t\t\t\t Welcome to quizz!!!\n ");
    printf("\t\t\t\t ----------------------\n ");
    printf("**********************************************************************************************\n");
    printf("\t\t ""Here are a few Instructions before you begin the game"":\n");
    printf("\t\t << The questions that you will be quizzed are based on the \n"); 
    printf("\t\t   latest and emerging technolgy trends of this decade >>\n");
    printf("\t\t  << There are 3 rounds in the game namely 1. Prelims 2. Advanced\n");
    printf("\t\t\t\t 3. Finals >>\n");
    printf("\t\t << Each Round is an elimination round and the scores at every stage will be tabulated >>\n ");
    printf("\t\t << The Player to clear all the rounds wins the game! >>\n");
    printf("\t\t << May the best player win!!!!! >>\n");
    printf("**********************************************************************************************\n");        
    
    
    printf("Press Enter to Continue\n");

    if(getchar()==10)
    system("CLS");
    
    Player p;
    
    printf("Enter your name, branch, age and college\n");
    scanf("%s %s %d %s", p.name, p.branch, &p.age, p.college);
    printf("***********************************************************************************************\n");
    printf("--------------------------------------Section 1: Aptitude-----------------------------------------\n");
    printf("***********************************************************************************************\n");
    getchar();


    if(getchar()==10)
    system("CLS");

    while(r1--)
    {
    switch (index_p)
        {
          case 1:
                    printf("1. The manufacturing elements provide _________ manufacturing processes\n");
                    printf("A. Automated           B. Intelligent\n");
                    printf("C. Streamlined         D. Automated, Intelligent, and Streamlined\n");
                    
                    printf("Enter the answer\n");
                    
                    var = getchar();

                    if(toupper(var)=='D')
                    
                    {
                        printf("Correct Answer\n");
                        t_score = score_pos_r1(t_score);
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                        t_score = score_neg_r1(t_score);
                        getchar();
                    }

                     index_p++;
                     if(getchar()==10)
                     system("CLS");
                     break;
       
        case 2:
                    printf("2. __________ robot allows a programmer to teach robot paths and positions\n");
                    printf("A. Self monitored stop           B. Power and force limiting\n");
                    printf("C. Hand guiding                  D. Speed and separation monitoring\n");
                    
                    printf("Enter the answer\n");
                   
                    var = getchar();

                    if(toupper(var)=='C')
                    
                    {
                        printf("Correct Answer\n");
                        t_score = score_pos_r1(t_score);
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                       t_score =  score_neg_r1(t_score);
                        getchar();
                    }

                     index_p++;
                     if(getchar()==10)
                     system("CLS");
                     break;
        
        case 3:
                    printf("3. Why are nanoparticles used in the field of medicine?\n");
                    printf("A. Easier Manufacuring Process      B. Small Size\n");
                    printf("C. Cheaper                          D. High surface to volume ratio\n");
                    
                    printf("Enter the answer\n");
                    
                    var = getchar();

                    if(toupper(var)=='D')
                    
                    {
                        printf("Correct Answer\n");
                       t_score=  score_pos_r1(t_score);
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                       t_score =  score_neg_r1(t_score);
                        getchar();
                    }

                     index_p++;
                     if(getchar()==10)
                     system("CLS");
                     break;

        case 4:
                    printf("4. In which one of the following phases, IT Architecture Development came?\n");
                    printf("A. Strategy Phase           B. Planning Phase\n");
                    printf("C. Deployment Phase         D. Development Phase\n");
                    
                    printf("Enter the answer\n");
                    
                    var = getchar();

                    if(toupper(var)=='B')
                    
                    {
                        printf("Correct Answer\n");
                        t_score = score_pos_r1(t_score);
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                       t_score =  score_neg_r1(t_score);
                        getchar();
                    }

                     index_p++;
                     if(getchar()==10)
                     system("CLS");
                     break;      

        case 5:
                    printf("5. Which one of the following can be considered as the example of Front-end\n");
                    printf("development?\n");
                    printf("A. Web Browser           B. Google Search Engine\n");
                    printf("C. Cisco Metapod         D. Amazon Web Services\n");
                    
                    printf("Enter the answer\n");
                   
                    var = getchar();

                    if(toupper(var)=='A')
                    
                    {
                        printf("Correct Answer\n");
                       t_score =  score_pos_r1(t_score);
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                        t_score = score_neg_r1(t_score);
                        getchar();
                    }
                        r1_score = t_score;
                     index_p++;
                     if(getchar()==10)
                     system("CLS");
                     break;        
        
        default:
                    printf("Out of bounds\n");
          }
    }
          
   printf("Round 1: Prelims Complete!\n");
   printf("Player Score in Prelims : %d\n", r1_score); 


    printf("***********************************************************************************************\n");
    printf("--------------------------------------Round 2: Advanced-----------------------------------------\n");
    printf("***********************************************************************************************\n");
    

    t_score=0;
    if(getchar()==10)
    system("CLS");

    while(r2--)
    {
    switch (index_a)
        {
          case 1:
                    printf("1. 5G will offer a latency of one millisecond or lower. What does latency refer to?\n");
                    printf("A. The time it takes to reboot a connection\n");
                    printf("B. The length of time devices will automatically connect to the network\n");
                    printf("C. The delay between an input and a desired outcome\n");
                    printf("D. The speed of detecting a disruption to the network\n");
                    
                    
                    printf("Enter the answer\n");
                    
                    var = getchar();

                    if(toupper(var)=='C')
                    {
                        printf("Correct Answer\n");
                        t_score = score_pos_r2(t_score);
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                        t_score = score_neg_r2(t_score);
                        getchar();
                    }

                     index_a++;
                     if(getchar()==10)
                     system("CLS");
                     break;
       
        case 2:
                    printf("2. It is a mediated environment which creates the sensation in a user of being\n");
                    printf(" present in a (physical) surrounding?\n");
                    printf("A. WWW           B. VR\n");
                    printf("C. HMD           D. GUI\n");
                    
                    printf("Enter the answer\n");
                   
                    var = getchar();

                    if(toupper(var)=='B')
                    
                    {
                        printf("Correct Answer\n");
                        t_score = score_pos_r2(t_score);
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                        t_score = score_neg_r2(t_score);
                        getchar();
                    }

                     index_a++;
                     if(getchar()==10)
                     system("CLS");
                     break;
        
        case 3:
                    printf("3. A bitcoin address collision happens when 2 different payments are made at the\n");
                    printf("same time to the same bitcoin address\n");
                    printf("A. True           B. False\n");
                    
                    printf("Enter the answer\n");
                    
                    var = getchar();

                    if(toupper(var)=='B')
                    
                    {
                        printf("Correct Answer\n");
                       t_score =  score_pos_r2(t_score);
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                        t_score = score_neg_r2(t_score);
                        getchar();
                    }

                     index_a++;
                     r2_score = t_score;
                     if(getchar()==10)
                     system("CLS");
                     break;

                default:
                    printf("Out of bounds\n");
          }
    }

            
   printf("Round 2: Advanced Complete!\n");
   printf("Player Score in Advanced : %d\n", r2_score); 

   printf("***********************************************************************************************\n");
    printf("--------------------------------------Round 3: Finals!-----------------------------------------\n");
    printf("***********************************************************************************************\n"); 


    
    if(getchar()==10)
    system("CLS");
    printf("1. What is the name of the computer program that contains the distilled knowledge of an expert?\n");
                    printf("A. Data base management system          B. Management information System\n");
                    printf("C. Expert system           D. Artificial intelligence\n");
                    
                    printf("Enter the answer\n");
                    
                    var = getchar();

                    if(toupper(var)=='C')
                    
                    {
                        printf("Correct Answer\n");
                        r3_score += 7;
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                        r3_score -=7;
                        getchar();
                    }
                        
                     printf("Round 3: Finals Complete!\n");
                     printf("Player Score in Finals : %d\n", r3_score); 

    *score = final_score(r1_score,r2_score,r3_score);
    getchar(); 
    if(getchar()==10)
    system("CLS");

    printf("********************************FINAL SCORESHEET******************************************\n");
    printf("Player Name\t\t  Round 1\t Round 2\t Round 3\t Total Score\n");
    printf("%s         \t\t  %d     \t %d\t    \t %d\t\t %d\n", p.name,r1_score,r2_score, r3_score, *score);
    printf("******************************************************************************************\n");
    free(score);    
    return 0;

}           