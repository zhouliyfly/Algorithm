all: test

test: test_single_list.o single_link_list.o
	gcc test_single_list.o single_link_list.o -o $@ 

%.o: %.c
	gcc -c $< -o $@ 
clean:
	rm *.o test -rf
