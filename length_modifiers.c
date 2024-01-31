#include "main.h" 

int handle_length_modifiers(const char *format, int *i, va_list args) {
    int length = 0;

    // Handle length modifiers 'l' and 'h' for conversion specifiers 'd', 'i', 'u', 'o', 'x', 'X'
    // Example: check format[*i] and format[*i + 1] for 'l' and 'h' modifiers

    // Handle 'l' modifier
    if (format[*i] == 'l') {
        // Check the conversion specifier and perform the corresponding action
        switch (format[*i + 1]) {
            case 'd':
            case 'i':
                // Handle 'ld' or 'li'
                // Example: int value = va_arg(args, long);
                // ... handle the value ...
                break;
            case 'u':
                // Handle 'lu'
                // Example: unsigned int value = va_arg(args, unsigned long);
                // ... handle the value ...
                break;
            // ... handle other cases for 'o', 'x', 'X', ...
            default:
                // Handle other cases if needed
                break;
        }
 // Increment *i to skip the length modifier
        (*i)++;
    }

    // Handle 'h' modifier (similar logic as 'l' modifier)

    return length;
}
