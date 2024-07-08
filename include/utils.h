#pragma once

#define UNUSED_ARG(ARG) ((void) ARG)

#define FREE(PTR) ({ \
    free(PTR);       \
    PTR = NULL;      \
})
