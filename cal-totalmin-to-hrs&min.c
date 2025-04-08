// Question: The program that takes minutes as input and display into hours and minutes (c language)
#include<stdio.h>
main()
{	
    int totalminutes, hours, minutes;
    printf("Enter total minutes: ");
    scanf("%d", &totalminutes);
    printf("totalminutes: %d \n", totalminutes);
    hours = totalminutes / 60;
    printf("hours: %d \n", hours);
    minutes = totalminutes - (hours * 60);  
    printf("minutes: %d \n", minutes);
    return 0;
}
