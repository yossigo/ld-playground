
main: ver1/all.o ver2/all.o main.o
	cc $^ -o $@

ver1/all.o:
	make -C ver1

ver2/all.o:
	make -C ver2

clean:
	make -C ver1 clean
	make -C ver2 clean
	rm -f *.o main
