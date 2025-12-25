#include <stdio.h>

int main(void)
{
    unsigned int myNum;
    const char *words[] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
    printf("Please enter a number between 0 and 999: ");
    scanf("%d", &myNum);
    int h = myNum / 100;
    int t = (myNum / 10) % 10;
    int o = myNum % 10;
    if (myNum >= 100)
    {
        printf("%s ", words[h]);
    }
    if (myNum >= 10)
    {
        printf("%s ", words[t]);
    }
    if (myNum >= 0)
    {
        printf("%s ", words[o]);
    }
}