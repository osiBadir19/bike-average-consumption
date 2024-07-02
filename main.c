#include <stdio.h>

// 12
int main(){
    int distance;           // in KiloMeters
    float fuel_used;

    printf("enter distance traveled: ");
    scanf("%d", &distance);

    printf("enter fuel used during your trip: ");
    scanf("%f", &fuel_used);

    printf("average consumption (km/lt): %.2f\n", (float) distance / fuel_used);

    return 0;

}
