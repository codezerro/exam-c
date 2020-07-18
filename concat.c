#include <stdio.h>
#include<string.h>

int main()
{
    char String1[30] = "Engineering";
    char String2[30] = "Computer Science ";

    /// concatenating the two string.
   strcat(String2, String1);

    printf("%s\n",String2);

    /// sting copy
    char Str1[30] = "Engineering";
    char Str2[30] = "Computer Science ";

    strcpy(Str1,Str2);
    printf("%s",Str1);

    return 0;
}
