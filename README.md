# Head First Design Patterns in C++ 

This repository contains C++ implementations of the design pattern examples from the book *Head First Design Patterns*. Each chapter's patterns and examples are organized in separate directories, with CMake used for building the projects.

## Repository Structure

The repository is structured with a directory for each chapter of the book. Each directory contains C++ code demonstrating the design patterns covered in that chapter.

## How to Build

### Prerequisites
- A C++ compiler that supports C++20 or later
- [CMake](https://cmake.org/download/)

### Building the Project

1. Clone the repository:
    ```bash
    git clone https://github.com/mrezabayat/head-first-design-patterns.git
    cd head-first-design-patterns
    ```

2. To build a specific chapter, navigate to the chapter directory:
    ```bash
    cd Chapter01
    ```

3. Create a build directory and run CMake:
    ```bash
    mkdir build
    cd build
    cmake ..
    make
    ```

4. Run the executable:
    ```bash
    ./Chapter01Executable
    ```

## Project Structure

Each chapter is a standalone C++ project demonstrating a specific set of design patterns, such as:

- **Chapter 1**: Strategy Pattern

## Contributing

Feel free to submit issues or pull requests if you find any bugs or improvements. 

## License

This project is licensed under the MIT License. See the [LICENSE](./LICENSE) file for details.
