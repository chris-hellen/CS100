#include <stdio.h>
#include <string.h>
#include <ctype.h>

void left(char word[]);
void right(char word[]);
void inc(char word[]);
void dec(char word[]);

int main(int argc, char *argv[]) {
   FILE *inputFile = fopen(argv[1], "r");

   if (argc != 3){
      printf("Invalid number of arguments");
      return 0;
   }
   else if (fopen(argv[1], "r") == 0){
      printf("Could not open file '%s'", argv[1]);
      return 0;
   }

   char argLetterFlag[50];
   strcpy(argLetterFlag, argv[2]);

   for (int  i = 0; i < strlen(argv[2]); i++){
      if (argLetterFlag[i] != 'R' && argLetterFlag[i] != 'D' && argLetterFlag[i] != 'I' && argLetterFlag[i] != 'L'){
         printf("You threw off my schwiftiness with schwifty '%c'!", argLetterFlag[i]);
         return 0;
      }
   }

   char argLetter[100];
   strcpy(argLetter, argv[2]);

   char word[100]; 

   while(1){
    fscanf(inputFile, "%s", &word);
    if (feof(inputFile)){
        break;
    }
    for (int i = 0; i < strlen(argv[2]); i++){
        if (argLetter[i] == 'L'){
            left(word);
        }
        else if (argLetter[i] == 'R'){
            right(word);
        }
        else if (argLetter[i] == 'D'){
            dec(word);
        }
        else if (argLetter[i] == 'I'){
            inc(word);
        }
      }
   printf("%s\n", word);
   }

   fclose(inputFile);
   return 0;
}

void left(char word[]){
   char ch = word[0];
   int len = strlen(word);
   for (int i = 0; i < len; i++){
     word[i] = word[i + 1];
   }
   word[len - 1] = ch;
}

void right(char word[]) {
   int len = strlen(word);
   char ch = word[len - 1];
   for (int i = len - 1; i >= 0; i--){
      word[i] = word[i - 1];
   }
   word[0] = ch;
}

void inc(char word[]){
   int len = strlen(word);
   for (int i = 0; i < len; i++){
      if (isalnum(word[i])){
         if (word[i] == 'Z'){
            word[i] = 'A';
         }
         else if (word[i] == 'z'){
            word[i] = 'a';
         }
         else if (word[i] == '9'){
            word[i] = '0';
         }
         else{
            word[i] = word[i] + 1;
         }
      }
   }
}

void dec(char word[]){
   int len = strlen(word);
   for (int i = 0; i < len; i++){
      if (isalnum(word[i])){
         if (word[i] == 'A'){
            word[i] = 'Z';
         }
         else if (word[i] == 'a'){
            word[i] = 'z';
         }
         else if (word[i] == '0'){
            word[i] = '9';
         }
         else{
            word[i] = word[i] - 1;
         }
      }
   }
}
