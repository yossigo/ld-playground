CFLAGS= -fvisibility=hidden
all.o: a.o b.o ver1.o
	ld $^ -r -o temp.o
	objcopy --localize-hidden temp.o all.o
	rm -f temp.o

clean:
	rm -f *.o
