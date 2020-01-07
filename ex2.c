#include <stdio.h>
void reverse();
 
int main()
{
    printf("输入一个字符串: ");
    reverse();
    return 0;
}
 
void reverse()
{
    char c;
    scanf("%c", &c);
    if( c != '\n')
    {
        reverse();
        printf("%c",c);
    }
}