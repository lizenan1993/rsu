include $(TOPDIR)/config.mk

SRC_FILES := $(wildcard *.c)
OBJ_FILES := $(SRC_FILES:%.c=%.o)

all: $(DEPENDENCIES) $(OBJ_FILES)
	@
	
$(OBJ_FILES): %.o: %.c
	@echo compiling $<
	@$(CC) $(CFLAGS) $(CFLAGS_DBG) -c $< -o $@

$(DEPENDENCIES): $(SRC_FILES)
	@ $(ECHO) '##' > $(DEPENDENCIES)
	@ $(ECHO) '## This file is generated by "make"!' >> $(DEPENDENCIES)
	@ $(ECHO) '##' >> $(DEPENDENCIES)
	@for i in $^ ; do \
		$(ECHO) "  $$i"; \
		$(CC) -M -MG $(CFLAGS) $$i >> $(DEPENDENCIES);  \
		$(ECHO) '##' >> $(DEPENDENCIES);	\
	done

ifeq ($(shell if [ -a $(DEPENDENCIES) ]; then $(ECHO) 1; fi),1)
include $(DEPENDENCIES)
endif

clean:
	-rm *.o $(DEPENDENCIES)
	

