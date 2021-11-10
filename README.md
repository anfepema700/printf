# _printf function



# Description 

Function that emulates some features of the standard library function, printf.  The _printf function prints characters, strings, numbers and the percent symbol (%), by using the same specifiers; %c, %s and %d and %i. 

# Table Content

- Flowchart
- Installation
- Example
- Authors



# Flowchart
![PRINTF drawio](https://user-images.githubusercontent.com/49293767/141160495-df20e80a-253b-4274-b427-c14b471464aa.png)

# Installation

1. Download using: git clone https://github.com/anfepema700/printf.git

2. Compilation: 

   ```c
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
   ```

# Example

1. Example print an integer into variable:

int i = 10;

_printf("%d", i);

**<u>*output*: </u>**

**<u>10</u>**

2. Example print a string

_printf("Print example string:%s", "abc" );

<u>*output*:**** </u>

**<u>Print example string abc**</u>





# Authors

Sergio Balcázar

Andrés Pérez
