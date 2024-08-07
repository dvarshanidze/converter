#include <stdio.h>

int main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int userinputF;
  int userinputC;
  int userinputUSDtoEuro;
  int userinputUSDtoJPY;
  int userinputUSDtoRMB;
  int userinputOunce; 
  int userinputGram; 
  int fahrenheitToCelcius; 
  int celciusToFahrenheit;
  float USDtoEURO;
  float USDtoJPY;
  float USDtoRMB;
  float ounceToPounds;
  float gramsToPounds;
  
  printf("Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);
  
  if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d \n",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d \n",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  
  else if(category == 'C') {
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for $ to Euro. \n");
      printf("Enter 2 for $ to Japanese yen. \n");
      printf("Enter 3 for $ to Chinese yuan. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the $ amount: \n");
          scanf("%d",&userinputUSDtoEuro);
          USDtoEURO = userinputUSDtoEuro * 0.87;
          printf("Euro: %.2f \n",USDtoEURO); // .2f rounds the float to only 2 decimal
      }
      else if(currencyChoice == 2){
          printf("Please enter the $ amount: \n");
          scanf("%d",&userinputUSDtoJPY);
          USDtoJPY = userinputUSDtoJPY * 111.09;
          printf("Japanese yen: %.2f \n",USDtoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the $ amount: \n");
        scanf("%d",&userinputUSDtoRMB);
        USDtoRMB = userinputUSDtoRMB * 6.82;
        printf("Chinese yuan: %.2f \n",USDtoRMB);
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(category == 'M'){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Ounces to Pounds. \n");
      printf("Enter 2 for Gram to Pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the Ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f \n",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the Gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f \n",gramsToPounds);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
  return 0;
}