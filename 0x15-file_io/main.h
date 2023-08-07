#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Function prototypes */
void print_error(void);
void display_elf_header(char *filename);

/* Strings corresponding to OS/ABI values */
extern const char *os_abi_strings[];

/* Strings corresponding to ELF type values */
extern const char *elf_type_strings[];

#endif
