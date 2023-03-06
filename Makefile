program: main.c
	gcc main.c -o bubble

.PHONY: clean

clean: 
	rm bubble
