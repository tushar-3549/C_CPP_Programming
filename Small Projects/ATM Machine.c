/* C Program to Display the ATM Service */
#include <stdio.h>
float balance = 0; 
int anotherTransaction; 
void transaction()
{
  int choice; 
  printf("Enter any option to be served!\n\n");
  printf("1. Withdraw\n"); 
  printf("2. Deposit\n"); 
  printf("3. Balance\n");
  scanf("%d",  &choice); 
  
  switch(choice)
{
    case 1:
    
    int amountToWidthdraw; 
    printf("Please enter amount to withdraw: "); 
    scanf("%d", &amountToWidthdraw); 
    if(amountToWidthdraw > balance)
    {
      printf("There is no insuffient funds in your account"); 
      
      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n"); 
      scanf("%d", &anotherTransaction); 
      if(anotherTransaction == 1)
      {
        
        transaction();
      }
    } 
    else 
     {
     
      balance = balance - amountToWidthdraw; 
      
      printf("You have withdrawn %d and your new balance is %f ", amountToWidthdraw, balance);
      
      
      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n"); 
      scanf("%d", &anotherTransaction); 
      if(anotherTransaction == 1)
      {
        
        transaction();
      }
      
      
    }
    break; 
    
    case 2:
    // DEPOSIT
    
    int amountToDeposit; 
    printf("Please enter amount to deposit: "); 
    scanf("%d", &amountToDeposit); 
    
    
    balance = amountToDeposit + balance; 
    
    printf("Thank you for depositing, new balance is: %f", balance); 
    
    
      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n"); 
      scanf("%d", &anotherTransaction); 
      if(anotherTransaction == 1)
      {
        
        transaction();
      }
    
    break; 
    
    case 3:
    
    // BALANCE
    printf("Your bank balance is: %f", balance); 
    
    
      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n"); 
      scanf("%d", &anotherTransaction); 
      if(anotherTransaction == 1)
      {
        
        transaction();
      }
    
    break;
  }
  
}
int main()
{
  
  
  transaction();
  
  return 0;
}
