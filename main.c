#include <stdio.h>

int main(void)
{
    unsigned int myNum;
    const char *words[] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
    printf("Please enter a number between 0 and 999: ");
    scanf("%d", &myNum);
    if (myNum >= 100 && myNum <= 999)
    {
        printf("%s ", words[myNum / 100]);
        myNum = myNum % 100;
    }
    if (myNum >= 10 && myNum <= 99)
    {
        printf("%s ", words[myNum / 10]);
        myNum = myNum % 10;
    }
    if (myNum >= 0 && myNum <= 9)
    {
        printf("%s ", words[myNum]);
    }
}