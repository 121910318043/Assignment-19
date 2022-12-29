#include<stdio.h>
//Write a program to search a string in the list of strings.
int main()
{
    int i,j,c,k;
    char str[5][30]={"Suraj","Deepu","Divya","Teju","Manish"};
    char stru[30]={"Suraj"};
    for(i=0;i<5;i++)
    {
        c=0;
        {
            for(j=0;stru[j] || str[i][j];j++)// We use OR conditional statement to match sizes.
            {

                if(str[i][j]!=stru[j])
                {
                    c=1;
                    break;
                }
            }
        }
        if(c==0)
            break;
    }
    if(c==0)
    {
        printf("%s ",str[i]);
        printf("Found");
    }
    else
        printf("Not Found");
}
