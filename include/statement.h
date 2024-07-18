#pragma once

#include "input_buffer.h"
#include "row.h"

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

typedef struct Statement {
    StatementType_t type;
    Row_t row_to_insert; // Only used by insert statement
} Statement_t;

// Converts SQL statement from input buffer into internal representation
PrepareResult_t prepare_statement(InputBuffer_t *p_input_buffer,
                                  Statement_t *p_statement);

// Executes SQL command formatted in an internal representation
void execute_statement(Statement_t *p_statement);