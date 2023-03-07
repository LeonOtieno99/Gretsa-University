#include<stdio.h>
void squeeze(char string1[], char string2[]);
int main(){
    char string1[50];
    char string2[30];
    printf("Enter the string1:");
    scanf("%s", &string1);
    printf("Enter the  string2:");
    scanf("%s", &string2);
    squeeze(string1,string2);
    printf("Final string is: %s", string1);
    return 0;
}
void squeeze(char string1[], char string2[]){
    int i, j, k;
    for(i=k=0;string1[i]!='\0';i++){
        for(j=0;string2[j]!='\0' && string2[j] != string1[i]; j++)
        if(string2[j] == '\0')
        string1[k++]=string1[i];
    }
    string1[k] = '\0';
}