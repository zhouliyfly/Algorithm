ALL: test

test: test.o circular_linked_list.o 
	gcc -g -o $@ $^

%.o: %.c
	gcc -g -c $< -o $@

.PHONY: clean
clean:
	rm *.o test -rf
