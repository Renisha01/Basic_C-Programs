// WAP to find a Fibonacci series up to n terms (n is entered by user) (recursive)

#include <stdio.h>

// recursive function to print fibonacci
void fibo(int n, int a, int b)
{
	int c;
	if (n > 0)
	{
		c = a + b;
		a = b;
		b = c;
		printf(" %d", c);
		// function calls itself
		fibo(n - 1, a, b);
	}
}

int main()
{
	int n;

	printf("Enter a number : ");
	scanf("%d", &n);

	printf("%d %d", 0, 1);
	fibo(n - 2, 0, 1);
}
