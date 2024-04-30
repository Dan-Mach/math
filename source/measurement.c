#include <stdio.h>
#include "math.h"
#include "main.h"



int volume(int vlm,int height, int length, int width){

    printf("Calculate Volume: \n");

    printf("Enter the length, width and the height in this format [l w h]");
    scanf(" %d %d $d ", &length, &width, &height );

    vlm = length * width * height;

    return vlm;


}

void measurement (){
    int volume(int vlm,int height, int length, int width);
}