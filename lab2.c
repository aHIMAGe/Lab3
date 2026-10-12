#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define D 2.54
#define P 2.32166
#define M 1.852
#define S 1.609
#define R 1.475
#define ST 7.468
#define G 7.4126



int main() 
{
    setlocale(LC_ALL, "RUS");
    task1();
    task2();
    task3();
    dz();s
}

int task1() {
    int num1;
    puts("Введите число");
    scanf("%d", &num1);
    printf("Введено число %d\n", num1);
    int num2;
    puts("Введите еще число");
    scanf("%d", &num2);
    printf("введено еще число %d\n", num2);
    printf("сумма %d\n", num1 + num2);
    printf("разность %d\n", num1 - num2);
    printf("произведение %d\n", num1 * num2);
    printf("частное %d\n", num2 / num1);
    printf("остаток от деления %d\n\n\n", num2 % num1);
    return 0;
}

int task2() {
    int dym;
    float result;
    float result1;
    printf("перевод дюймов\n");
    printf("введите значение в дюймах: ");
    scanf("%d", &dym);

    result = D * dym;
    printf("%d английских дюймов – это %.2f ñì\n", dym, result);

    result1 = P * dym;
    printf("%d испанских пульгад – это %.2f ñì\n", dym, result1);

    printf("\nАльтернативное задание 2А: мили в км\n");
    printf("введите количество миль: ");
    scanf("%d", &dym);

    printf("\n%d миль — это:\n", dym);
    printf("морская миля:        %.3f êì\n", M * dym);
    printf("сухопутная миля:     %.3f êì\n", S * dym);
    printf("римская миля:        %.3f êì\n", R * dym);
    printf("старорусская миля:   %.3f êì\n", ST * dym);
    printf("географическая миля: %.4f êì\n\n\n", G * dym);

    return 0;
}

int task3() {
    int a, b;

    printf("Введите число a: ");
    scanf("%d", &a);
    printf("Введите число b: ");
    scanf("%d", &b);

    printf("\n");
    printf("| %-5s | %-5s | %-5s |\n", "a*b", "a+b", "a-b");
    printf("| %-2d*%-2d | %-2d+%-2d | %-2d-%-2d |\n", a, b, a, b, a, b);
    printf("| %-5d | %-5d | %-5d |\n\n\n", a * b, a + b, a - b);

    return 0;
}

int dz() {
    const float kolichestvo = 63241.0f;

    float l_y;
    float au;

    printf("введите кол-во световых лет: ");
    scanf("%f", &l_y);

    au = l_y * kolichestvo;

    printf("\n%.2f световых лет = %.2f à.å.\n", l_y, au);

    return 0;
}