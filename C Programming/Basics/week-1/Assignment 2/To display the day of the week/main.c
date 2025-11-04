
#include <stdio.h>

int main()
{
    int day;
    
    printf("1 for Monday: \n2 for Tuesday: \n3 for Wednesday: \n4 for Tursday: \n5 for Friday: \n6 for Saturday: \n7 for Sunday");
    printf("\nEnter your entry: ");
    scanf("%d",&day);
    
    switch(day){
        case 1:
        printf("Day is Monday");
        break;
        
        case 2:
        printf("Day is Tuesday");
        break;
        
        case 3:
        printf("Day is Wednesday");
        break;
        
        case 4:
        printf("Day is Tursday");
        break;
        
        case 5:
        printf("Day is Friday");
        break;
        
        case 6:
        printf("Day is Saturday");
        break;
        
        case 7:
        printf("Day is Sunday");
        break;
    }
    
    return 0;
}
