#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
 
int main(){
    int lineWidth = 0;
 
    printf("Enter the length of the output line:\n");
    scanf("%d", &lineWidth);
 
    printf("Enter your text (control-d to exit):\n");
 
    int charCount = 0;
    char totChar[charCount];
    char userChar[charCount];
 
    while(!feof(stdin)){
        scanf("%c", &userChar[charCount]);
        totChar[charCount] = userChar[charCount];
        charCount++;
    }
   
    printf("<control-d>");
 
    int count = 0;
    int timer = charCount;
    int lines = charCount / lineWidth;
   
   
    for (int i = 0; i < lines; i++){
        for(int k = charCount; count <= lineWidth; charCount--){
            printf("%c", totChar[k]);
            count++;
        }
        printf("\n");
    }
   
   
 
    return 0;
}

