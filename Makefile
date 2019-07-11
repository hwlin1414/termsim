CC=clang
CFLAGS=-O3 -Weverything -g -fPIC
LIBS=-ldl#-lreadline -lpthread -lncursesw -ldl -lm
SHAREDOBJS=os_freebsd.o term.o
SHAREDLIB=os_freebsd.so
SHAREDFLAGS=-shared -Wl,-soname,$(SHAREDLIB).1
OBJS=main.o logger.o os.o machine.o term.o disk.o
TARGET=a.out
RM=rm -f

all: $(SHAREDLIB) $(TARGET)

$(SHAREDLIB): $(SHAREDOBJS)
	$(CC) $(SHAREDFLAGS) -o os_freebsd.so os_freebsd.o term.o
os_freebsd.o: os_freebsd.c
	$(CC) $(CFLAGS) -o os_freebsd.o -c os_freebsd.c

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LIBS) -o $(TARGET) $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) -o main.o -c main.c
logger.o: logger.c
	$(CC) $(CFLAGS) -o logger.o -c logger.c
os.o: os.c
	$(CC) $(CFLAGS) -o os.o -c os.c
machine.o: machine.c
	$(CC) $(CFLAGS) -o machine.o -c machine.c
term.o: term.c
	$(CC) $(CFLAGS) -o term.o -c term.c
disk.o: disk.c
	$(CC) $(CFLAGS) -o disk.o -c disk.c

clean:
	$(RM) $(OBJS) $(SHAREDOBJS)
	$(RM) $(TARGET) $(SHAREDLIB)

.PHONY: clean
