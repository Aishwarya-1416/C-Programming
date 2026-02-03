#include <stdio.h>
int main() {
    int cap, n, p, i = 0;
    int treated = 0, rejected = 0;
    scanf("%d%d", &cap, &n);
    while (i < n) {
        scanf("%d", &p);
        if (treated < cap) {
            if (treated + p <= cap)
                treated += p;
            else {
                rejected += (treated + p - cap);
                treated = cap;
            }
        } else rejected += p;
        i++;
    }
    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d\n", rejected);
    return 0;
}
