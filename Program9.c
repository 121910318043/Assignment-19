#include<stdio.h>
#include<string.h>
void factorial();
int main()
{
    char UserData[4][20]={"suraj","deepu","divya"};
    int i,flag=1;
    char a[20];
    printf("Please Enter A UserName: ");
    gets(a);
    for(i=0;*UserData[i];i++)
    {
        if(!(strcmp(UserData[i],a)))
        {
            flag=0;
            factorial();
            break;
        }
    }
    if(flag)
    printf("Error User Not Found");
    return 0;
}
void factorial()
{
    int f,i=1;
    printf("Please Enter A Number: ");
    scanf("%d",&f);
    while(f>1)
    {
        i=i*f;
        f--;
    }
    printf("Factorial is %d",i);
}
