CC:=gcc

problem1: problem5.c
	$(CC) problem5.c -o problem5

clean:
	rm problem5
