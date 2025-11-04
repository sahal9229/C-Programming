# C-Programming

# 💻 C Programming Projects — Week Review

Welcome to my **C Programming Practice Repository!**  
This week’s focus was on strengthening **C fundamentals** — from control structures to loops and functions — through mini projects and algorithm-based exercises.

---

## 🧩 Topics Covered

✅ Prime Number Finder  
✅ Find Largest and Lowest Numbers from an Unsorted Array  
✅ Loops, Conditionals, and Functions  
✅ Arrays and String Handling  
✅ Pattern Printing (Alphabets & Complex Shapes)

---

## 🗂️ Tasks / Projects

### 🔹 1. Simple Calculator
**Features:**
- Performs basic arithmetic operations ➕ ➖ ✖️ ➗  
- Takes user input for numbers and operation choice  
- Displays the result neatly  

**Concepts Used:**  
Input/Output, `switch` statements, operators, and user-defined functions.

---

### 🔹 2. Palindrome Checker
**Features:**
- Checks if a **number or string** is a palindrome.  
- Handles both numeric and text inputs.  

**Concepts Used:**  
Strings, loops, conditionals, and reverse logic.

---

### 🔹 3. Factorial Program
**Features:**
- Calculates factorial using **loops** and **functions**.  
- Handles positive integers efficiently.  

**Concepts Used:**  
Loops, recursion (optional), and modular functions.

---

### 🔹 4. Alphabet Patterns
**Features:**
- Prints patterns using alphabets (like A, B, C …).  
- Demonstrates nested loops and conditional placement.  

**Concepts Used:**  
Nested loops, ASCII values, and pattern logic.

---

### 🔹 5. Complex Patterns
**Shapes:** `X`, `N`, `M`, `W`  

**Features:**
- Builds visually symmetric alphabet/number patterns.  
- Great exercise for mastering nested loop logic.

**Concepts Used:**  
Conditional logic, indexing, and grid-based visualization.

---

## 🧠 Activities

📘 **Review all weekly concepts**  
🧹 **Refactor and optimize** previous codes for clarity and efficiency  
🧩 **Add comments** and improve structure for better readability  

---

## 🧾 Example Code Snippet

```c
#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(op) {
        case '+': printf("Result = %d\n", num1 + num2); break;
        case '-': printf("Result = %d\n", num1 - num2); break;
        case '*': printf("Result = %d\n", num1 * num2); break;
        case '/': 
            if(num2 != 0) printf("Result = %.2f\n", (float)num1 / num2);
            else printf("Error! Division by zero.\n");
            break;
        default: printf("Invalid operator!\n");
    }
    return 0;
}
