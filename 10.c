// Write a program to convert time in seconds to hours, minutes, and seconds format (HH:MM:SS).

#include <stdio.h>

int main() {
    int total_seconds, total_minutes, s, m, h;

    printf("Enter seconds: ");
    scanf("%d", &total_seconds);

    s = total_seconds % 60;        
    total_minutes = total_seconds / 60; 

    m = total_minutes % 60;        
    h = total_minutes / 60;        

    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}