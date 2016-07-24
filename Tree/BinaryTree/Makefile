ALL: main

main: main.o binary_tree.o
	gcc  $^ -o $@

%.o: %.c
	gcc -o $@ -c  $<


.PHONY: clean
clean:
	rm -rf *.o main
