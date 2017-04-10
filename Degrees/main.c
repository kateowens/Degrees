//
//  main.c
//  Degrees
//
//  Created by Katherine Owens on 4/10/17.
//  Copyright © 2017 Katherine Owens. All rights reserved.
//

#include <stdio.h>

//Declare a global variable
float lastTemperature;

float farenheitFromCelcius(float cel) {
    lastTemperature = cel;
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celcius is %f Farenheit\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[]) {
    float freezeInC = 0;
    float freezeInF = farenheitFromCelcius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeInF);
    printf("The last temperature converted was %f.\n", lastTemperature);
    return 0;
}


