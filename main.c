//WAP to convert input time into valid hours and min
//formula: hours = minutes / 60;
//         min = minutes % 60;
#include <stdio.h>

int main()
{
    //declare variables
    int minutes, hours, min;
    printf("*************************************");
    printf("\nenter minutes");
    scanf("%d", &minutes);
    printf("\n*************************************");
   
    //computer hours and minutes
    hours = minutes / 60;
    min = minutes % 60;
    
    //display output
    printf("\n%d minutes is equal to %d hours and %d minutes", minutes, hours, min);   
}
