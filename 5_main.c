//202610303108
//胡嘉浩
#include <stdio.h>
int main()
{
    float a, b;
    char op;
    
    scanf("%f %c %f", &a, &op, &b);
    if (op == '+')
    {
        printf("%.2f\n\n", a + b);
    }
    else if (op == '-')
    {
        printf("%.2f\n\n", a - b);
    }
    else if (op == '*')
    {
        printf("%.2f\n\n", a * b);
    }
    else if (op =='/')
    {
        if (b == 0)
        {
            printf("除数不能为零\n\n");
        }
        else
        {
            printf("%.2f\n\n", a / b);
        }
        
    }
    else
    {
        printf("错误：不支持的运算符\n\n");
    }

 return 0;
}   