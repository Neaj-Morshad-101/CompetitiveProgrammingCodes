#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    char str1[100],str2[100];
    scanf("%[^\n]",str1);
    //printf("%s\n",str1);


    int len=strlen(str1);
    int len2=0;
    for(int i=0; i<len; i++)
    {
        if(str1[i]!=' ')
        {
            str2[len2++]=str1[i];
        }
    }
    str2[len2]=0;
    //printf("%s\n",str2);
    int row=floor(sqrt(len2));
    int col=ceil(sqrt(len2));
    int j;
    for(int i=0; i<col; i++)
    {
        j=i;
        while(1)
        {
            printf("%c",str2[j]);
            j+=col;
            if(j>=len2)
            {
                if(i!=col-1)
                    printf(" ");
                else
                    printf("\n");
                break;
            }
        }
    }

    return 0;
}
