#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUF 1024

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, error code on failure
 */
int main(int argc, char *argv[])
{
int f1, f2, r, w;
char buffer[BUF];
mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
f1 = open(argv[1], O_RDONLY);
if (f1 == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perm);
if (f2 == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
while ((r = read(f1, buffer, BUF)) > 0)
{
w = write(f2, buffer, r);
if (w != r)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
if (r == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
if (close(f1) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
if (close(f2) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);
return (0);
}
