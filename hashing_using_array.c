#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int hashTable[SIZE];

// Initialize the hash table
void init() {
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }
}

// Hash function
int hash(int key) {
    return key % SIZE;
}

// Insert key into hash table (linear probing)
void insert(int key) {
    int index = hash(key);
    int originalIndex = index;
    int i = 0;

    while (hashTable[index] != -1 && i < SIZE) {
        index = (originalIndex + ++i) % SIZE;
    }

    if (i < SIZE) {
        hashTable[index] = key;
        printf("Inserted %d at index %d\n", key, index);
    } else {
        printf("Hash table is full. Cannot insert %d\n", key);
    }
}

// Search for a key in the hash table
void search(int key) {
    int index = hash(key);
    int originalIndex = index;
    int i = 0;

    while (hashTable[index] != -1 && i < SIZE) {
        if (hashTable[index] == key) {
            printf("Found %d at index %d\n", key, index);
            return;
        }
        index = (originalIndex + ++i) % SIZE;
    }

    printf("%d not found in hash table.\n", key);
}

// Display the hash table
void display() {
    printf("\nHash Table:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Index %d: %d\n", i, hashTable[i]);
    }
}

// Main menu
int main() {
    int choice, key;
    init();

    while (1) {
        printf("\n========== MENU ==========\n");
        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("==========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                insert(key);
                break;

            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                search(key);
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
