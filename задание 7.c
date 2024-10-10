#include<math.h>
#include <stdio.h>

unsigned int getByte(int n, int k) //Полуеник байти
{
    return ((n&(255<<(k*8)))>>(k*8));
}

int clearByte(unsigned int n, int k) //Очистка байта
{
    return (n&(~(255<<(k*8))));
}

void bprintf(unsigned int n){ //Двоичная запись числа
    unsigned int i,  j=1<<31;
    for(i=0; i<32; i++)
    {
        printf("%d", n&j ? 1 : 0);
        j>>=1;
    }
}


unsigned int exchangeByte(unsigned int n, int k, int l)
{
    unsigned int a, b;
    a=getByte(n, k);
    printf("a=");
    bprintf(a);
    printf("\n");
    b=getByte(n, l);
    printf("b=");
    bprintf(b);
    printf("\n");
    n=clearByte(n, k);
    printf("n=");
    bprintf(n);
    printf("\n");
    n=clearByte(n, l);
    printf("n=");
    bprintf(n);
    printf("\n");
    return (n|(a<<(l*8))|(b<<(k*8)));
}

int main() 
{
    int n; // число, в котором нужно поменять биты местами
    int k;       // индексы битов, которые нужно поменять местами
    int l;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter index k: ");
    scanf("%d", &k);
    printf("Enter index l: ");
    scanf("%d", &l);

    printf("n=");
    bprintf(n);
    printf("\n");
    
    
    exchangeByte(n, k, l);
    printf("n=");
    bprintf(n);
    printf("\n");

    return 0;
}