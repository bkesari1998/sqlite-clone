#pragma once

#include "input_buffer.h"

// Prints startup message
void print_startup(void);

// Handles user input in an infinite loop
void prompt_loop(InputBuffer_t *p_input_buffer);
