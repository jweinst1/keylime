TARGET = keylime
C_FLAGS = -Wall

all: bin/$(TARGET)

bin/$(TARGET): main.o bin/lib.a
	gcc $^ -o $@

main.o: src/main.c
	gcc $(C_FLAGS) -c $< -o $@

bin/lib.a: vm.o
	ar rcs $@ $^

vm.o: src/vm.c
	gcc $(C_FLAGS) -c -o $@ $<

clean:
	rm -f *.o bin/*
