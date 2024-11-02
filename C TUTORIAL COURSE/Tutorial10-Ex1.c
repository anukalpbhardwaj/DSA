#include <stdio.h>

int main()
{
    int gift ;

    printf("Enter your gift\n");
    scanf("%d", &gift);
    printf("you have entered %d as your gift\n",gift);

    if (gift<=15)      
    {
        printf("You are passed in maths");
    }
    else if (gift<=16)
    {
        printf("you are passed in Science");
    }
    
    else if (gift<=45)
    {
        printf("you are passed in maths as well as science");
    }
    else
    {
        printf("You are fail");
    }
    
    
    
    
    




    return 0;
}
