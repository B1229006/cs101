#include <stdio.h>
int main() {
    for (int i = 1; i <= 81; printf("%s", (i % 9 == 0) ? "\n" : "\t"), i++)
        printf("%d x %d = %d", (i - 1) / 9 + 1, i % 9 == 0 ? 9 : i % 9, (i - 1) / 9 + 1 * (i % 9 == 0 ? 9 : i % 9));
    
    
    system ("PAUSE");
    return 0;
}