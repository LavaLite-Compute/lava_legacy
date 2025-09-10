# $Id: Makefile,v 1.3 2007/08/15 22:18:43 tmizan Exp $
#

TOP          = ../
include $(TOP)/Make.misc

.SUFFIXES: .$(OEXT)

CFLAGS_ECHKPNT=${EXTERN_CFLAGS}
# LSF lib
LSFLIB = $(TOP)/lsf/lib/liblsf.$(LEXT)

# The debug flag will be used by generic echkpnt and generic erestart
DEBUG = -DDEBUG

# generic echkpnt and generic erestart object file
OBJ_GEN_CMD = echkpnt.$(OEXT) erestart.$(OEXT)
OBJ_ECHKPNT_LIBS = echkpnt.env.$(OEXT) echkpnt.lib.$(OEXT)

# generic echkpnt and generic erestart header file
H_ECHKPNT_LIBS = echkpnt.env.h echkpnt.lib.h

# generic echkpnt and erestart binary
BIN_GEN_CMD = echkpnt$(EEXT) erestart$(EEXT)

OBJ_CMD = ${OBJ_GEN_CMD} ${OBJ_ECHKPNT_LIBS}

BINARIES =  ${BIN_GEN_CMD}

.c.$(OEXT)    :	$<
	$(CC) ${CFLAGS} -c -o $@ $<

build all:	$(BINARIES)

clean	:
	rm -f $(OBJ_CMD)
	rm -f $(BINARIES) core

lint	:
	lint -Ae $(DEFINES) *.c

brelease: build
	$(INST) ${BIN_GEN_CMD} $(BRELEASE)/$(LM_ARCH)/etc/

$(LSFLIB):
	cd ${@D}; $(MAKE)
#
# build the object file of generic echkpnt and erestart, these object file can not use the suffix rule
#

echkpnt.env.$(OEXT) : echkpnt.env.c  $(H_ECHKPNT_LIBS)
	$(CC) $(CFLAGS_ECHKPNT) -c $*.c

echkpnt.lib.$(OEXT) : echkpnt.lib.c  $(H_ECHKPNT_LIBS)
	$(CC) $(CFLAGS_ECHKPNT) -c $*.c

echkpnt.$(OEXT) : echkpnt.c  $(H_ECHKPNT_LIBS)
	$(CC) $(CFLAGS_ECHKPNT) -c $*.c

erestart.$(OEXT) : erestart.c  $(H_ECHKPNT_LIBS)
	$(CC) $(CFLAGS_ECHKPNT) -c $*.c

# Build the command echkpnt and erestart
#
${BIN_GEN_CMD} : ${OBJ_GEN_CMD} ${OBJ_ECHKPNT_LIBS} $(LSFLIB)
	$(CC) $(CFLAGS_ECHKPNT) -o $@ $@.o $(OBJ_ECHKPNT_LIBS) $(ECHKPNT_LIBS) $(LSFLIB) ${LDLLIB}

$(OBJ_DEF_ECHKPNT) $(OBJ_DEF_ERESTART) : $(HFILES)

