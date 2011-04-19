#include <cstdio>
#include <cstdlib>
int div2(int x, int y) {
    if (x >= 0) {
        return x/y;
    }
    else {
        if (x % y == 0) {
            return x / y;
        }
        else if (y > 0) {
            return x / y - 1;
        }
        else {
            return x / y + 1;
        }
    }
}
int mod2 (int x, int y) {
    if (x >= 0) {
        return x%y;
    }
    else {
        if (x % y == 0) {
            return 0;
        }
        else {
            return abs(y) + x % y;
        }
    }
}
void go (int x, int b) {
    if (x==0) {
        return;
    }
    else {
        go(div2(x, b), b);
        printf("%d", mod2(x, b));
    }
}
// Comments Modified
int main() {
    int x, b;
    scanf("%d %d\n", &x, &b);
    if (x==0) {
        printf("%d\n", 0);
    }
    else if (b > 0) {
        if (x<0) {
            printf("-");
        }
        go(abs(x), b);
    }
    else {
        go(x, b);
    }
    return 0;
}
