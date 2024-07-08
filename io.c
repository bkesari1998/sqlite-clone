#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "io.h"

void print_prompt(void) {

    printf("db > ");
}

void prompt_loop(InputBuffer_t *p_input_buffer) {
    while (true) {
        print_prompt();
        read_input(p_input_buffer);

        if (strncmp(p_input_buffer->buffer, COMMAND_EXIT, MAX_COMMAND_LEN) == 0) {
            return;
        } else {
            printf("Unrecognized command '%s'.\n",
                   p_input_buffer->buffer);
        }
    }
}
