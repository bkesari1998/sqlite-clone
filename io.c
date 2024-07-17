#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "io.h"

// Command macros
#define COMMAND_EXIT ".exit"
#define COMMAND_HELP ".help"

// Buffer lengths
#define MAX_COMMAND_LEN 50
#define TIME_BUFFER_MAX 26

// Prints DB prompts
static void print_prompt(void) {

    printf("db > ");
}

// Prints help message
static void print_help(void) {
    printf("TO DO: Implement print_help() function.\n");
}

void print_startup(void) {
    time_t timer;
    char buffer[TIME_BUFFER_MAX];
    struct tm* p_tm;

    timer = time(NULL);
    p_tm = localtime(&timer);

    strftime(buffer, TIME_BUFFER_MAX, "%Y-%m-%d %H:%M:%S", p_tm);

    printf("SQLiteClone version 1.0.0 %s\n", buffer);
    printf("Enter \".help\" for usage hints.\n");
    printf("Connected to a transient in-memory database.\n");
    printf("Use \".open FILENAME\" to reopen on a persistent database.\n");
}

void prompt_loop(InputBuffer_t *p_input_buffer) {
    while (true) {
        print_prompt();
        read_input(p_input_buffer);

        if (strncmp(p_input_buffer->buffer, COMMAND_EXIT, MAX_COMMAND_LEN) == 0) {
            return;
        } else if (strncmp(p_input_buffer->buffer, COMMAND_HELP, MAX_COMMAND_LEN) == 0) {
            print_help();
        } else {
            printf("Unrecognized command '%s'.\n",
                   p_input_buffer->buffer);
        }
    }
}
