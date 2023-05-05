#include<stdio.h>
/**
 * @brief -using while loop to print all lower case alphabets
 * 
 * @return int 
 */
int main(void)
{
    char a = 'a';
    while ( a <='z')
    {
        printf("%c\n", a);
        a++;
    }
    return 0;
}
