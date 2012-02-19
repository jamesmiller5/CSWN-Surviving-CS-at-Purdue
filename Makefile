rot13: rot13.c
	gcc -g -o rot13 rot13.c

test: rot13
	./rot13 < tests/test1 | diff - tests/ans1
	./rot13 < tests/test2 | diff - tests/ans2
	./rot13 < tests/test3 | diff - tests/ans3

clean:
	rm -f rot13
