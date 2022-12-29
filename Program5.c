#include<stdio.h>
int main()
{
    char str[4][30]={"suraj@gmail.com","gmail.com","Dictasgmail.com","something@gmail.com"},str2[4][30];int count,c=0,i,j,k;
    for(i=0;i<3;i++)
    {
        count=0;
        for(j=0;str[i][j];j++)
            if(str[i][j]=='@')
            count++;
        if(count==0)
        {
            for(k=0;str[i][k];k++)
            {
                str2[c][k]=str[i][k];
            }
            c++;
        }
    }
    for(i=0;i<=4;i++)
        printf("%s ",str2[i]);
}
