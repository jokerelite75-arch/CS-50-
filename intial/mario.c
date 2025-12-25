#include <cs50.h>
#include <stdio.h>
void hashtag(int n);
int main(void)
{
    int n;
    do
    {
        n = get_int("number: ");

    }
    while(n < 1 || n > 8);
    hashtag(n);
    return n;
}

void hashtag(int n)
{
    for(int i=0; i<n; i++)
    {
       for(int k=0; k< n-i-1; k++)
       {
        printf(" ");
       }
        {
            for(int j=0; j<=i; j++)
            {
                printf("#");
            }

            {
                printf("  ");
            }

            {
                for(int g=0; g<=i; g++)
                {
                    printf("#");
                }
            }
        }
        printf("\n");
    }
}
