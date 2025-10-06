#include <stdio.h>

int main() {
    int minutes = 170;        
    int hours, remaining_minutes;
    hours = minutes / 60;           
    remaining_minutes = minutes % 60; 
    printf("%d minutes = %d hours and %d minutes\n", minutes, hours, remaining_minutes);

    return 0;
}
