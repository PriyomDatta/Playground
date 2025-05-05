#include <assert.h>
#include <stdio.h>
#include "../src/module/own_impl.c"


// Mocked functions
int get_intf_0(void) {
    return 10; // Example initial value
}

void get_intf_1(char *var_2) {
    static char test_cases[] = {'+', '-', '*', '/', 'x'}; // Test cases for var_2
    static int index = 0;
    *var_2 = test_cases[index++];
}

// Test function for process_1
void test_process_1() {
    // Test case 1: var_2 = '+'
    //char var_2 = '+';
    //get_intf_1(&var_2);
    int result = process_1();
    assert(result == 12); // 10 + 2 = 12

    // Test case 2: var_2 = '-'
    //var_2 = '-';
    //get_intf_1(&var_2);
    result = process_1();
    assert(result == 8); // 10 - 2 = 8

    // Test case 3: var_2 = '*'
    //var_2 = '*';
    //get_intf_1(&var_2);
    result = process_1();
    assert(result == 20); // 10 * 2 = 20

    // Test case 4: var_2 = '/'
    //var_2 = '/';
    //get_intf_1(&var_2);
    result = process_1();
    assert(result == 5); // 10 / 2 = 5

    // Test case 5: var_2 = 'x' (default case)
    //var_2 = 'x';
    //get_intf_1(&var_2);
    result = process_1();
    assert(result == 10); // No operation, result remains 10

    printf("All test cases for process_1 passed!\n");
}

int main() {
    test_process_1();
    return 0;
}