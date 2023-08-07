#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/* Function prototypes */
void print_error(void);
void display_elf_header(char *filename);

int main(int argc, char *argv[]) {
if (argc != 2) {
print_error();
}

display_elf_header(argv[1]);

return 0;
}

void print_error(void) {
dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
exit(98);
}

void display_elf_header(char *filename) {
int fd = open(filename, O_RDONLY);
if (fd == -1) {
print_error();
}

char header[64];
ssize_t bytes_read = read(fd, header, sizeof(header));
if (bytes_read != sizeof(header)) {
close(fd);
print_error();
}

printf("ELF Header:\n");
printf("  Magic:   ");
for (size_t i = 0; i < 16; i++) {
printf("%02x", (unsigned char)header[i]);
if (i < 15) {
printf(" ");
}
}
printf("\n");

printf("  Class:                             ");
if (header[4] == 1) {
printf("ELF32\n");
} else if (header[4] == 2) {
printf("ELF64\n");
} else {
printf("<unknown>\n");
}

printf("  Data:                              ");
if (header[5] == 1) {
printf("2's complement, little endian\n");
} else if (header[5] == 2) {
printf("2's complement, big endian\n");
} else {
printf("<unknown>\n");
}

printf("  Version:                           %d (current)\n", header[6]);
printf("  OS/ABI:                            %s\n", os_abi_strings[header[7]]);
printf("  ABI Version:                       %d\n", header[8]);

printf("  Type:                              %s\n", elf_type_strings[header[16]]);

unsigned int entry_point = header[24] | (header[25] << 8) | (header[26] << 16) | (header[27] << 24);
printf("  Entry point address:               0x%x\n", entry_point);

close(fd);
}
