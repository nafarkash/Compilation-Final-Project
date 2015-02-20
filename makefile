all: out
out: out.o
	gcc -o out out.o
out.o: *.c
	gcc -c -o out.o *.c
clean:
	rm -f out *.o
clean-all:
	rm -f out *.o *.c