#include<stdio.h>
#include<stdlib.h>

int main() {
    // int n;

    // printf("Enter a number: ");
    // scanf("%d", &n);

    // printf("the number is %d", n);

    // int arr[5] = {1, 3, 5, 7, 9};

    // for(int i = 0; i < 5; i++) {
    //     printf("%d\n", arr[i]);
    // }
    
    // int sum(int, int);

    // int x = sum(4, 5);
    // printf("%d", x);

    // char ch;

    // printf("Enter the character");
    // scanf(" %c", &ch);

    // printf("the character that is read out: %c", ch);

    
    
    // char name[50];
    // printf("Emter the string in the Name: ");


    // fgets(name, sizeof(name), stdin);

    // int * ptr = &n;

    // int *ptr = arr;

    // printf("the pointer is storing the data: %d", *(ptr + 3));
    
    // for(int i = 0; i < 5; i++) {
    //     printf("%d\n", *(ptr + i));
    // }


    // char name[10] = "Sourav";
    // char *ptr;

    // ptr = name;

    // printf("Name: %s", ptr);


    // what are the double pointers

    // int n = 10;

    // int *ptr = &n;

    // printf("%d\n", *ptr);

    // int **dptr;
    // dptr = &ptr;

    // printf("Address of the n %d\n", &n);
    // printf("Address of the n %d\n", ptr);
    // printf("Value of the n %d\n", n);
    // printf("Value of the n %d\n", *ptr);
    // printf("Address of the pointer ptr %d\n", &ptr);
    // printf("Address of the pointer ptr %d\n", dptr);
    // printf("Address of the pointer n %d\n", *dptr);
    // printf("Value of the pointer n %d\n", **dptr);

    //  int x = 10, y = 20;

    //  void swap(int *, int *);
    //  printf("X: %d\n", x);
    //  printf("Y: %d\n", y);

    //  swap(&x, &y);

    //  printf("X: %d\n", x);
    //  printf("Y: %d\n", y);


    //Function pointer
    // int sum(int, int);

    // int (*fptr)(int, int) = &sum;

    // printf("%d", (*fptr)(10, 20));

    // int *ptr1, *ptr2;

    // ptr1 = malloc(4 * sizeof(int));

    // ptr2 = (int *) calloc(1, sizeof(int));
    // // int arr = {1, 2, 3, 4};
    // *ptr1 = 4;
    // *(ptr1 + 1) = 8;
    // *(ptr1 + 2) = 12;
    // *(ptr1 + 3) = 16;

    // for(int i = 0; i < 4; i++) {
    //     printf("%d\n", *(ptr1 + i));
    // }

    // *ptr2 = 10;

    // printf("%d\n", *ptr2);


    // int arr[2][2] = {{1, 2}, {3, 4}};
    // // int *ptr = &arr[0][0];
    // int (*ptr)[2] = &arr[0];

    // // for(int i = 0; i < 4; i++) {
    // //     printf("%d ", *(ptr ++));
    // // }

    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         // printf("%d ", ptr[i][j]);
    //         printf("%d ", (*(ptr + i)+ j));
    //     }
    //     printf("\n");
    // }


    char c[2][2] = {{'a', 'b'}, {'c', 'd'}};
    char (*ptr)[2] = c;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            // printf("%c ", ptr[i][j]);
            // printf("%c ", *((char *)ptr + i * 2 + j));
            printf("%c ", *(*(ptr + i) + j));
        }
    }


    return 0;
}

// int sum(int a, int b) {
//     return a + b;
// }


// Value passed as referenve
// void swap(int *x, int *y) {
//     int tmp = *x;
//     *x = *y;
//     *y = tmp;
// }

// int sum(int x, int y) {
//     return x + y;
// }