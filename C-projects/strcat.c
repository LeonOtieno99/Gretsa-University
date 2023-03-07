#include<stdio.h>
#include<string.h>

int main(int argc,  const char* argv[])
{
    char example[100];

    //copy
    strcpy(example, 'Geeks');

    //concatenate this string

    strcat(example, 'ForGeeks');

    //Display concatenated string
    printf("%s\n", example);

    return 0;
}