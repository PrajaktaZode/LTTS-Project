//This is main.c
#include <header.h>
//#include "Registration.c"


int score_pos(int s1)
{
    s1 = s1 + 4;
    return s1;
}

int score_neg(int s2)
{
    s2 = s2 - 1;
    return s2;
}

int final_score(int m1, int m2, int m3)
{
    return m1 + m2 + m3;
}
// Registration

void display()
{
    printf("\n\n\n\t\t\t\t Welcome to the Assessment!!!\n ");
    printf("\t\t\t\t -------------------------\n\n\n");
    printf("**********************************************************************************************\n");
    printf("\t\t "
           "Here are a few Instructions before you begin the assessment"
           ":\n");
    printf("\t\t   Register yourself before taking up the assessment. \n");
    //printf("\t\t <<  Press 'R' to Register.             >>\n");
    printf("\t\t <<  Press 'S' to Start the Assessment. >>\n");
    printf("\t\t <<  Press 'I' to Read the Instructions.>>\n");
    printf("**********************************************************************************************\n");
}
int main()
{
    int *score;
    int r1 = 5, r2 = 5;
    int t_score = 0;
    int r1_score, r2_score, r3_score = 0;
    int index_p = 1, index_a = 1;
    char var;
    // char ch;
    //scanf("%c", &ch);
    //int v;
    Register();
    score = (int *)malloc(sizeof(int));
    //display();

    //if (getchar() == 'I')

    system("CLS");
    instructions();
    if (getchar() == 0)
        system("CLS");

    if (getchar() == 10)
        system("CLS");

    printf("\n\n\n\n\n\n\t\t\t\t*********************    SECTION 1: APTITUDE    *********************\n");

    getchar();
    if (getchar() == 10)
        system("CLS");
    while (r1--)
    {
        switch (index_p)
        {
        case 1:
            printf("1. A bag contains 2 red, 3 green and 2 blue balls. Two balls are drawn at random. What is the probability that none of the balls drawn is blue?\n");
            printf("A. 10/21           B. 11/21\n");
            printf("C. 2/7             D. 5/7\n");

            printf("Enter the answer\n");

            var = getchar();

            if (toupper(var) == 'A')

            {
                printf("Correct Answer\n");
                t_score = score_pos(t_score);
                getchar();
            }
            else
            {
                printf("Wrong Answer\n");
                t_score = score_neg(t_score);
                getchar();
            }

            index_p++;
            if (getchar() == 10)
                system("CLS");
            break;

        case 2:
            printf("2. The cost price of 20 articles is the same as the selling price of x articles. If the profit is 25%, then the value of x is:\n");
            printf("A. 15          B. 25\n");
            printf("C. 16          D. 18\n");

            printf("Enter the answer\n");

            var = getchar();

            if (toupper(var) == 'C')

            {
                printf("Correct Answer\n");
                t_score = score_pos(t_score);
                getchar();
            }
            else
            {
                printf("Wrong Answer\n");
                t_score = score_neg(t_score);
                getchar();
            }

            index_p++;
            if (getchar() == 10)
                system("CLS");
            break;

        case 3:
            printf("3. The length of the bridge, which a train 130 metres long and travelling at 45 km/hr can cross in 30 seconds, is:\n");
            printf("A. 200 m      B. 254 m\n");
            printf("C. 240 m      D. 245 m\n");

            printf("Enter the answer\n");

            var = getchar();

            if (toupper(var) == 'D')

            {
                printf("Correct Answer\n");
                t_score = score_pos(t_score);
                getchar();
            }
            else
            {
                printf("Wrong Answer\n");
                t_score = score_neg(t_score);
                getchar();
            }

            index_p++;
            if (getchar() == 10)
                system("CLS");
            break;

        case 4:
            printf("4. A can do a work in 15 days and B in 20 days. If they work on it together for 4 days, then the fraction of the work that is left is :\n");
            printf("A. 1/4          B. 8/15 \n");
            printf("C. 1/10         D. 7/15 \n");

            printf("Enter the answer\n");

            var = getchar();

            if (toupper(var) == 'B')

            {
                printf("Correct Answer\n");
                t_score = score_pos(t_score);
                getchar();
            }
            else
            {
                printf("Wrong Answer\n");
                t_score = score_neg(t_score);
                getchar();
            }

            index_p++;
            if (getchar() == 10)
                system("CLS");
            break;

        case 5:
            printf("5. The compound interest on Rs. 30,000 at 7% per annum is Rs. 4347. The period (in years) is:\n");
            printf("A. 2           B. 3\n");
            printf("C. 4           D. 5\n");

            printf("Enter the answer\n");

            var = getchar();

            if (toupper(var) == 'A')

            {
                printf("Correct Answer\n");
                t_score = score_pos(t_score);
                getchar();
            }
            else
            {
                printf("Wrong Answer\n");
                t_score = score_neg(t_score);
                getchar();
            }
            r1_score = t_score;
            index_p++;
            if (getchar() == 10)
                system("CLS");
            break;

        default:
            printf("Out of bounds\n");
        }
    }

    printf("Section 1 : Completed!\n");
    printf("Candidate's Score in Aptitude : %d\n", r1_score);

    printf("\n\n\n\n\n\n\t\t\t\t*********************    SECTION 2: VERBAL ABILITY    *********************\n");

    if (getchar() == 10)
        system("CLS");
    t_score = 0;
    while (r2--)
    {

        switch (index_a)
        {
        case 1:
            printf("1. Choose the word which best expresses the meaning of the given word.\n CORPULENT\n");
            printf("A. Lean       B. gaunt\n");
            printf("C. Obese      D. Emaciated\n");
            printf("Enter the answer\n");

            var = getchar();
            if (toupper(var) == 'C')
            {
                printf("Correct Answer\n");
                t_score = score_pos(t_score);
                getchar();
            }
            else
            {
                printf("Wrong Answer\n");
                t_score = score_neg(t_score);
                getchar();
            }

            index_a++;
            if (getchar() == 10)
                system("CLS");
            break;

        case 2:
            printf("2. Change the voice : \nWho is creating this mess?\n");
            printf(" A. Who has been created this mess?\n");
            printf(" B. By whom has this mess been created?\n");
            printf(" C. By whom this mess is being created? \n");
            printf(" D. By whom is this mess being created?\n");
            printf("Enter the answer\n");

            var = getchar();

            if (toupper(var) == 'D')

            {
                printf("Correct Answer\n");
                t_score = score_pos(t_score);
                getchar();
            }
            else
            {
                printf("Wrong Answer\n");
                t_score = score_neg(t_score);
                getchar();
            }

            index_a++;
            if (getchar() == 10)
                system("CLS");
            break;

        case 3:
            printf("3. The miser gazed ...... at the pile of gold coins in front of him.\n");
            printf("A. admiringly        B. avidly \n");
            printf("C. earnestly         D. thoughtfully \n");

            printf("Enter the answer\n");

            var = getchar();

            if (toupper(var) == 'B')

            {
                printf("Correct Answer\n");
                t_score = score_pos(t_score);
                getchar();
            }
            else
            {
                printf("Wrong Answer\n");
                t_score = score_neg(t_score);
                getchar();
            }

            index_a++;
            r2_score = t_score;
            if (getchar() == 10)
                system("CLS");
            break;

        case 4:
            printf("Change the voice : \nI told him that he was not working hard.\n");
            printf("A. I said to him, "
                   "You are not working hard."
                   "\n");
            printf("B. I told to him, "
                   "You are not working hard."
                   "\n");
            printf("C. I said, "
                   "You are not working hard."
                   "\n");
            printf("D. I said to him, "
                   "He is not working hard."
                   "\n");

            printf("Enter the answer\n");

            var = getchar();

            if (toupper(var) == 'A')

            {
                printf("Correct Answer\n");
                t_score = score_pos(t_score);
                getchar();
            }
            else
            {
                printf("Wrong Answer\n");
                t_score = score_neg(t_score);
                getchar();
            }

            index_a++;
            r2_score = t_score;
            if (getchar() == 10)
                system("CLS");
            break;

        case 5:
            printf("5. Despite his best efforts to conceal his anger ......\n");
            printf("A. people came to know that he was annoyed\n");
            printf("B. he could succeed in doing it easily\n");
            printf("C. we could detect that he was very happy\n");
            printf("D. he failed to give us an impression of his agony\n");

            printf("Enter the answer\n");

            var = getchar();

            if (toupper(var) == 'A')

            {
                printf("Correct Answer\n");
                t_score = score_pos(t_score);
                getchar();
            }
            else
            {
                printf("Wrong Answer\n");
                t_score = score_neg(t_score);
                getchar();
            }

            index_a++;
            r2_score = t_score;
            if (getchar() == 10)
                system("CLS");
            break;

        default:
            printf("Out of bounds\n");
        }
    }

    printf("Section 2: Verbal Ability Completed!\n");
    printf("Player Score in Verbal Ability : %d\n", r2_score);

    printf("\n\n\n\n\n\n\t\t\t\t*********************    SECTION 3: FUNDAMENTALS OF C    *********************\n");

    if (getchar() == 10)
        system("CLS");

    printf("1. Which of the following is not a valid variable name declaration?\n");
    printf("A. int _a3;        B. int a_3;\n");
    printf("C. int 3_a;        D. int _3a;\n");

    printf("Enter the answer\n");

    var = getchar();

    if (toupper(var) == 'C')

    {
        printf("Correct Answer\n");
        r3_score += 4;
        getchar();
    }
    else
    {
        printf("Wrong Answer\n");
        r3_score -= 1;
        getchar();
    }

    if (getchar() == 10)
        system("CLS");
    printf("2. Which of the following is not a reserved keyword for C?\n");
    printf("A. auto        B. default\n");
    printf("C. main        D. case\n");

    printf("Enter the answer\n");

    var = getchar();

    if (toupper(var) == 'C')

    {
        printf("Correct Answer\n");
        r3_score += 4;
        getchar();
    }
    else
    {
        printf("Wrong Answer\n");
        r3_score -= 1;
        getchar();
    }

    if (getchar() == 10)
        system("CLS");
    printf("Which is the only function all C programs must contain?\n");
    printf("A. start()        B. main()\n");
    printf("C. getch()        D. printf()\n");

    printf("Enter the answer\n");

    var = getchar();

    if (toupper(var) == 'B')

    {
        printf("Correct Answer\n");
        r3_score += 4;
        getchar();
    }
    else
    {
        printf("Wrong Answer\n");
        r3_score -= 1;
        getchar();
    }

    printf("Section 3: Technical Completed!\n");
    printf("Player Score in Finals : %d\n", r3_score);

    *score = final_score(r1_score, r2_score, r3_score);
    getchar();
    if (getchar() == 10)
        system("CLS");

    printf("********************************FINAL SCORESHEET******************************************\n");
    printf("Player Name\t\t  Round 1\t Round 2\t Round 3\t Total Score\n");
    printf("%s         \t\t  %d     \t %d\t    \t %d\t\t %d\n", p.Name,r1_score, r2_score, r3_score, *score);
    printf("******************************************************************************************\n");

    if (*score > 10)
    {
        printf("congo");
    }
    //puts(p.branch);
    free(score);

    return 0;
}
