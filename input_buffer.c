#include <stdlib.h>
#include <stdio.h>
#include "input_buffer.h"
#include "error_codes.h"
#include "utils.h"

InputBuffer_t *new_input_buffer(void) {
    
    InputBuffer_t *p_input_buffer = calloc(1, sizeof(InputBuffer_t));
    return p_input_buffer;
}

void close_input_buffer(InputBuffer_t *p_input_buffer) {
    FREE(p_input_buffer->buffer);
    FREE(p_input_buffer);

    return;
}

void read_input(InputBuffer_t *p_input_buffer) {

    ssize_t bytes_read = getline(&p_input_buffer->buffer, 
                                 &p_input_buffer->buffer_len,
                                 stdin);
    
    if (bytes_read <= 0) {
        perror("Error reading input");
        exit(COMMAND_LINE_IO_ERROR);
    }

	// Ignore trailing newline
 	p_input_buffer->input_len = bytes_read - 1;
  	p_input_buffer->buffer[bytes_read - 1] = 0;

	return;
}
