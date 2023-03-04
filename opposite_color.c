#include<stdio.h>

// Keyboard values of a color and print the opposite of the color. If values are not valid, output "invalid entrances"
// Values should be between 0 and 255

int main() {

    // Using r,g,b from the RGB basic name
    int r, g, b;

    // Keybord values

    // r value
    printf("Enter r value:");
    scanf("%d", &r);

    // g value
    printf("Enter g value:");
    scanf("%d", &g);

    // b value
    printf("Enter b value:");
    scanf("%d", &b);

    // Find and print the oppposite color 
    if (r >= 0 && r <= 255 && g >= 0 && g <= 255 && b >= 0 && b <= 255) {
        
        // opposite r
        printf("Value of opposite r:");
        int opp_r = 255 - r;
        printf("%d\n", opp_r);
        
        // opposite g
        printf("Value of opposite g:");
        int opp_g = 255 - g;
        printf("%d\n", opp_g);
        
        // opposite b
        printf("Value of opposite b:");
        int opp_b = 255 - b;
        printf("%d\n", opp_b);

    } else {

        // Invalid values, no color
        printf("Intrari Invalide\n");
    }

    return 0;

}   