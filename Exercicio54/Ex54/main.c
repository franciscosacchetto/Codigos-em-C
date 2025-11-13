#include <stdio.h>
#include <locale.h>

int Fibonacci(int N)
{
    if(N == 0)
    {
        return 0;
    }
    else if(N == 1)
    {
        return 1;
    }
    else
    {
        return Fibonacci(N-1) + Fibonacci(N-2);
    }
}

int main()
{
    setlocale(LC_ALL,"");
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("%d\n", Fibonacci(n));

    return 0;
}
