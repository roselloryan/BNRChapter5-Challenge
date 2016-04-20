//
//  main.c
//  BNRChapter5Challenge-Triangle


#include <stdio.h>
#include <stdlib.h>


float thirdAngleOfTriangleFromTheOtherTwo (float ang1, float ang2) {
    float ang3 = 180 - ang1 - ang2;
    return ang3;
}



int main(int argc, const char * argv[]) {
    // insert code here...

    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = thirdAngleOfTriangleFromTheOtherTwo(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    
    return EXIT_SUCCESS;

}
