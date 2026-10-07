#include <stdio.h>
#include <stdlib.h>

    #define PI 3.1415

int main() {
    double radius, surface_area;

    printf("--- Sphere Surface Area Calculator ---\n");
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    surface_area = 4 * PI * radius * radius;
    printf("Surface Area of the sphere: %.2f\n", surface_area);

    return 0;
}
