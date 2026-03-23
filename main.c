#include <stdio.h>

int main() {
    char name[100];
    int day, month, year;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    printf("\nHello, %s", name);
    printf("Your date of birth: %02d-%02d-%04d\n", day, month, year);

    return 0;
}
