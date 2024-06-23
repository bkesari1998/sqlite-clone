#include <stdio.h>
#include <stdlib.h>
#include "input_buffer.h"
#include "utils.h"


int main(const int argc, const char *argv[]) {
    
    UNUSED_ARG(argc);
    UNUSED_ARG(argv);

    // Initialize input buffer
    InputBuffer_t input_buffer = {.buffer = NULL, 
                                  .buffer_len = 0, 
                                  .input_len = 0};
    UNUSED_ARG(input_buffer);

    return 0;
}
