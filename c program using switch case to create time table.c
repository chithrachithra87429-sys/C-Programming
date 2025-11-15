#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1-6):\n");
    printf("1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n");
    scanf("%d", &day);

    switch(day) {

        case 1:
            printf("\n----- Monday Time Table -----\n");
            printf("9:00 - 10:00   Maths\n");
            printf("10:00 - 11:00  Science\n");
            printf("11:00 - 12:00  English\n");
            printf("12:00 - 1:00   Computer\n");
            printf("2:00 - 3:00    Social\n");
            printf("3:00 - 4:00    Games\n");
            break;

        case 2:
            printf("\n----- Tuesday Time Table -----\n");
            printf("9:00 - 10:00   Science\n");
            printf("10:00 - 11:00  Kannada\n");
            printf("11:00 - 12:00  Hindi\n");
            printf("12:00 - 1:00   Maths\n");
            printf("2:00 - 3:00    English\n");
            printf("3:00 - 4:00    Drawing\n");
            break;

        case 3:
            printf("\n----- Wednesday Time Table -----\n");
            printf("9:00 - 10:00   English\n");
            printf("10:00 - 11:00  Maths\n");
            printf("11:00 - 12:00  Science\n");
            printf("12:00 - 1:00   Social\n");
            printf("2:00 - 3:00    Computer\n");
            printf("3:00 - 4:00    Games\n");
            break;

        case 4:
            printf("\n----- Thursday Time Table -----\n");
            printf("9:00 - 10:00   Hindi\n");
            printf("10:00 - 11:00  English\n");
            printf("11:00 - 12:00  Social\n");
            printf("12:00 - 1:00   Science\n");
            printf("2:00 - 3:00    Computer\n");
            printf("3:00 - 4:00    Craft\n");
            break;

        case 5:
            printf("\n----- Friday Time Table -----\n");
            printf("9:00 - 10:00   Maths\n");
            printf("10:00 - 11:00  Science\n");
            printf("11:00 - 12:00  Social\n");
            printf("12:00 - 1:00   English\n");
            printf("2:00 - 3:00    Computer\n");
            printf("3:00 - 4:00    Games\n");
            break;

        case 6:
            printf("\n----- Saturday Time Table -----\n");
            printf("9:00 - 10:00   Yoga\n");
            printf("10:00 - 11:00  Drawing\n");
            printf("11:00 - 12:00  Craft\n");
            printf("12:00 - 1:00   Moral Science\n");
            printf("Half day after 1:00 PM\n");
            break;

        default:
            printf("Invalid day number! Enter 1–6.\n");
    }

    return 0;
}
