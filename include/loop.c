#include <stdio.h>

#define INICIO_VAR 4
#define FIM_VAR -3
#define X 0

int main(void) {
    int a, x = INICIO_VAR;

    for (a = INICIO_VAR; a > FIM_VAR; a--) 
    {
        x += a;

        switch (a > 0) 
        {
            case 1:
                x = x + a;
                break;

            case 0:
                x = x - 2 * a;
                break;
        }
    }

    printf("%d\n", x);

    return 0;
}