#include<stdio.h>
//Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
int main()
{
    int v[5],i,j,c;char str[5][30];
    printf("Enter 5 strings: ");
    for(i=0;i<=4;i++)
        fgets(str[i],30,stdin);
    for(i=0;i<=4;i++)
    {
         printf("%s ",str[i]);
    {
        c=0;
        for(j=0;str[i][j];j++)
        {
            if(str[i][j]=='a' || str[i][j]=='e' || str[i][j]=='i' || str[i][j]=='o' || str[i][j]=='u')
            {
                c++;
            }
        }
        v[i] = c;
    }
    }
    printf("Vowels in strings = ");
    for(i=0;i<=4;i++)
        printf("%d ",v[i]);
    return 0;
}
