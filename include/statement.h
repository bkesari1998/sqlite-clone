#pragma once

#include "input_buffer.h"

#define COMMAND_SELECT "select"
#define COMMAND_INSERT "insert"

typedef enum StatementType {
    STATEMENT_SELECT,
    STATEMENT_INSERT,
} StatementType_t;

typedef enum PrepareResult {
    PREPARE_SUCCESS,
    PREPARE_UNRECOGNIZED_COMMAND,
} PrepareResult_t;

// Converts SQL statement from input buffer into internal representation
PrepareResult_t prepare_statement(InputBuffer_t *p_input_buffer,
                                  StatementType_t *statement);

// Executes SQL command formatted in an internal representation
void execute_statement(StatementType_t statement);