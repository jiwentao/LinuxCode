mytest1:test1.c
		gcc -o $@ $^

.PHONY:clean
	clean:
	rm -f mytest1
