/**
 * @file hello_artisan.c
 * @brief Phase 01: Fundamentals - Memory, Pointers, and Craftsmanship.
 * 
 * "Bad programmers worry about the code. Good programmers worry about data structures 
 * and their relationships." - Linus Torvalds
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int mastery_level;
} Artisan;

void print_artisan(Artisan *a) {
    printf("--- Artisan Status ---\n");
    printf("Name: %s\n", a->name);
    printf("Mastery Level: %d%%\n", a->mastery_level);
    printf("Memory Address: %p\n", (void*)a);
    printf("----------------------\n");
}

int main() {
    printf("Initializing Holistic Artisan Environment...\n\n");

    // Static allocation (Stack)
    Artisan stack_artisan = {"Marcus Aurelius", 100};
    printf("Stack Artisan initialized at: %p\n", (void*)&stack_artisan);
    print_artisan(&stack_artisan);

    // Dynamic allocation (Heap)
    Artisan *heap_artisan = (Artisan *)malloc(sizeof(Artisan));
    if (heap_artisan == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        return 1;
    }

    strcpy(heap_artisan->name, "Nikola Tesla");
    heap_artisan->mastery_level = 95;

    printf("\nHeap Artisan initialized at: %p\n", (void*)heap_artisan);
    print_artisan(heap_artisan);

    // Pointer Arithmetic Example
    printf("\nPointer Arithmetic - Artisan Size: %zu bytes\n", sizeof(Artisan));
    
    // Manual Memory Management (Aurelius Discipline)
    free(heap_artisan);
    printf("\nHeap memory freed. Discipline maintained.\n");

    return 0;
}
