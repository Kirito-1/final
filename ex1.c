#include <stdio.h>
int main()
{
  double a,b,c;
    printf("请输入两个数字\n");
    scanf("%lf %lf", &a, &b);
    c=(a+b)*(a+b);
    printf("%.2lf\n",c);
    return 0;

}