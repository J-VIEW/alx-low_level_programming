# C - Structures, typedef <br>
structures allow you to create custom data types to organize related data, while typedef simplifies code readability by providing custom names for data types, whether they are built-in or user-defined.<br>
Structures (struct):

A structure, often referred to as a struct, is a composite data type in C that allows you to group variables of different data types under a single name.
It provides a way to create user-defined data structures that can represent more complex data entities.
Each member within a structure has its own data type and a name.
You can access the members of a structure using the dot (.) operator.
Structures are commonly used to represent real-world entities or collections of related data.
Example:
struct Point {
    int x;
    int y;
};

Typedef (typedef):

The typedef keyword is used in C to create custom data type aliases.
It allows you to define a new name for an existing data type, making your code more readable and maintainable.
You can use typedef with built-in data types or with user-defined types like structures or enums.
It's often used to make complex or nested data types more concise.
Example using typedef with a structure:

typedef struct Point {
    int x;
    int y;
} Point;
Here, Point is an alias for struct Point, so you can declare variables of type Point instead of struct Point.
