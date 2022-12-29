#include<stdio.h>
//Write a program to read and display a 2D array of strings in C language.
int main()
{
    int i,n,j;
    printf("Enter number of strings you want to enter");
    scanf("%d",&n);
    char str[n][30];
    printf("Enter %d strings",n);
    for(i=0;i<=n;i++)
        fgets(str[i],30,stdin);
    printf("Display: ");
    for(i=0;i<=n;i++){
    printf("%s ",str[i]);
    }
    return 0;
}
