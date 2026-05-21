# CPP Learning Repository

A comprehensive C++ learning resource containing fundamental programming concepts, Object-Oriented Programming (OOP) principles, and practical exercises. This repository is designed as a progressive learning path from basic to intermediate C++ concepts.

## 📁 Repository Structure

### 1. **array/** - Array Fundamentals
Contains basic array concepts and data structure fundamentals.

**Subdirectories:**
- **Datatype/** - Understanding C++ data types and conversions
  - `datatype.cpp` - Basic data type declarations (int, float, double, char, bool, etc.)
  - `strings.cpp` - String manipulation and handling
  - `typecasting.cpp` - Explicit and implicit type conversions

- **Operators/** - Operator usage and expressions
  - `op.cpp` - Various operators (arithmetic, logical, comparison)
  - `task2.cpp`, `task3.cpp`, `task4.cpp` - Operator practice problems

- **variables/** - Variable declaration and scope
  - `hello.cpp` - Hello World program (starter)
  - `variables.cpp` - Variable declarations and initialization

**Core Files:**
- `a1.cpp` - Basic array iteration and functions
- `cv_cr.cpp` - Const and reference parameters
- `pointerarr.cpp` - Pointers and array handling
- `runtimevar.cpp` - Runtime variable handling
- `twopotnter.cpp` - Pointer manipulation

### 2. **arraypractice/** - Array Practice Problems
Dedicated practice exercises for array operations and algorithms.

- `a1.cpp` - Array exercise 1
- `a2.cpp` - Array exercise 2

### 3. **exersice/** - Comprehensive Programming Exercises
A collection of 39+ programming exercises covering various topics and difficulty levels.

**Exercises Include:**
- Array and list operations
- String manipulation
- Mathematical algorithms
- Data processing
- Logic puzzles

**File Range:** `ex1.cpp` through `ex39.cpp`

*Notable Exercise:*
- `ex1.cpp` - Finds the third largest number in a dynamic array

### 4. **opps/** - Object-Oriented Programming
In-depth implementation of OOP principles with a consistent theme (tea shop examples).

**Core Concepts:**

- **`abstract.cpp`** - Abstract Classes & Interfaces
  - Pure virtual functions
  - Abstract base classes
  - Template method pattern

- **`inheritance.cpp`** - Inheritance Hierarchies
  - Single inheritance
  - Multiple inheritance patterns
  - Method overriding

- **`encapsulation.cpp`** - Data Encapsulation
  - Private data members
  - Getter and setter methods
  - Access control

- **`geter_seter.cpp`** - Getter/Setter Implementation
  - Property management
  - Validation in accessors

- **`delegatingcons.cpp`** - Constructor Delegation
  - Delegating constructors (C++11)
  - Constructor chaining

- **`a1.cpp`, `a2.cpp`, `a3.cpp`, `a4.cpp`** - OOP Practice Problems

## 🎯 Learning Path

### Beginner Level
1. Start with `variables/hello.cpp` - Hello World
2. Progress through `variables/variables.cpp` - Variable concepts
3. Learn `Datatype/datatype.cpp` - Data type system
4. Study `Operators/op.cpp` - Operators and expressions

### Intermediate Level
1. Explore `array/a1.cpp` - Array basics
2. Study `array/pointerarr.cpp` - Pointers and arrays
3. Practice with `arraypractice/` files
4. Complete exercises in `exersice/` folder

### Advanced Level
1. Learn `opps/inheritance.cpp` - Class hierarchies
2. Master `opps/encapsulation.cpp` - Data hiding
3. Study `opps/abstract.cpp` - Abstract patterns
4. Implement `opps/delegatingcons.cpp` - Modern C++ features

## 💡 Key Topics Covered

### Fundamentals
- ✅ Data types (int, float, double, char, bool, etc.)
- ✅ Variables and constants
- ✅ Operators (arithmetic, logical, comparison)
- ✅ Input/Output with `iostream`

### Data Structures
- ✅ Arrays (static and dynamic)
- ✅ Pointers and references
- ✅ Memory management (new/delete)
- ✅ String handling

### Object-Oriented Programming
- ✅ Classes and objects
- ✅ Encapsulation (private/public)
- ✅ Inheritance (single and multiple)
- ✅ Abstract classes and interfaces
- ✅ Virtual functions and polymorphism
- ✅ Constructor delegation (C++11)

## 🔧 Requirements

- **C++ Compiler**: GCC, Clang, or MSVC (C++11 or later)
- **IDE/Editor**: VS Code, CodeBlocks, Visual Studio, or any C++ IDE
- **Build Tools**: g++, clang++, or equivalent

## 🚀 How to Use

### Compile and Run a File
```bash
# Using g++
g++ -o output_name filename.cpp
./output_name

# Or directly
g++ filename.cpp && ./a.out
```

### Example: Running a Basic Exercise
```bash
cd array
g++ -o hello variables/hello.cpp
./hello
```

### Example: Running OOP Examples
```bash
cd opps
g++ -o inheritance inheritance.cpp
./inheritance
```

## 📝 Code Conventions

- Uses `std::cout` and `std::cin` for I/O
- Follows `using namespace std;` pattern
- Includes comments for clarity
- Tea-themed examples (interesting learning approach!)

## 🎓 What You'll Learn

After completing this repository, you will be able to:
- ✅ Write and debug C++ programs
- ✅ Work with arrays, pointers, and references
- ✅ Design and implement classes
- ✅ Use inheritance and polymorphism
- ✅ Implement encapsulation and abstraction
- ✅ Solve algorithmic problems
- ✅ Manage memory effectively

## 📚 File Statistics

| Directory | Files | Purpose |
|-----------|-------|---------|
| array/ | 11 | Fundamentals & data types |
| array/Datatype/ | 3 | Data type concepts |
| array/Operators/ | 4 | Operator practice |
| array/variables/ | 2 | Variable concepts |
| arraypractice/ | 2 | Array practice |
| exersice/ | 39+ | Programming exercises |
| opps/ | 10 | OOP concepts |
| **Total** | **~70 files** | Comprehensive C++ learning |

## 🎯 Practice Tips

1. **Modify and Experiment** - Change values and logic to see what happens
2. **Read Error Messages** - Understanding compiler errors is crucial
3. **Add Comments** - Document your understanding
4. **Refactor Code** - Rewrite solutions in different ways
5. **Combine Concepts** - Create programs using multiple concepts together

## 📖 Next Steps

After mastering these fundamentals:
- Learn template programming
- Study STL (Standard Template Library)
- Explore file I/O and stream handling
- Practice competitive programming
- Build real-world projects

## ⚠️ Notes

- Some files may have `tempCodeRunnerFile.cpp` which can be safely deleted
- Ensure your compiler supports C++11 or later for modern features (like delegating constructors)
- Use `-Wall -Wextra` flags for better error detection while compiling

## 🤝 Contributing

Feel free to:
- Add more exercises
- Improve existing code with comments
- Add solutions explanations
- Fix bugs or optimize code

---

**Created:** 2026 | **Language:** C++ | **Level:** Beginner to Intermediate

Happy Learning! 🎓
