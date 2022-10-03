#include<stdio.h>

int main(int argc, char **argv)
{
    int x;
    int y;
    x = 1;
    y = 1;
    x = (y=2)*3;

    printf("x = %d, y =%d\n", x, y );

    char *s ="abcd";
    printf("the character *(s+1) is %c\n", *(s+1));
    printf("the string s is \"%s\".\n", s);

  

    const char *string = "cant touch this";
    string = "cant touch this either";
    printf("%s\n", string);
    return 0;
}

