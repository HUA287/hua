//202610303108
//胡嘉浩
#include <stdio.h>
int main()
{
    float a;
    while (100){
    scanf("%f", &a);
    if (a>=90 && a<=100)
    {
        printf("A\n\n");
    }
    else if (a>=80 && a<=89.99)
    {
        printf("B\n\n");
    }
    else if (a>=70 && a<=79.99)
    {
        printf("C\n\n");
    }
    else if (a>=60 && a<=69.99)
    {
        printf("D\n\n");
    }
    else if (a>=0 && a<=59.99)
    {
        printf("不及格\n\n");
    }
    else
    {
        printf("输入无效\n\n");
    }
}
 return 0;
}