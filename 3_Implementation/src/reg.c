#include "header.h"
typedef struct Players
{
    //char name[20];
    char Name[50];
    char branch[20];
    //int age;
    char college[50];
} Player;
Player p;

void Register()
{
    int num = 0;
    char string[6];
    char id[6] = {0};

    char flag;

start:
    printf("Enter your registration ID to login : ");
    gets(id);

    FILE *registration = fopen("registration.txt", "r");
    if (registration == NULL)
    {
        printf("Error file missing\n");
        exit(-1);
    }

    while (fscanf(registration, "%s", string) == 1)
    {
        if (strstr(string, id) != 0)
        {
            num++;
            if (num == 1)
            {
                printf("log in successful\n");
                break;
            }
        }
    }

    fclose(registration);

    if (num == 0)
    {
        printf("You have to register first to login\n");

        printf("Press 'R' to register and press 'Q' to quit\n");
        scanf("%c", &flag);

        if (flag == 'Q' || flag == 'q')
        {
            exit(-1);
        }

        else if (flag == 'R' || flag == 'r')
        {
            printf("Enter your Name,Branch and College : ");
            gets(p.Name);
            gets(p.Name);
            gets(p.branch);
            gets(p.branch);
            gets(p.college);
            puts("check");


            // For registration of a student
            registration = fopen("registration.txt", "r");
            while (fscanf(registration, "%s", string) == 1)
            {
            }

            int x = atoi(string);
            x = x + 1;
            itoa(x, string, 10);
            printf("\nThank You ! Successfully Registered ! \n");
            printf("Your registration ID is : %d\n", x);
            fclose(registration);

            registration = fopen("registration.txt", "a");
            fputs("\n", registration);
            fputs(string, registration);
            fclose(registration);

            goto start;
        }
    }
}
