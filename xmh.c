
#include <stdio.h>

int main() {
    printf("=== 简单C语言测试程序 ===\n\n");
    
    // 测试1：输出和变量
    printf("测试1：变量和输出\n");
    int num = 42;
    float pi = 3.14159;
    printf("整数: %d\n", num);
    printf("浮点数: %.5f\n\n", pi);
    
    // 测试2：算术运算
    printf("测试2：算术运算\n");
    int a = 10, b = 3;
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n\n", a, b, a % b);
    
    // 测试3：条件判断
    printf("测试3：条件判断\n");
    int score = 85;
    if (score >= 90) {
        printf("等级: A\n");
    } else if (score >= 80) {
        printf("等级: B\n");
    } else if (score >= 70) {
        printf("等级: C\n");
    } else {
        printf("等级: D\n");
    }
    printf("\n");
    
    // 测试4：循环
    printf("测试4：循环(1到5的平方)\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d的平方 = %d\n", i, i * i);
    }
    printf("\n");
    
    // 测试5：数组
    printf("测试5：数组\n");
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("数组元素: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n数组和: %d\n", sum);
    
    printf("\n=== 测试完成 ===\n");
    
    return 0;
}
