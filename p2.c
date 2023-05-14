#include <stdio.h>
#include <math.h>
#include <string.h>

main(){
    char direc[10];
    int posInt;
    char YoN[10];
    char LoR[10];
    char FoS[10];
    char BoS[10];
    char userColor[10];
    char UoD[10];
    char EoH[10];
    char LCR[10];
    char BoD[10];
    char OoC[10];
    int num;
    char SoC[10];


    printf("north, south, east, or west: ");
    scanf("%s", &direc);
    
    if (strcmp(direc, "north") == 0){
        printf("enter a positive integer: ");
        scanf("%d", &posInt);
        if (posInt % 2 == 0){
            printf("yes or no: ");
            scanf("%s", YoN);
            if (strcmp(YoN, "yes") == 0){
                printf("lake");
            }
            else{
                printf("pool");
            }
        }
        else{
            printf("beach");
        }
    }
    else if (strcmp(direc, "south") == 0){
        printf("left or right: ");
        scanf("%s", &LoR);
        if (strcmp(LoR, "right") == 0){
            printf("fast or slow: ");
            scanf("%s", &FoS);
            if (strcmp(FoS, "slow") == 0){
                printf("big or small: ");
                scanf("%s", &BoS);
                if (strcmp(BoS, "big") == 0){
                    printf("run");
                }
                else{
                    printf("walk");
                }
            }
            else{
                printf("bike");
            }
        }
        else{
            printf("jog");
        }
    }
    else if (strcmp(direc, "east") == 0){
        printf("red, white, or gray: ");
        scanf("%s", &userColor);
        if (strcmp(userColor, "red") == 0){
            printf("yes or no: ");
            scanf("%s", &YoN);
            if (strcmp(YoN, "no") == 0){
                printf("up or down: ");
                scanf("%s", &UoD);
                if (strcmp(UoD, "up") == 0){
                    printf("top-rope");
                }
                else{
                    printf("boulder");
                }
            }
            else{
                printf("tree-climb");
            }
        }
        else if (strcmp(userColor, "white") == 0){
            printf("easy or hard: ");
            scanf("%s", &EoH);
            if (strcmp(EoH, "easy") == 0){
                printf("longboard");
            }
            else{
                printf("workout");
            }
        }
        else if (strcmp(userColor, "gray") == 0){
            printf("left, center, or right: ");
            scanf("%s", &LCR);
            if (strcmp(LCR, "left") == 0){
                printf("build or destroy: ");
                scanf("%s", &BoD);
                if (strcmp(BoD, "build") == 0){
                    printf("hike");
                }
                else{
                    printf("spelunk");
                }
            }
            else if (strcmp(LCR, "center") == 0){
                printf("open or closed: ");
                scanf("%s", &OoC);
                if (strcmp(OoC, "open") == 0){
                    printf("zoo");
                }
                else{
                    printf("aquarium");
                }
            }
            else if (strcmp(LCR, "right") == 0){
                printf("museum");
            }
        }
    }
    else if (strcmp(direc, "west") == 0){
        printf("enter an integer: ");
        scanf("%d", &num);
        if (num < 0){
            printf("sunny or cloudy: ");
            scanf("%s", &SoC);
            if (strcmp(SoC, "sunny") == 0){
                printf("tennis");
            }
            else{
                printf("racquetball");
            }
        }
        else{
            printf("frisbee");
        }
        }
    }