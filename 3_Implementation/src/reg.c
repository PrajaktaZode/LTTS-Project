//function to Register

#include "header.h"

void Register()
{
    int num = 0;
    char string[6];
    char id[6] = {0};

    char flag;

start:
    printf("\n\nEnter your registration ID to login : ");
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
                printf("\n\nlog in successful\n");
                break;
            }
        }
    }

    fclose(registration);

    if (num == 0)
    {
        printf("\nYou have to register first to login\n");

        printf("\nPress 'R' to register and press 'Q' to quit\n");
        scanf("%c", &flag);

        if (flag == 'Q' || flag == 'q')
        {
            exit(-1);
        }

        else if (flag == 'R' || flag == 'r')
        {
            puts("\nEnter your Name: ");
            gets(p.Name);
            gets(p.Name);
            puts("\nEnter your Branch: ");
            gets(p.branch);
            puts("\nEnter your College Name: ");
            gets(p.college);
            puts("\n----Details Captured----");


            // For registration of a student
            registration = fopen("registration.txt", "r");
            while (fscanf(registration, "%s", string) == 1)
            {
            }

            int x = atoi(string);
            x = x + 1;
            itoa(x, string, 10);
            printf("\nThank You ! Successfully Registered ! \n");
            printf("\nYour registration ID is : %d\n", x);
            fclose(registration);

            registration = fopen("registration.txt", "a");
            fputs("\n", registration);
            fputs(string, registration);
            fclose(registration);

            goto start;
        }
    }
}
