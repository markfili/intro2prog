#include <stdio.h>
#include <math.h>

int main() {
    int r; // circle radius
    int x, y; // circle center coordinates
    int a, b; // point coordinates

    printf("Enter circle radius: ");
    scanf("%d", &r);
    printf("Enter circle center coordinates: ");
    scanf("%d %d", &x, &y);
    printf("Enter point coordinates: ");
    scanf("%d %d", &a, &b);

    int dist = (x-a)*(x-a) + (y-b)*(y-b);
    dist = sqrt(dist);
    printf("Distance: %d", dist);
    printf("Is within: %s", dist<r ? "yes" : "no"); 
    return 0;
}
