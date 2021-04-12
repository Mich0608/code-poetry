#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void puberty1(int age)
{
    if(age == 16)
        return;

    char *puberty[2];
    puberty[0] = "      @dolescence++\n}";
    puberty[1] = "      return ....gr0wn;\n}";  

    printf("while(age == %d)\n{\n   puberty1();\n", age);
    printf("%s\n", puberty[age % 2]);

    age++;
    puberty1(age);
}

void puberty2()
{
    printf("now(I == 19 == almost 20[?]){   I believe this is\n");
    for(int I = 14; I < 20; I++)
    {
        for(int i = 13; i < I; i++)
        {
            printf("      ");
        }
        printf("puberty2");
        printf("...\n");
    }
    printf("}\n");
}

int main()
{
    int age = 12;
    puberty1(age);
    puberty2();
    printf("\nsometimes i still burn food in the microwave\n\n");
    return 0;
}