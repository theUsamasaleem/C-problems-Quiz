#include<stdio.h>

int main()
{
    int i, c=0;
    char str[20], character;
    printf("Enter the String: ");
    
    gets(str);
    
    printf("Enter any character (present in string) to find its frequency: ");
    scanf("%c", &character);
    
    for(i=0; str[i]!='\0'; i++)
    {
        if(character==str[i])
            c++;
    }
    
    printf("\nFrequency of %c = %d", character, c);
    printf("\n\n%c occurs %d times in %s", character, c, str);
    
    return 0;
}
