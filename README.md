# ![printf_logo](3.test/img/printf_logo.png)
This project is a **recode of stdio's 'printf' function** in accordance with the 42 code norm.

## :dart: Subject
You can see the subject **pdf** [here.](https://cdn.intra.42.fr/pdf/pdf/10819/en.subject.pdf)
  * It manages the following conversion: **cspdiuxX%**
  * It also manages any combination of the following flags: **-0.***
  * Example:
  ```c
    #include "../2.ft_printf/ft_printf.h"
    #include <stdio.h>

    int main(void)
    {
      int num, hex = 20124;
      int *ptr = &num;
      char *str = "EXAMPLE";

      ft_printf("Integer: %d\n", num);
      ft_printf("Hexadecimal: %0*x\n", 10, hex);
      ft_printf("Pointer address: %p\n", ptr);
      ft_printf("String: |%-15s|\n", str);

      return (0);
    }
  ```
  * Output:
  ```
    Integer: 32767
    Hexadecimal: 0000004e9c
    Pointer address: 0x7fff2a63b36c
    String: |EXAMPLE        |
