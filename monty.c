#include <monty.h>

int main(int argc, char *argv[])
{

if (argc !=2)
{

fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);

}

char *filepath = argv[1];

FILE *file = fopen(filepath, "r");

if (file == NULL)

{

fprintf(stderr, "Error: Can't open file ");
exit(EXIT_FAILURE);

}

return(0);
}

