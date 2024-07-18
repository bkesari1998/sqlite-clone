#include <string.h>
#include <stdio.h>
#include "statement.h"
#include "io.h"

PrepareResult_t prepare_statement(InputBuffer_t *p_input_buffer,
                                  Statement_t *p_statement) 
{

    PrepareResult_t return_val = PREPARE_SUCCESS;
    
    char buffer_copy[MAX_COMMAND_LEN];
    strncpy(buffer_copy, p_input_buffer->buffer, MAX_COMMAND_LEN);

    char *token = strtok(buffer_copy, " ");

    if (strncmp(token, COMMAND_SELECT, MAX_COMMAND_LEN) == 0) {
        p_statement->type = STATEMENT_SELECT;
    } else if (strncmp(token, COMMAND_INSERT, MAX_COMMAND_LEN) == 0) {
        p_statement->type = STATEMENT_INSERT;
    } else {
        return_val = PREPARE_UNRECOGNIZED_COMMAND;
    }

    return return_val;
}

void execute_statement(Statement_t *p_statement) {
    
    switch (p_statement->type) {
    case STATEMENT_INSERT:
         printf("This is where we would do an insert.\n");
         break;
    case STATEMENT_SELECT:
        printf("This is where we would do a select.\n");
        break;
    }
}