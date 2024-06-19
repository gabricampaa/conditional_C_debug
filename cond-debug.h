
// Define DEBUG to enable debug mode
// This can be defined in the code or via the compiler command line
//#define DEBUG
#ifdef DEBUG
    #define DEBUG_PRINT(fmt, args...)    fprintf(stderr, "DEBUG: " fmt, ## args)
#else
    #define DEBUG_PRINT(fmt, args...)    /* Don't do anything in release builds */
#endif