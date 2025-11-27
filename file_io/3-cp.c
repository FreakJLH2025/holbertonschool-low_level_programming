#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void err_exit(int code, const char *msg, const char *arg)
{
dprintf(STDERR_FILENO, msg, arg);
exit(code);
}

int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t r, w;
char buf[1024];

if (argc != 3)
err_exit(97, "Usage: cp file_from file_to\n", "");

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
err_exit(98, "Error: Can't read from file %s\n", argv[1]);

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
err_exit(99, "Error: Can't write to %s\n", argv[2]);

while ((r = read(fd_from, buf, 1024)) > 0)
if ((w = write(fd_to, buf, r)) != r)
err_exit(99, "Error: Can't write to %s\n", argv[2]);

if (r == -1)
err_exit(98, "Error: Can't read from file %s\n", argv[1]);

if (close(fd_from) == -1)
err_exit(100, "Error: Can't close fd %d\n", argv[1]);
if (close(fd_to) == -1)
err_exit(100, "Error: Can't close fd %d\n", argv[2]);

return (0);
}
