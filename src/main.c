#include <stdio.h>
#include "../include/file_manager/document.h"

int main() {
    struct file* file = loadFile("llp");
    if (!file) {
        file = createFile("llp");
        if (!file) {
            printf("Error");
            return -1;
        }
    }

    return 0;
}
