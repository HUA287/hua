//202610303108
//胡嘉浩
#include <stdio.h>
int main()
{
    float a;
    
   
    if (scanf("%f", &a) != 1 || a < 0 || a > 100)
    {
        printf("输入无效\n\n");
        return 0;
    }
    if (a>=90 && a<=100)
    {
        printf("A\n\n");
    }
    else if (a>=80)
    {
        printf("B\n\n");
    }
    else if (a>=70)
    {
        printf("C\n\n");
    }
    else if (a>=60)
    {
        printf("D\n\n");
    }
    else if (a>=0)
    {
        printf("E\n\n");
    }
    
 return 0;
}