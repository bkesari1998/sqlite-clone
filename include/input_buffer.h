#pragma once

#include <sys/types.h>

// Wrapper around state storage for
// interaction with getline() function
typedef struct InputBuffer  {
    char *buffer;
    size_t buffer_len;
    ssize_t input_len;
} InputBuffer_t;

// Returns pointer to 0-initialized input buffer struct.
// Instance must be free'd
InputBuffer_t *new_input_buffer(void);

// Frees heap memory associated with input buffer struct
void close_input_buffer(InputBuffer_t *p_input_buffer);

// Populates InputBuffer_t struct with stdin input and
// metadata
void read_input(InputBuffer_t *p_input_buffer);
