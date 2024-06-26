COMPILE.C=$(COMPILE.c)
COMPILE.c=$(CXX) $(CFLAGS) $(CCFLAGS) $(TARGET_ARCH) -c
CFLAGS=-g3 -I headers 
CCFLAGS= -Wall -Wextra -Wpedantic 
CXX= gcc
OUTPUT_OPTION = -o $@
#Linking:
LINK.o = $(CC) $(LDFLAGS) $(TARGET_ARCH)
CC= gcc

vpath %.c sources
vpath %.h headers

#rules:
%: %.o 
	$(LINK.o) $(OUTPUT_OPTION) $<
%.o: %.c
	$(COMPILE.C) $(OUTPUT_OPTION) $<

run: times
	valgrind ./times

times: times.o
times.o: times.c 
pseudo_rand: pseudo_rand.o 
pseudo_rand.o: pseudo_rand.c 
search_funcs: search_funcs.o 
search_funcs.o: search_funcs.c 
strings: strings.o
strings.o: strings.h
.INTERMEDIATE: *.o

.PHONY: depend #Now the file will be updated each time it is called.
depend: c.c
	gcc -I headers -M $(CPPFLAGS) $^ > $@
	more depend

.PHONY:clean
clean:
	rm -rf *.o c