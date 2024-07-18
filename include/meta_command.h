#pragma once

#include "input_buffer.h"

// Command macros
#define COMMAND_EXIT ".exit"
#define COMMAND_HELP ".help"

typedef enum MetaCommandResult {
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND,
} MetaCommandResult_t;

MetaCommandResult_t do_meta_command(InputBuffer_t *p_input_buffer);