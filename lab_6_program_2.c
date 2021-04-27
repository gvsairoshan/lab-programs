#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
struct node{
    char str[50];
};

void Counter(char *str, int *freq)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
            freq[26]++;
        else if (isupper(str[i]))
            freq[str[i] - 'A']++;
        else if (islower(str[i]))
            freq[str[i] - 'a']++;
        else
            exit(0);
    }
}

void report_anagram(int *f1, int *f2)
{
    for (int i = 0; i < 27; i++)
    {
        if (f1[i] != f2[i])
        {
            printf("\nThese two strings are not anagrams.\n");
            return;
        }
    }
    printf("\nThese two strings were anagrams!\n");
}
