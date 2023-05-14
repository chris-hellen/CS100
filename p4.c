#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int isPositiveInteger(char token[]);
int isNegativeInteger(char token[]);
int isBinaryNumber(char token[]);
int isGuid(char token[]);
int isPostiveFloatingPoint(char token[]);
int isNegativeFloatingPoint(char token[]);


int main(){
    while(1){
        printf("Enter a token to identify, EOF to stop:\n");
        char token[100];
        scanf("%s", &token);
        if (feof(stdin)){
            break;
        }
        if (isPositiveInteger(token)){
            printf("The token is a positive integer\n");
        }
        else if (isNegativeInteger(token)){
            printf("The token is a negative integer\n");
        }
        else if (isBinaryNumber(token)){
            printf("The token is a binary number\n");
        }
        else if (isGuid(token)){
            printf("The token is a guid\n");
        }
        else if (isPostiveFloatingPoint(token)){
            printf("The token is a positive floating-point number\n");
        }
        else if (isNegativeFloatingPoint(token)){
            printf("The token is a negative floating-point number\n");
        }
        else{
            printf("The token cannot be identified\n");
        }
    }
    return 0;
}

int isPositiveInteger(char token[]){
    if (token[8] == '-'){
        return 0;
    }
    for (int i = 0; i < strlen(token); i++){
        if (isdigit(token[i])){
        }
        else{
            return 0;
        }
    }
    return 1;
}

int isNegativeInteger(char token[]){
    int tokenNum = atoi(token);
    if (token[0] != '-'){
        return 0;
    }
    for (int i = 1; i < strlen(token); i++){
        if (isdigit(token[i])){
        }
        else{
            return 0;
        }
    }
    return 1;
}

int isBinaryNumber(char token[]){
    int len = strlen(token) - 2;
    if (strlen(token) < 3){
        return 0;
    }
    if (token[0] == '0' && token[1] == 'b'){
        for (int i = 2; i < len; i++){
            if (token[i] != '0' && token[i] != '1'){
                return 0;
            }
        }
        return 1;
    }
    else{
        return 0;
    }
}

int isGuid(char token[]){
    if (strlen(token) != 36){
        return 0;
    }
    if (token[8] == '-' && token[13] == '-' && token[18] == '-' && token[23] == '-'){
        for (int i = 0; i < strlen(token); i++){
            if (!isdigit(token[i]) && token[i] != '-' && toupper(token[i]) != 'A' && toupper(token[i]) != 'B' && toupper(token[i]) != 'C' && toupper(token[i]) != 'D' && toupper(token[i]) != 'E' && toupper(token[i]) != 'F'){
                return 0;
            }
        }
        return 1;
    }
    else{
        return 0;
    }
}

int isPostiveFloatingPoint(char token[]){
    int decCt = 0;
    if (token[0] == '.' || token[strlen(token) - 1] == '.'){
        return 0;
    }
    for (int i = 0; i < strlen(token); i++){
        if (!isdigit(token[i]) && token[i] != '.'){
            return 0;
        }
        if (token[i] == '.'){
            decCt++;
        }
    }
    if (decCt != 1){
        return 0;
    }
    else{
        return 1;
    }
}

int isNegativeFloatingPoint(char token[]){
    int decCt = 0;
    if (token[0] != '-'){
        return 0;
    }
    else{
        if (token[1] == '.' || token[strlen(token) - 1] == '.'){
            return 0;
        }
        for (int i = 1; i < strlen(token); i++){
            if (!isdigit(token[i]) && token[i] != '.'){
                return 0;
            }
            if (token[i] == '.'){
                decCt++;
            }
        }
        if (decCt != 1){
            return 0;
        }
        else{
            return 1;
        }
    }
}