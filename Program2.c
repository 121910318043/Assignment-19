#include<stdio.h>
#include<string.h>
//Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
int main()
{
    char str[10][30]={"Mumbai","Delhi","Banglore","Hydrabad","Ahemdabad","Pune","Chennai","Kolkata","Surat","Jaipur"};
    char strt[10][30];
    int comp,i,j,k;
    for(i=0;i<10;i++)
    {
        comp=0;
        for(j=i;j<10;j++)
        {
            k=strcmp(str[i],str[j]);
            if(k==1)
            {
                strcpy(strt[i],str[j]);
                strcpy(str[j],str[i]);
                strcpy(str[i],strt[i]);
            }
        }
    }
    for(i=0;i<10;i++)
    printf("%s ",str[i]);
    return 0;
}
