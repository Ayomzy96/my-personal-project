#include <stdio.h>
int main()
{
    int score;
    printf("ENTER YOUR SCORE: ");
    scanf("%d", &score);

    if (score >=70 && score <=100)
        printf("you scored A");

    else if (score >=60 && score <=69)
        printf("you scored B");

    else if (score >= 50 && score <=59)
        printf("you scored C");

    else if (score >= 40 && score <= 49)
        printf("you scored D");

    else if (score >= 30 && score <= 39)
        printf("you scored E");

    else if (score >= 0 && score <= 29)
        printf("you scored an F");
    else
        printf("ERROR INPUT");
    return (0);
}
