C - Structures, typedef


Resources
Read or watch:

:0x0d. Structures.pdf
https://intranet.hbtn.io/projects/2164#quiz-completed

:struct (C programming language)
https://en.wikipedia.org/wiki/Struct_(C_programming_language)

:Documentation: structures
https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures

:0x0d. Typedef and structures.pdf
https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/c8ff3e6f7202be7fa

:typedef
https://intranet.hbtn.io/projects/2164#quiz-completed

:Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189

:The Lost Art of C Structure Packing (Advanced - not mandatory)
http://www.catb.org/esr/structure-packing/

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are structures, when, why and how to use them
How to use typedef
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are printf, malloc, free and exit.
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
Don’t forget to push your header file
All your header files should be include guarded



0. Poppy
Define a new type struct dog with the following elements:
name, type = char *
age, type = float
owner, type = char *


1. A dog is the only thing on earth that loves you more than you love yourself
mandatory
Write a function that initialize a variable of type struct dog
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);


2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Write a function that prints a struct dog
Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.


3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Define a new type dog_t as a new name for the type struct dog.


4. A door is what a dog is perpetually on the wrong side of
Write a function that creates a new dog.
Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails


5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Write a function that frees dogs.
Prototype: void free_dog(dog_t *d);


