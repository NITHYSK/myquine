#!/bin/bash
digenesis(){
	make
	rm main.c
	./quine main.c
	rm quine
}

for((i=0;i<42;i++));do
	digenesis
done
