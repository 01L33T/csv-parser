# Which compiler to use
CC = gcc
# Compiler flags
CFLAGS = -Wall -I. -g -Werror=vla -std=gnu99
# Final executable
TARGET = select
# Constituent object files
OBJ_PART1 = main.o parse.o

# Default Make recipe
default: part1

# part 1
part1: $(OBJ_PART1)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ_PART1)

# Clean recipe: removes all build artifacts
clean:
	$(RM) $(TARGET) $(OBJ_PART1)
