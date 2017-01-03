//http://117.78.32.67/exam/ShowProblemInfo?method=campusProblemInfo&id=2290
// 最后一个字符串的长度，关键在于只认英文字符，其他符号不考虑
#include <stdio.h>
#include <string.h>
int alpha(char a);
int main() {
    int i,len,count,start;
    char input[200];
    fgets(input,sizeof(input),stdin);

    len = strlen(input);
    if(len>=128 || len <=0) return -1;



    for(i=len-1;i>=0;i--)
    {
        if(alpha(input[i])==0)
        {
            start=i;

            break;
        }
    }

    for(i=start,count=0;i>=0 && input[i]!=' ';i--)
    {

        count = count + alpha(input[i]);
    }

    printf("%d\n",start-i-count);
    return 0;
}

int alpha(char a)
{
    if((a>='a' && a<='z' )|| (a>='A' && a<='Z'))
    {
        return 0;
    }
    else
    {
        return 1;
    }

}