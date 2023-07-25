#include <stdio.h>
#include <cstdlib>

void update(int *a,int *b) {
    // Complete this function   
    int addition=*a+*b;
    int substraction= std::abs(*a-*b);
    *a=addition;
    *b=substraction;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}