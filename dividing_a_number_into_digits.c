//Copyright Julia Neverova 2022

#include <stdio.h>

int main() {
    int number;
    printf("Enter a five-digit number: ");
    scanf("%d", &number);
    printf("\v");
    
    if ((number < 10000) || (number >99999)){
        printf("Error. Try again.\n"); 
        return 0;
    }
    
    int one, two, three, four, five;
    one = (number / 10000) % 10;
    two = (number / 1000) % 10;
    three = (number / 100) % 10;
    four = (number / 10) % 10;
    five = number % 10;
    
    printf("1st number is %d\n", one);
    printf("2nd number is %d\n", two);
    printf("3rd number is %d\n", three);
    printf("1st number is %d\n", four);
    printf("1st number is %d\n", five); 
    
    return 0;
}
    
