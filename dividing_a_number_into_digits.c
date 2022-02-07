//Copyright Julia Neverova 2022

#include <stdio.h>

int main() {
    int number;
    char trash;
    printf("Enter a 5-digit number: ");
    scanf("%d%c", &number, &trash);
    
    int one, two, three, four, five;
    five = number % 10;
    
    printf("%d", five);  
      
    if (trash =! "/t"){
        printf ("n/a");
    }
    
    return 0;
}
    
