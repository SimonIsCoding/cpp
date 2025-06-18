# C++ Modules 00-04

This repository contains a series of C++ learning modules, each divided into several exercises. The modules are designed to progressively introduce and reinforce core C++ concepts, from basic syntax to object-oriented programming and advanced features.

## Project Structure

- `cpp00/` — Introduction to C++ basics, command-line arguments, classes, and static members.
- `cpp01/` — Memory allocation, references, pointers, and file I/O.
- `cpp02/` — Fixed-point numbers, operator overloading, and class design.
- `cpp03/` — Inheritance, polymorphism, and advanced class features.
- `cpp04/` — Abstract classes, interfaces, deep copies, and more complex inheritance.

Each module (`cpp00` to `cpp04`) contains several exercises (`ex00`, `ex01`, etc.), each in its own subdirectory. Every exercise is a standalone C++ program with its own `Makefile`.

## How to Build and Run

1. Navigate to the desired exercise directory, e.g.:
   ```sh
   cd cpp01/ex03
   ```
2. Build the program using the provided Makefile:
   ```sh
   make
   ```
3. Run the resulting executable (the name may vary, often `ex00`, `ex01`, etc., or as specified in the Makefile):
   ```sh
   ./ex03
   ```

## Module Overview

### cpp00
- **ex00:** Simple program to convert input to uppercase (megaphone).
- **ex01:** PhoneBook application using classes and arrays.
- **ex02:** Bank account management with static class members and logging.

### cpp01
- **ex00:** Stack vs heap allocation with a `Zombie` class.
- **ex01:** Dynamic array of objects (`zombieHorde`).
- **ex02:** Demonstrates pointers and references.
- **ex03:** Classes with references and member functions (`HumanA`, `HumanB`, `Weapon`).
- **ex04:** File I/O and string replacement.
- **ex05:** Simple logging class (`Harl`).
- **ex06:** Extended logging with switch/case logic.

### cpp02
- **ex00:** Fixed-point number class basics.
- **ex01:** Operator overloading for fixed-point numbers.
- **ex02:** More advanced fixed-point operations.

### cpp03
- **ex00:** Simple inheritance (`ClapTrap` class).
- **ex01:** Inheritance and method extension (`ScavTrap`).
- **ex02:** Multiple inheritance and method overriding (`FragTrap`).

### cpp04
- **ex00:** Introduction to abstract classes and inheritance (`Animal`, `Cat`, `Dog`).
- **ex01:** Deep copy and resource management (`Brain`).
- **ex02:** Abstract base class and further inheritance (`AAnimal`).
- **ex03:** Interface implementation and advanced inheritance (Materia system).

## Requirements
- C++98 standard (as enforced by the Makefiles)
- A C++ compiler (e.g., `g++` or `clang++`)
