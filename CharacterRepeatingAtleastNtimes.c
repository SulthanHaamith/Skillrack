//Character Repeating Atleast N times
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int count=1,max,len,i;
    char str[100];
    scanf("%s%n",str,&len);
    scanf("%d",&max);
    for(i=0;i<len;i++)
    {
        while(str[i]==str[i+1])
        {
            count++;
            i++;
        }
        if(count>=max)
        {
            printf("%c",str[i]);
        }
        count=1;
    }

}
