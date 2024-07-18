#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "meta_command.h"
#include "io.h"

// Prints help message
static void print_help(void) {
    printf("TO DO: Implement print_help() function.\n");
}

MetaCommandResult_t do_meta_command(InputBuffer_t *p_input_buffer) {
    
    MetaCommandResult_t return_val = META_COMMAND_SUCCESS;

    if (strncmp(p_input_buffer->buffer, COMMAND_EXIT, MAX_COMMAND_LEN) == 0) {
        // Clean up input buffer
        close_input_buffer(p_input_buffer);
        exit(EXIT_SUCCESS);
    } else if (strncmp(p_input_buffer->buffer, COMMAND_HELP, MAX_COMMAND_LEN) == 0) {
        print_help();
    } else {
        return_val = META_COMMAND_UNRECOGNIZED_COMMAND;
    }

    return return_val;
}