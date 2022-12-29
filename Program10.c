#include<stdio.h>
#include<string.h>
int main()
{
    char a[4][2][20] = {{"Suraj","123"},{"Deepu","777"},{"Divya","999"}};
    int i;
    char id[20];
    char pass[20];
    printf("Enter Your Id: ");
    gets(id);
    printf("Enter Your Pass: ");
    gets(pass);
    for(i=0;**a[i];i++)
    {
        if(!strcmp(a[i][0],id) && !strcmp(a[i][1],pass))
        {
            printf("Login Successful");
            return 0;
        }
    }
    printf("Invalid ID Or Password ");
    return 0;
}
