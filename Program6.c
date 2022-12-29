#include<stdio.h>
#include<string.h>
//Write a program to print the strings which are palindrome in the list of strings.
int main()
{
    char list[5][10] = {"suraj","mom","malayalam","Deepu","nitin"};
    int i,j,t,k=0;
    char temp[5][10];
    char temp1[5][10];
    for(i=0;i<5;i++)
    {
        strcpy(temp1[i],list[i]);
        strrev(temp1[i]);
        t=0;
        for(j=0;list[i][j];j++)
        {
            if(temp1[i][j]!=list[i][j])
            {
                t=1;
                break;
            }
        }
        if(t == 0)
        {
            strcpy(temp[k],temp1[i]);
            k++;
        }
    }
    for(i=0;i<k;i++)
        printf("%s ",temp[i]);
    return 0;
}
