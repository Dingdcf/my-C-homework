#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, n = 2;

    // 输入一个正整数
    printf("请输入一个正整数: ");
    scanf("%d", &a);
    b = a;

    // 输出原始数字
    printf("%d = ", a);

    // 分解质因数
    while (b > 1) {
        if (b % n == 0) {
            printf("%d", n);
            b /= n;
            if (b > 1) {
                printf("*");
            }
        } else {
            n++;
        }
    }

    // 返回0表示程序成功结束
    return 0;
}
/*void main()
{
int n=2,i=2,is=1,a,b;
scanf("%d",&a);printf("%d=",a);b=a;
for(;n<=sqrt(a);n++){
        i=2;is=1;
    for (;i<=sqrt(n);i++){
        if (n%i==0)
            is=0;
    };
    for (;is == 1;)
        {
          if (b%n==0)
            {printf("%d*",n);
            b/=n;}        else
        is=0;

        };
};
}

/*
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, k = 2;
    printf("请输入一个正整数：");
    scanf("%d", &n);

    if (n <= 0) {
        printf("输入错误，必须输入一个正整数。\n");
        return 1;
    }

    printf("%d =", n);

    while (n > 1) {
        while (isPrime(k) && n % k == 0) { // 找到最小的质因子k
            printf(" * %d", k);
            n /= k; // 更新n
        }
        k++; // 如果n不能被k整除，则增加k的值
    }

    printf("\n");
    return 0;}*/


