#include <stdio.h>

int main(void) {
    int n,m;
    while(~scanf("%d %d", &n, &m)) {
        int sum=0;
        int counter = 0;
        for (int i=n;;i++) {
            sum += i;
            counter++;
            if (sum > m) {
                printf("%d\n", counter);
                break;
            }
        }
    }
    return 0;
}