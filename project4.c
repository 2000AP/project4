#include <stdio.h>
int main()
{
    int n;
    printf("\n\n\t\t\tWelcome to AP Cafe : \t\t\t\n\n\n");
    printf("Todays is our Surprise Day.\n\n So lets play Game.\n\n Enter a random number from 1 to 5 and lets see what you get to eat.\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("\n\n\tFood item - Sandwich.\n");
        printf("\tPrice - Rs. 99\n\n");
        break;
    case 2:
        printf("\n\n\tFood item - Burger.\n");
        printf("\tPrice - Rs. 199\n\n");
        break;
    case 3:
        printf("\n\n\tFood item - Pizza.\n");
        printf("\tPrice - Rs. 299\n\n");
        break;
    case 4:
        printf("\n\n\tFood item - Pani Puri.\n");
        printf("\tPrice - Rs. 79\n\n");
        break;
    case 5:
        printf("\n\n\tFood item - Samosa.\n");
        printf("\tPrice - Rs. 25\n\n");
        break;
    
    
    default:
    printf("\n\n\tOops!, You enetered invalid number.\n\n");
        break;
    }
    return 0;
}
