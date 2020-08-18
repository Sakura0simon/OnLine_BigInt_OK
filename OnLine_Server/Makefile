.PYHONY:clean install uninstall

CC=g++
OBJS=./BigInt/bigint.o bigintser.o
CFLAGS=-Wall -g
LIBS=
BIN=bigintser.cgi

$(BIN):$(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBS)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(BIN)
install:
	cp $(BIN) ../Httpd/htdocs/
	cp ../BigInt_Html/*.html ../Httpd/htdocs/
	cp ./sqlite/*.cgi ../Httpd/htdocs/
uninstall:
	rm -fr ../Httpd/htdocs/$(BIN)
	rm -fr ../Httpd/htdocs/*.html