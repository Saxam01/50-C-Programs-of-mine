/*write program that read from 1 to 7 and according it should display monday to sunday using switch case.*/
# include<stdio.h>

int main()
{
    
    int day;

    printf("Enter a number between 1 to 7: \n");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
            printf("monday\n");
            break;
        case 2:
            printf("tuesday\n");
            break;
        case 3:
            printf("wendesday\n");
            break;
        case 4:
            printf("thursday\n");
            break;
        case 5:
            printf("friday\n");
            break;
        case 6:
            printf("saturday\n");
            break;
        case 7:
            printf("sunday\n");
            break;

            default:
            printf("invalid input\n");
           

    }
    printf("\n");

    printf("HAve a nice day\n");


            return 0;

    
}