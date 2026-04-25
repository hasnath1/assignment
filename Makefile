MAKEFLAGS += -r

CC := gcc
CFLAGS := -Iinclude 

SRC := $(shell find . -name "*.c")
OBJS := $(patsubst %.c,%.o,$(SRC))

app: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(@) 

%.o:%.c
	$(CC) $(CFLAGS) -c $(<) -o $(@)

clean:
	rm -rf $(OBJS)
	rm app

