quine:
	cc -o parent main.c
	./parent > child.c
	cc -o child child.c
	./child > mago.c
	cc -o mago mago.c

clean:
	rm mago mago.c child child.c parent
