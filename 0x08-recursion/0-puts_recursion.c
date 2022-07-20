

▼

▼

#include "main.h"





void _puts_recursion(char *s)

{
  
  // define your base case
  
  if(*s == '\0') // (check if you are at the end of the string)
    
    {
      
      _putchar('\n'); // print next line if end of string
      
    }
  
  else
    
    {
      
      _putchar(*s); // print the first character of the string
      
      _puts_recursion(++s);  // recursively print the rest of the characters
      
    }
  

  
}
