#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int match(char text[],char pattern[])
{
    int c,d,e,position =-1;
    int text_length=strlen(text);
    int pattern_length=strlen(pattern);
    if(pattern_length>text_length)
        return -1;
    for(c=0;c<=text_length-pattern_length;c++)
        {
            position=e=c;
        for(d=0;d<pattern_length;d++)
            {
            if(pattern[d]==text[e])
            e++;
            else
            break;
            }
            if(d==pattern_length)
                return position;
        }
        return -1;
}

int main()
{
    int i,position=-1;
    char a[10],b[10];
    gets(a);
    gets(b);
    position = match(a,b);
    if(position!=-1)
        printf("string found at location %d",position+1);
    else
         printf("Not found");
    return 0;
}
