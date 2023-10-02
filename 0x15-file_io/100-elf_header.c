#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * Function to display the ELF header information
 * @param header Pointer to the ELF header structure
 */
void display_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("Class:  %d\n", header->e_ident[EI_CLASS]);
	printf("Data:  %d\n", header->e_ident[EI_DATA]);
	printf("Version:  %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:  %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:  %d\n", header->e_type);
	printf("Entry point address:  %lx\n", header->e_entry);
}

/**
 * Main function to read and display the ELF header of a file
 * @param argc Number of command-line arguments
 * @param argv Array of command-line argument strings
 * @return Returns 0 on success, or 98 for errors
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		return (98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading ELF header");
		return (98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Not an ELF file\n");
		return (98);
	}
	display_elf_header(&header);
	close(fd);
	return (0);
}
