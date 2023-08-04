#include <stdio.h>

void fn(int x)
{
    if (x > 0)
    {
        printf("%d ", x);
        fn(x - 1);
        printf("%d ", x);
    }
}

int main()
{

    int num = 10;
    fn(num);

    return 0;
}