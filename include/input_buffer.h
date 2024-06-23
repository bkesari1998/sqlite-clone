#pragma once

#include <stddef.h>

// Wrapper around state storage for
// interaction with getline() function
typedef struct InputBuffer  {
    char *buffer;
    size_t buffer_len;
    ssize_t input_len;
} InputBuffer_t;

