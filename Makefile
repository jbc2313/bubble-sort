program: main.c
	gcc -g main.c -o bubble

.PHONY: clean

clean: 
	rm bubble
