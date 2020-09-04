// Author: Krish Choudhary ksc5496@psu.edu
// Collaborator: Nicole Giron nqg5259@psu.edu
// Collaborator: Youhyun Kim yhk5109@psu.edu
// Collaborator: Geng Niu gjn5124@psu.edu

#include <readline/readline.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  double fahrenheit;
  char * temperature = readline("Enter temperature in celsius: ");
  double celsius = atof(temperature);
  fahrenheit = ((celsius*9/5)) + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", celsius, fahrenheit);
  return 0;
}