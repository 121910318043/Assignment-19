#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[6][10]={"One","Sum","One","three","Two"};
    char word1[10]="One";
    char word2[20]="Two";
    int W1=-1,W2=-1,i;
    for(i=0;a[i][0] || *a[i];i++)
    {
        if(!(strcmp(word1,a[i])))
            W1=i;
        if(!(strcmp(word2,a[i])))
            W2=i;
    }
    printf("Minimum Distance = %d",abs(W2-W1)-1);
    return 0;
}
