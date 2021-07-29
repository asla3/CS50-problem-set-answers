#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get height from user
    int height;
    do{
        height = get_int("How high you want the pyramids to be? ");
    } while (height < 1 || height > 8);

    // print to console the height that the user specified before
    for (int i = 0; i < height; i++) {
        int numberOfSpacesToPrint = height - i;
        for (int k = numberOfSpacesToPrint; k >= 0; k--) {
            printf(" ");
        }

        for (int j = 0; j <=  i; j++) {
printf("#");
        }
        printf("  ");
        for (int l = 0; l <= i; l++) {
            printf("#");
        }

            printf("\n");
    }
}