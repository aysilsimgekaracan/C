//
//  main.c
//  079
//
//  Created by Ayşıl Simge Karacan on 15.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Hollow Square star pattern

#include <stdio.h>

int main(void) {
    int rows;
    
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    
    for (unsigned int i = 1; i<=rows; i++) {
        
        for (unsigned int j = 1; j<=rows; j++) {
            
            if (i == 1 || i == rows || j == 1 || j == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    
    return 0;
}
