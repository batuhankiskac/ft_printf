### **GitHub Project: ft_printf**

#### **Project Description**
This project is a reimplementation of the `printf` function. It is written in C and mimics the behavior of the standard `printf` function by supporting the `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%` format specifiers. The goal of this project is to help students learn advanced concepts such as dynamic memory management, writing operations (`write`), and variadic functions (`va_list`, `va_arg`) in C.

---

### **Features**
- **Supported Format Specifiers:**
  - `%c` : Prints a character.
  - `%s` : Prints a string (`(nil)` if `NULL`).
  - `%p` : Prints a pointer address in hexadecimal format.
  - `%d`, `%i` : Prints signed integers.
  - `%u` : Prints unsigned integers.
  - `%x`, `%X` : Prints hexadecimal (lowercase and uppercase).
  - `%%` : Prints a percent sign (`%`).

- **42 Norm Compliance:** The code is structured according to 42 School's Norm standards.
- **Recursive Hexadecimal and Integer Printing:** Efficient recursive implementations like `ft_puthex` and `ft_putnbr`.

---

### **File Structure**
- **`ft_printf.c`**:
  - Contains the main `ft_printf` function that processes the format string and calls the appropriate helper functions.

- **`ft_printf_func.c`**:
  - Contains helper functions for handling supported format specifiers (`ft_putstr`, `ft_putnbr`, `ft_puthex`, `ft_putptr`).

- **`ft_printf.h`**:
  - Includes all function prototypes and necessary `#include` directives.

- **`Makefile`**:
  - Provides rules for compiling and cleaning the project.

---

### **Usage**
1. **Compile the Library:**
   ```bash
   make
   ```

2. **Testing the Library:**
   Create a `main.c` file and link the library as follows:
   ```bash
   cc -Wall -Wextra -Werror main.c -L. -lftprintf
   ./a.out
   ```

3. **Example `ft_printf` Usage:**
   ```c
   ft_printf("Hexadecimal: %x\n", 255);
   ft_printf("Pointer: %p\n", &main);
   ft_printf("Char: %c, String: %s\n", 'A', "Hello, World!");
   ```

---

### **Makefile Targets**
- **`make`**: Builds the library (`libftprintf.a`).
- **`make clean`**: Removes object files (`.o` files).
- **`make fclean`**: Removes object files and the library.
- **`make re`**: Cleans and rebuilds the library.

---

### **Example Outputs**
1. **Format String Example:**
   ```c
   ft_printf("Char: %c, String: %s, Decimal: %d\n", 'A', "Hello", 42);
   ```
   **Output:**
   ```
   Char: A, String: Hello, Decimal: 42
   ```

2. **Pointer and Hexadecimal Example:**
   ```c
   ft_printf("Pointer: %p, Hex: %x, Upper Hex: %X\n", &main, 255, 255);
   ```
   **Output:**
   ```
   Pointer: 0x7ffeebbcc420, Hex: ff, Upper Hex: FF
   ```

---

### **Contribution and Development**
You are welcome to contribute and enhance the project. Please follow these steps:
1. Fork the repository.
2. Create a new branch (`feature/your-feature`).
3. Make your changes and commit them.
4. Submit a pull request.

---

### **License**
This project is licensed under the [MIT License](https://opensource.org/licenses/MIT). Feel free to use, distribute, and improve it as you wish.

---

You can use this as your GitHub README file or add it directly to your project description. Let me know if you need further assistance! 😊
