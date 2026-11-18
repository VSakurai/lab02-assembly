#include <stdio.h>

int process(int a, int b)
{
    int result = 0;

    if (a > b) {
        for (int i = 0; i < b; i++) {
            result += a;
        }
    } else {
        result = a * b;
    }

    return result;
}

int main(void)
{
    int val = process(5, 3);
    printf("Result: %d\n", val);
    return 0;
}
