question_one: test.o add_code.o
	g++ test.o add_code.o -o added.out

test.o: test.cpp
	g++ -c test.cpp

add_code.o: add_code.cpp
	g++ -c add_code.cpp

clean:
	rm *.o added.out