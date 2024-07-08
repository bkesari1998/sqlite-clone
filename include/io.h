#pragma once

#include "input_buffer.h"

#define MAX_COMMAND_LEN 50

#define COMMAND_EXIT ".exit"
#define COMMAND_HELP ".help"

// Prints database prompt
void print_prompt(void);

// Handles user input in an infinite loop
void prompt_loop(InputBuffer_t *p_input_buffer);
