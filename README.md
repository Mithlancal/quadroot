# 🔢 Quadratic Root Finder (C++)

## 📌 Overview
This is a simple C++ program that solves quadratic equations of the form:

ax² + bx + c = 0

It calculates real and complex roots using the **quadratic formula** and implements a custom **Newton-Raphson method** to compute square roots.

---

## ⚙️ Features
- Accepts user input for coefficients a, b, and c
- Detects invalid quadratic equations (a = 0)
- Computes:
  - Real and distinct roots
  - Real and equal roots
  - Complex (non-real) roots
- Uses custom Newton’s method for square root calculation

---

## 🧮 Formula Used

### Quadratic Formula:
x = (-b ± √(b² - 4ac)) / (2a)

### Discriminant:
D = b² - 4ac

---

## 📥 Input Format
Enter coefficients in order:
a b c

Example:

This represents:
x² - 3x + 2 = 0

---

## 📤 Output Cases

### ✔️ Case 1: Real and Distinct Roots (D > 0)
Two different real roots are displayed.

### ✔️ Case 2: Real and Equal Roots (D = 0)
One repeated root is displayed.

### ✔️ Case 3: Complex Roots (D < 0)
User is asked if they want to view complex roots.

---


# Thank You
