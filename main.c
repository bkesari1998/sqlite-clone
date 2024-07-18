#include <stdio.h>
#include <stdlib.h>
#include "input_buffer.h"
#include "io.h"
#include "error_codes.h"
#include "utils.h"


int main(const int argc, const char *argv[]) {
    
    UNUSED_ARG(argc);
    UNUSED_ARG(argv);

    // Initialize input buffer
    InputBuffer_t *p_input_buffer = new_input_buffer(); 
    if (p_input_buffer == NULL) {
        perror("Unable to initialize input_buffer");
        exit(HEAP_ERROR);
    }
    
    // Print startup message
    print_startup();

    // Prompt user indefinately
    prompt_loop(p_input_buffer);

    return 0;
}
