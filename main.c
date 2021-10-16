#include <stdio.h>
int ack(int m, int n)
{
    if (m == 0)
        {
           return n+1;
        }
    else if((m > 0) && (n == 0))
    {
        return ack(m-1, 1);
    }
    else if((m > 0) && (n > 0))
    {
        return ack(m-1, ack(m, n-1));
    }
}

int main()
{
    int A;
    int m, n;
    printf("Enter value of m and n: ");
    scanf("%d %d",&m,&n);
    A = ack(m, n);
    printf("\n%d is the answer", A);
    return 0;
}

