 /*Write a program a find out given year, which is leap year or not?*/
 #include<stdio.h>

 int main()
 {
        int year;
        printf("enter a year: ");
        scanf("%d",&year);

        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            printf("%d is leep year. \n",year);
        else 
            printf("%d is not leap year. \n",year);

    return 0;
    
 }