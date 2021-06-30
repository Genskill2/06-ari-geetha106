#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

typedef struct {
   int score;
   string age;
   string gradelevel;

} Grade;


string ari(string s){

  int characters = 0, words = 0, sente = 0;
  for(int i = 0; i < strlen(s); i++){
    if( isalnum(s[i]) ){
     characters += 1;
     }
     if(s[i] == ' '){
     words += 1;
     }
     if(s[i] == '.' || s[i] == '?' || s[i] == '!' ){
     sente += 1;
     }
    
  }
 
 
  float a = 4.71 * characters/words  + 0.5 * words/sente - 21.43;
  float b = a - (int)a;
    if ( b < 1 && b > 0 ){
       a = (int)a+1;
       }else{
       a = (int)a;
       }                             
 
 Grade g[14] = {
         {.score = 1 , .age = "5 to 6"   , .gradelevel = "Kindergart…
