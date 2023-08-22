#include "main.h"

/**
 * get_length - checks and sets length flags for _printf
 * @format: the format string to parse
 * @pos: the current position in the format string
 * @f: pointer to the struct flags to set length flags
 *
 * Return: 1 if a valid length flag is set, 0 otherwise
 */
int get_length(const char *format, size_t pos, flags_t *f)
{
    int valid_length = 0;

    if (format[pos] == 'l')
    {
        f->length_l = 1;
        valid_length = 1;
    }
    else if (format[pos] == 'h')
    {
        f->length_h = 1;
        valid_length = 1;
    }

    return valid_length;
}
