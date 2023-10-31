//
//  main.c
//  calculator2.0
//
// This program takes a number from the user and outputs the sum of the numbers from 0 to that number.
//
//  Created by Akif Duran on
//

#include <stdio.h>

int main (){
    
    int i,number;
    int sum=0;
    
    printf("Please enter the number that you want to sum of the numbers from  \n");
    scanf("%d", &number);
    
    for(i=0;i<=number;i++){
        sum= sum+i;
    }
    printf("The sum of numbers is : %d \n", sum);
    
    
    
    
    return 0;
}



