#include <stdio.h>

int main(void)
{
    unsigned int myNum;
    char *words[] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
    printf("Please enter a number between 0 and 999: ");
    scanf("%d", &myNum);
    if (myNum >= 100 && myNum <= 999)
    {
        unsigned int tempVar = myNum / 100;
        printf("%s ", words[tempVar]);
        myNum = myNum % 100;
    }
    if (myNum >= 10 && myNum <= 99)
    {
        unsigned int tempVar = myNum / 10;
        printf("%s ", words[tempVar]);
        myNum = myNum % 10;
    }
    if (myNum >= 0 && myNum <= 9)
    {
        printf("%s ", words[myNum]);
    }
}