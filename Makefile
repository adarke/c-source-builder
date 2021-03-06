#-------------------------------#
# makefile for c-source-builder #
#-------------------------------#
CC=gcc
CFLAGS=-g -Wall
# Compiler flags:
# 	-g	-- Enable debugging
# 	-Wall 	-- Show all warnings

c-source-builder: c-source-builder.c
	$(CC) $(CFLAGS) -o c-source-builder c-source-builder.c

clean:
	rm -f c-source-builder
