ALL: test

test: test.o double_linked_list.o
	gcc test.o double_linked_list.o -o test

%.o: %.c
	gcc -c $< -o $@


clean:
	rm *.o test -rf
