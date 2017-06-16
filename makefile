main: main.o vehiculo.o usuario.o cliente.o admin.o
	g++ main.o vehiculo.o usuario.o cliente.o admin.o -o main

main.o: main.cpp vehiculo.h usuario.h cliente.h admin.h
	g++ -c main.cpp

vehiculo.o: vehiculo.h vehiculo.cpp
	g++ -c vehiculo.cpp

usuario.o: usuario.h usuario.cpp
	g++ -c usuario.cpp

cliente.o: usuario.h cliente.h cliente.cpp
	g++ -c cliente.cpp

admin.o: usuario.h admin.h admin.cpp
	g++ -c admin.cpp

clean:
	rm -f *.o main