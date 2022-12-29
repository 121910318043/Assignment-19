#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    char b[3][20]={"121.2.3.2","1.256.1.1","1.2.1.2"};
    char c[3][20]={"121.2.3.2","1.256.1.1","1.2.1.2"};
    int i = 0;
    char *a;
    int count;
    while(i<3)
    {
        count=0;
        a = strtok(b[i],".");
        while(a!=NULL)
        {
            int x = atoi(a);
            if(x>=0 && x<=255)
                count++;
            a = strtok(NULL,".");
        }
        if(count==4)
            printf("%s is valid IP Address ",c[i]);
        i++;
    }
    return 0;
}
